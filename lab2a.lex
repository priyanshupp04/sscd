%{
#include "y.tab.h"
%}
%%
a {return A;}
b {return B;}
\n {return yytext[0];}
. {return yytext[0];}
%%
 
%{
#include<stdio.h>
int yyerror();
%}
%token A B
%%
str: s '\n' {printf("Valid Expression");}
;
s:xB
;
x:xA|A
;
%%
void main()
{
printf("Enter ip string");
if(!yyparse())
{
printf("valid string");
}
}
int yyerror()
{
printf("Invalid ip string");
exit(0);
}
