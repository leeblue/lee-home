%option noyywrap
%{  
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int line =1;
%}   
constant ([0-9])+
identfier [A-Z]|[a-z]([A-Z]|[a-z]|[0-9])*
note \/\*(.)*\*\/
blank [" "\t]
blanks {blank}+

%%   

"const" {return CONST;}
"var" {return VAR;}
"procedure" {return PROCEDURE;}
"begin" {return B;}
"end" {return END;}
"odd" {return ODD;}
"if" {return IF;}
"then" {return THEN;}
"call" {return CALL;}
"while" {return WHILE;}
"do" {return DO;}
"read" {return READ;}
"write" {return WRITE;}
":=" {return EQ;}
">=" {return BE;}
"<=" {return SE;}

"<" {return ('<');}
">" {return ('>');}
"+" {return ('+');}
"-" {return ('-');}
"*" {return ('*');}
"/" {return ('/');}
"#" {return ('#');}
"=" {return ('=');}
"," {return (',');}
"." {return ('.');}
"(" {return ('(');}
")" {return (')');}
";" {return (';');}
"\n" {line+=1;}

{constant} {return NUM;}  
{identfier} {return IDENTIFIER;} 
{note} {}
{blanks} {}

%%   
