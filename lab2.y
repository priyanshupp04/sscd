%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yyerror();
%}
%token A B
%%
str:s'\n' {printf("Valid Expression");}
;
s:x B
;
x: x A | A
;
%%
void main()
{
printf("Enter the input string:");
if(!yyparse())
{ printf("Valid String\n"); }
}
int yyerror()
{
printf("Non Valid String\n");
exit(0);
}

