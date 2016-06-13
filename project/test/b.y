%{
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
%}
%token NUM
%token ID 
%token IF WHILE DO BREAK REAL TRUE FALSE BASIC ELSE INDEX GE LE NE EQ AND OR
%%
program : block { printf("program-->block\n"); }
        ;
block : '{' decls stmts '}' { printf("block-->{decls stmts}\n"); }
      ;
decls :
      | decls decl { printf("decls-->decls decl\n"); }
      ;
decl : type ID ';' { printf("decl-->type id;\n"); }
     ;
type : type '[' NUM ']' { printf("type-->type[num]\n"); }
     | BASIC { printf("type-->basic\n"); }
     ;
stmts :
      | stmts stmt { printf("stmts-->stmts stmt\n"); }
      ;
stmt : matched_stmt { printf("stmt-->matched_stmt\n");}
     | open_stmt { printf("stmt-->open_stmt\n");}
     ;
open_stmt: IF '(' booL ')' stmt { printf("open_stmt-->if(bool)stmt\n");}
	 | IF '(' booL ')' matched_stmt ELSE open_stmt { printf("open_stmt-->if(bool) matched_stmt else open_stmt\n");}
         ;
matched_stmt: IF '(' booL ')' matched_stmt ELSE matched_stmt { printf("matched_stmt-->if(bool) matched_stmt else matched_stmt\n");}
	    | other { printf("matched_stmt-->other\n");}
            ;
other: loc '=' booL ';' { printf("stmt-->loc=bool;\n"); }
     | WHILE '(' booL ')' stmt { printf("stmt-->while(bool)stmt\n"); }
     | DO stmt WHILE '(' booL ')' ';' { printf("stmt-->do stmt while(bool);\n"); }
     | BREAK ';' { printf("stmt-->break;\n"); }
     | block { printf("stmt-->block\n"); }
     ;
loc : loc '[' booL ']' { printf("loc-->loc[bool]\n"); }
    | ID { printf("loc-->id\n"); }
    ;
booL : booL OR join { printf("bool-->bool||join\n"); }
     | join { printf("bool-->join\n"); }
     ;
join : join AND equality { printf("join-->join&&equality\n"); }
     | equality { printf("join-->equality\n"); }
     ;
equality : equality EQ rel { printf("equality-->equality==rel\n"); }
         | equality NE rel { printf("equality-->equality!=rel\n"); }
 	 | rel { printf("equality-->rel\n"); }
	 ;
rel : expr '<' expr { printf("rel-->expr<expr\n"); }
    | expr LE expr { printf("rel-->expr<=expr\n"); } 
    | expr GE expr { printf("rel-->expr>=expr\n"); }
    | expr '>' expr { printf("rel-->expr>expr\n"); }
    | expr { printf("rel-->expr\n"); }
    ;
expr : expr '+' term { printf("expr-->expr+term\n"); }
     | expr '-' term { printf("expr-->expr-term\n"); }  
     | term { printf("expr-->term\n"); }
     ;
term : term '*' unary { printf("term-->term*unary\n"); }
     | term '/' unary { printf("term-->term/unary\n"); }
     | unary { printf("term-->unary\n"); }
     ;
unary : '!' unary { printf("unary-->!unary\n"); }
      | '-' unary { printf("unary-->-unary\n"); }
      | factor { printf("unary-->factor\n"); }
      ;
factor : '(' booL ')' { printf("factor-->(bool)\n"); }
       | loc { printf("factor-->loc\n"); }
       | NUM { printf("factor-->num\n"); }
       | REAL { printf("factor-->real\n"); }
       | TRUE { printf("factor-->true\n"); }
       | FALSE { printf("factor-->false\n"); }
   ;
%%
#include"lex.yy.c"
main(int argc,char **argv)
{
	yyparse();
}
yyerror(char *s)
{
	fprintf(stderr,"error:%s\n",s);
}