%{
#include<stdio.h>
int yyerror() ;
int yylex();
%}
%token A B
%%
str:s'\n' {printf("Valid Expression") ;}
;
s:x B
;
x:x A
| A 
;
%%

void main()
{
    printf("Enter a input string :") ;
    if(!yyparse()) {
        printf("Valid String ") ;
    }
}

int yyerror()
{
    printf("Invalid input String") ;
}
