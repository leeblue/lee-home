%{
#include<ctype.h>
#include<stdio.h>
#define YYSIYPE double

void yyerror(char *s)
{
  printf("%s\n",s);
}
%}
%token NUM
%token BASIC IF ELSE DO BREAK  REAL TRUE FALSE ID LE INDEX 
%token WHILE AND OR EQ NE GE 
%left '+''-' 
%left '*''/' 
%right UMINUS 
%%  
program : block {printf("program->block\n");}

;
block:'{'decls stmts'}' {printf("block->decls stmts\n");}
;
decls : decls decl {printf("decls->decls decl\n");}
  | {printf("\decls->E\n");} ;
decl : type ID ';'  {printf("decl->type id\n");}
; 
type : type '[' NUM ']'  {printf("type->type [num]\n");} 
  | BASIC  {printf("type->basic\n");}   ; 
stmts : stmts stmt  {printf("stmts->stmts stmt\n");} 
  |  {printf("stmts->E\n");}   ; 
stmt : loc '=' bool ';'  {printf("stmt->loc=bool\n");} 
  |IF '(' bool ')' stmt  {printf("stmt->if(bool) stmt\n");} 
  |IF '(' bool ')' stmt ELSE stmt  {printf("stmt->if(bool) stmt else stmt\n");}   |WHILE '(' bool')' stmt  {printf("stmt->while(bool) stmt\n");} 
  |DO stmt WHILE '(' bool ')' ';'  {printf("stmt->->do stmt while(bool)\n");}   |BREAK ';'  {printf("stmt->break\n");}   | block  {printf("stmt->block\n");}  
 
; 
loc  : loc '[' bool ']'   {printf("loc->loc[bool]\n");}         |ID  {printf("loc->id\n");} 
  ; 
bool : bool OR join  {printf("bool->bool||join\n");} 
  | join  {printf("bool->join\n");}   ; 
join : join AND equality  {printf("join->join && equality\n");} 
  | equality  {printf("join->equality\n");}   ; 
equality : equality EQ rel  {printf("equality->equality==rel\n");} 
  | equality NE rel  {printf("equality->equality!=rel\n");}   | rel  {printf("equality->rel\n");}   ; 
rel  : expr '<' expr  {printf("rel->expr<expr\n");}   | expr LE expr  {printf("rel->expr<=expr\n");}   | expr '>' expr  {printf("rel->expr>expr\n");}   | expr GE expr  {printf("rel->expr>=expr\n");}   | expr  {printf("rel->expr\n");}   ; 
expr : expr '+' term  {printf("expr->expt+term\n");} 
  | expr '-' term  {printf("expr->expr-term\n");}   | term  {printf("expr->term\n");}  
 
; 
term : term '*' unary  {printf("term->term*unary\n");} 
  | term '/' unary  {printf("term->term/unary\n");}   | unary  {printf("term->unary\n");}   ; 
unary : '!' unary  {printf("unary->!unary\n");} 
  | '-' unary  {printf("unary->-unary\n");}   | factor  {printf("unary->factor\n");}   ; 
factor: '(' bool ')'  {printf("factor->(bool)\n");} 
  | loc  {printf("factor->loc\n");}   | NUM  {printf("factor->num\n");}   | REAL  {printf("factor->real\n");}   | TRUE  {printf("factor->true\n");}   | FALSE  {printf("factor->false\n");}   
; 
%% 

#include "lex.yy.c" int yyparse(); 
extern void BeginCompileOneFile( const char * filename ); extern void EndCompileOneFile(void); void main() {   char filename[200]; 
 printf("请输入源程序文件名：");   scanf("%s:",filename); 
 BeginCompileOneFile( filename );     yyparse(); 
 EndCompileOneFile();   
} 
3