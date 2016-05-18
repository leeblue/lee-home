%{
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
%}
%token IDENTIFIER NUM CONST VAR PROCEDURE B END ODD IF THEN CALL WHILE DO READ WRITE EQ BE SE
%left '+' '-'
%left '*' '/'
%%
program:part_program '.' {printf("program -> part_program\n");}
;

part_program:constant_illstruction var_instruction process_instruction statment{printf("part_program -> constant_illstruction+var_instruction+process_instruction+statment\n");}
		  |constant_illstruction var_instruction statment{printf("part_program -> constant_illstruction+var_instruction+statment\n");}
		  |constant_illstruction statment{printf("part_program -> constant_illstruction+statment\n");}
		  |constant_illstruction process_instruction statment{printf("part_program -> constant_illstruction+process_instruction+statment\n");}
		  |var_instruction process_instruction statment{printf("part_program -> var_instruction+process_instruction+statment\n");}
		  |var_instruction statment{printf("part_program -> var_instruction+statment\n");}
		  |process_instruction statment{printf("part_program -> process_instruction\+statment\n");}
		  |statment{printf("part_program -> statment\n");}
		  ;

constant_illstruction: CONST const_define ';' {printf("constant_illstruction -> const_define\n");}
		   |constant_illstruction ',' const_define{printf("constant_illstruction -> constant_illstruction\n");}
		   ;
const_define:IDENTIFIER '=' NUM {printf("const_define -> IDENTIFIER\n");}
;
var_instruction:VAR var_mid ';'{printf("var_instruction -> IDENTIFIER\n");}
	      ;
var_mid:IDENTIFIER{printf("var_mid -> IDENTIFIER\n");}
	|IDENTIFIER ',' var_mid{printf("var_mid -> var_mid \n");}
	;
process_instruction:process_head part_program ';'{printf("process_instruction -> process_head\n");}
		   |process_head part_program ';' process_instruction ';' {printf("process_instruction -> process_head + process_instruction");}
		   ; 
process_head:PROCEDURE IDENTIFIER ';'{printf("process_head -> PROCEDURE\n");}
;
statment:assignment {printf("statment -> assignment\n");}
	 |condition  {printf("statment -> condition\n");}
	 |circle {printf("statment -> circle\n");}
	 |process_transfer {printf("statment -> process_transfer\n");}
	 |read_statment {printf("statment -> read_statment\n");}
	 |write_statment {printf("statment-> write_statment\n");}
	 |complex {printf("statment -> complex\n");}
	 |empty {printf("statment -> empty\n");}
	 ;
assignment:IDENTIFIER EQ expression{printf("assignment -> expression\n");}
;
complex:B statment addition_complex END {printf("complex -> END\n");}
;
addition_complex: {printf("addition_complex -> empty\n");}
		|addition_complex ';'statment{printf("addition_complex -> addition_complex\n");}
		;
empty:{printf("empty\n");}
;
con: expression operation expression{printf("con -> expression operation expression\n");}
	  |ODD expression{printf("con -> ODD expression\n");}
	  ;
expression:'+' item addition_expression {printf("expression -> +\n");}
	  |'-' item addition_expression{printf("expression -> -\n");}
	  |item addition_expression{printf("expression -> item\n");}
	  ;
addition_expression:{printf("addition_expression -> empty\n");}
		  |addition_expression  plusoperation item{printf("addition_expression -> self\n");}
		  ;
		  
item: divisor{printf("item -> divisor \n");}
    | item muloperation divisor{printf("item -> item muloperation divisor \n");}
    ;
divisor:IDENTIFIER{printf("divisor -> IDENTIFIER\n");}
      |NUM{printf("divisor -> NUM\n");}
      | '(' expression ')'{printf("divisor -> (expression)\n");}
      ;
plusoperation:'+'{printf("plusoperation -> +\n");}
	    |'-'{printf("plusoperation -> -\n");}
	    ;
muloperation:'*'{printf("muloperation -> *\n");}
	    |'/'{printf("muloperation -> // /n");}
	    ;
operation:'=''='{printf("operation -> ==\n");}
	  |'#'{printf("operation -> #\n");}
	  |'<'{printf("operation -> <\n");}
	  |'>'{printf("operation -> >\n");}
	  |SE{printf("operation -> SE\n");}
	  |BE{printf("operation ->BE");}
	  ;
condition: IF con THEN statment{printf("condition -> IF con THEN statment\n");};
process_transfer: CALL IDENTIFIER{printf("process_transfer -> CALL IDENTIFIER\n");};
circle:WHILE con DO statment{printf("circle -> WHILE con DO statment\n");};
read_statment:READ '(' IDENTIFIER ')' {printf("read_statment -> READ\n");}
;
write_statment:WRITE '('expression')'{printf("write_statment -> WRITE\n");};
%%
#include "lex.yy.c"
void main(int argc,char **argv) 
{
    yyparse();

    }
yyerror(char *s) {
    fprintf(stderr,"在第%d行，出现错误!\n",line);
} 
