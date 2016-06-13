%option noyywrap
%{
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
%}
delim    [ \t\n]
ws       {delim}+
letter   [A-Za-z]
digit    [0-9]
%%
{ws}      { }
"if"      {printf("IF ");return(IF);}
"else"    {printf("ELSE ");return(ELSE);}
"int"     {printf("INT "); return(BASIC);}
"float"   {printf("FLOAT "); return(BASIC);}
"break"   {printf("BREAK");return(BREAK);}
"do"      {printf("DO ");return(DO);}
"while"   {printf("WHILE ");return(WHILE);}
"true"    {printf("TRUE ");return(TRUE);}
"index"   {printf("INDEX "); return(INDEX);}
"bool"    {printf("BOOL "); return(BASIC);}
"char"    {printf("CHAR "); return(BASIC);}
"real"    {printf("real");return(REAL);}
"false"   {printf("FLASE "); return(FALSE);}
[a-zA-Z_][a-zA-Z0-9_]* {printf("ID");return(ID);}
[+-]?[0-9]+     	   {printf("NUM");return(NUM);}
[+-]?[0-9]*[.][0-9]+   {printf("NUM");return(NUM);}
"<"       {printf("LT ");return('<');}
"<="      {printf("LE ");return(LE);}
"="       {printf("= ");return('=');}
"=="      {printf("EQ ");return(EQ);}
"!="      {printf("NE ");return(NE);}
">"       {printf("GT ");return('>');}
">="      {printf("GE ");return(GE);}
"+"       {printf("+ ");return('+');}
"-"       {printf("- ");return('-');}
"["       {printf("[ ");return('[');}
"]"       {printf("] ");return(']');}
"{"       {printf("{");return('{');}  
"}"       {printf("}");return('}');}
"("       {printf("(");return('(');}
")"       {printf(")");return(')');}
";"       {printf(";");return(';');}
","       {printf(",");return(',');}
"&&"      {printf("&&");return(AND);}
"||"      {printf("||");return(OR);}
%%