%{
#include<stdio.h>
#include "y.tab.h"
extern int yylval ; 
%}
%%
[\t] {;}
[+|-|*|/|=|<|>] {printf("%s is operator\n",yytext); return op;}
int|char|float|void|if|else {printf("%s is keyword\n",yytext);return key;}
[0-9]+ {yylval = atoi(yytext);printf("%d is digit\n",yylval);return digit ; }
[A-Za-z0-9]+ {printf("%s is identifier\n",yytext);return id;}
. {;}
%%
