%{  
#include <stdio.h>  
#include <stdlib.h>   
  
%}   


operator \s+|-|\*|\/|:=|>=|<=|#|=
reservedWord const|var|procedure|begin|end|odd|if|then|call|while|do|read|write
delimiter [,\.;()]
constant ([0-9])+
identfier [A-Za-z]([A-Za-z][0-9])*
note \/\*(.)*\*\/
blanks (\s)+


%%   
{reservedWord} {printf("保留字\t(1,‘%s’)\n",yytext);}  
{operator} {printf("运算符\t(2,‘%s’)\n",yytext); }  
{delimiter} {printf("分界符\t(3,‘%s’)\n",yytext);}  
{constant} {printf("常  数\t(4,‘%s’)\n",yytext);}  
{identfier} {printf("标识符\t(5,‘%s’)\n",yytext);} 
{note} {}
{blanks} {}


%%   
void main()   
{   
yyin=fopen("/home/lee/byyl/project/test.txt","r");   
yylex(); /* start the analysis*/   
fclose(yyin);   
}   
int yywrap()   
{   
return 1;   
}   