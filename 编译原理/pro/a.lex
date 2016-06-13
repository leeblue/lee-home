%option noyywrap
%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>                     
%}

ident [A-Za-z][A-Za-z0-9]*
number  [1-9][0-9]*
WSPACE   [ \t]+ 



%start Comment
%%
"if"|"IF"     {return IF;}
"then"|"THEN"   {return THEN;}
"while"|"WHILE"  {return WHILE;}
"do"|"DO"  {return DO;}
"read"|"READ"  {return READ;}
"write"|"WRITE"  {return WRITE;}
"call"|"CALL"  {return CALL;}
"begin"|"BEGIN"  {return BEG;}
"end"|"END"  {return END;}
"const"|"CONST"  {return CONST;}
"var"|"VAR"  {return VAR;}
"procedure"|"PROCEDURE"  {return PROCEDURE;}
"odd"|"ODD"  {return ODD;}
","    {return PAUSE;}
"."    {return DOT;}
"="    {return ASSIGN;}
":="      {return DASSIGN;}
"+"      {return CONCAT;}
"-"      {return MINUS;}
"*"      {return MULTI;}
"/"      {return DIVIDE;}
"#"      {return JING;}
"<"      {return SMALL;}
">"      {return BIG;}
"<="     {return SM_EQ;}
">="     {return BI_EQ;}
";"      {return END_STMT;}
"("      {return OPEN_PAR;}
")"      {return CLOSE_PAR;}

{number}|"0"   {return NUM;}
{ident}  {return ID;}         /* identifier*/
"\n"       {}                 /* newline: count lines */
{WSPACE}   {}                        /* whitespace: (do nothing) */
.        {return ERRORTOKEN;}       /* other char: error, illegal token */

%%


