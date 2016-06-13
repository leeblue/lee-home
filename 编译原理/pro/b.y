%{
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
%}

%token IF THEN WHILE DO READ WRITE CALL BEG END CONST VAR PROCEDURE ODD
%token CONCAT MINUS MULTI DIVIDE 
%token END_STMT OPEN_PAR CLOSE_PAR PAUSE DOT
%token ASSIGN DASSIGN JING SM_EQ BI_EQ SMALL BIG
%token ID NUM ERRORTOKEN

/*  YACC rules  */
%%
program
      : segment DOT {printf("程序->分程序.\n");}
      ;

segment
      : const_explain vari_explain proce_explain statement  {printf("分程序->常量说明部分 变量说明部分 过程说明部分 语句\n");}
      | const_explain vari_explain statement  {printf("分程序->常量说明部分 变量说明部分 语句\n");}
      | const_explain statement  {printf("分程序->常量说明部分 语句\n");}
      | const_explain proce_explain statement  {printf("分程序->常量说明部分 过程说明部分 语句\n");}
      | vari_explain proce_explain statement  {printf("分程序->变量说明部分 过程说明部分 语句\n");}
      | vari_explain statement  {printf("分程序->变量说明部分 语句\n");}
      | proce_explain statement  {printf("分程序->过程说明部分 语句\n");}/*procedure P;   */
      | statement  {printf("分程序->语句\n");}
      ;

const_explain
      : CONST const_defi const_defi_list  END_STMT     {printf("常量说明部分->CONST 常量定义 常量定义串 ;\n");}
      | CONST const_defi END_STMT       {printf("常量说明部分->CONST 常量定义 ;\n");}
      ;

const_defi_list
      : const_defi_list PAUSE const_defi    {printf("常量定义串->常量定义串,常量定义\n");}
      | PAUSE const_defi    {printf("常量定义串->,常量定义\n");}
      ;

const_defi
      : ID DASSIGN NUM {printf("常量定义->ID := NUM\n");}
      ;

vari_explain
      : VAR ID ID_list END_STMT  {printf("变量说明部分->VAR ID 标识符串 ;\n");}/* var  B,C;  */
      | VAR ID END_STMT  {printf("变量说明部分->VAR ID ;\n");} 
      ;

ID_list
      : PAUSE ID {printf("标识符串->, ID\n");}
      | ID_list PAUSE ID  {printf("标识符串->标识符串 , ID\n");}
      ;

proce_explain
      : proce_head segment pro_explain_list END_STMT {printf("过程说明部分->过程首部 分程序 过程说明串 ;\n");}
      | proce_head segment END_STMT  {printf("过程说明部分->过程首部 分程序 ;\n");}
      ;

pro_explain_list
      : END_STMT proce_explain  {printf("过程说明串->; 过程说明部分\n");}
      | pro_explain_list END_STMT proce_explain  {printf("过程说明串->过程说明串 ; 过程说明部分\n");}
      ;

proce_head
      : PROCEDURE ID END_STMT  {printf("过程首部->PROCEDURE ID ;\n");}
      ;

statement
      : assign_statement  {printf("语句->赋值语句\n");        }
      | compound_statement  {printf("语句->符合语句\n");}
      | if_statement  {printf("语句->条件语句\n"); }
      | while_statement  {printf("语句->当型循环语句\n");}
      | pro_statement  {printf("语句->过程调用语句\n");}
      | read_statement  {printf("语句->读语句\n"); }
      | write_statement  {printf("语句->写语句\n");  }
      |          {printf("语句->空\n");  }
      ;

assign_statement
      : ID DASSIGN expression  {printf("赋值语句->ID := 表达式\n"); }
      ;

compound_statement
      : BEG statement statement_list END   {printf("复合语句->BEGIN 语句 语句串 END\n"); }
      | BEG statement END  {printf("复合语句->BEGIN 语句 END\n");  }
      ;

statement_list
      : END_STMT statement {printf("语句串->; 语句\n"); }
      | statement_list END_STMT statement {printf("语句串->语句串 ; 语句\n"); }
      ;

condition
      : expression relation_op expression {printf("条件->表达式 关系运算符 表达式\n"); }
      | ODD expression {printf("条件->ODD 表达式\n");}
      ;

if_statement
      : IF condition THEN statement  {printf("条件语句->IF 条件 THEN 语句\n");}
      ;

expression
      : CONCAT term con_term_list {printf("表达式->+ 项 加法和项的串\n");}
      | MINUS term con_term_list {printf("表达式->- 项 加法和项的串\n");}
      | term con_term_list  {printf("表达式->项 加法和项的串\n");}
      | term  {printf("表达式->项\n");}
      | CONCAT term {printf("表达式->+ 项\n");}
      | MINUS term  {printf("表达式->- 项\n");}
      ;

con_term_list
      : con_term_list con_op term  {printf("加法和项的串->加法和项的串 加法运算符 项\n");}
      | con_op term  {printf("加法和项的串->加法运算符 项\n");}
      ;

term
      : elem mul_op_elem_list {printf("项->因子 乘法运算符和因子的串\n");}
      | elem  {printf("项->因子\n");}
      ;

mul_op_elem_list
      : mul_op_elem_list mul_op elem  {printf("乘法运算符和因子的串->乘法运算符和因子的串 乘法运算符 因子\n");}
      | mul_op elem {printf("乘法运算符和因子的串->乘法运算符 因子\n");}
      ;

elem
      : ID  {printf("因子->ID\n");}
      | NUM  {printf("因子->NUM\n");}
      | OPEN_PAR expression CLOSE_PAR  {printf("因子->( 表达式 )\n");}
      ;

con_op
      : CONCAT  {printf("加法运算符->+\n");}
      | MINUS   {printf("加法运算符->-\n");}
      ;

mul_op
      : MULTI   {printf("乘法运算符->*\n");}
      | DIVIDE    {printf("乘法运算符->/\n");}
      ;

relation_op
      : ASSIGN {printf("关系运算符->=\n");}
      | JING   {printf("关系运算符->#\n");}
      | SMALL  {printf("关系运算符-><\n");}
      | BIG    {printf("关系运算符->>\n");}
      | SM_EQ  {printf("关系运算符-><=\n");}
      | BI_EQ  {printf("关系运算符->>=\n");}
      ;

while_statement
      : WHILE condition DO statement {printf("当型循环语句->WHILE 条件 DO 语句\n");}
      ;

pro_statement
      : CALL ID  {printf("过程条用语句->CALL ID\n");}
      ;

read_statement
      : READ OPEN_PAR ID ID_list CLOSE_PAR  {printf("读语句->READ ( ID 标识符串 )\n");}
      | READ OPEN_PAR ID CLOSE_PAR   {printf("读语句->READ ( ID )\n");}
      ;

write_statement
      : WRITE OPEN_PAR expression expression_list CLOSE_PAR  {printf("写语句->WRITE ( 表达式 表达式串 )\n");}
      | WRITE OPEN_PAR expression CLOSE_PAR  {printf("写语句->WRITE ( 表达式 )\n");}
      ;

expression_list
      : expression_list PAUSE expression  {printf("表达式串->表达式串 , 表达式\n");}
      | PAUSE expression  {printf("表达式串->, 表达式\n");}
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
