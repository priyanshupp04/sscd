%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int v=0,id=0,op=0,flag=0;
%}
%%
[A-Za-z0-9]+ {id++;printf("\nIdentifier:");ECHO;}
[\+\-\*\/\=]+ {op++;printf("\nOperator:");ECHO;}
"(" {v++;}
")" {v--;}
; {flag=0;}
.|\n ;
%%
void main()
{
printf("Enter the input String:");
yylex();
if((op+1)==id && v==0)
	printf("Valid Expression\n");
else 
{printf("Invalid Expression\n");}
printf("\nNumber of Identifier:%d",id);
printf("\nNumber of Operator:%d",op);
}

