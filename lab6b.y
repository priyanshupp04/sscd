%{
#include<stdio.h>
#include<stdlib.h>
int dig_count=0,key_count=0,id_count=0,op_count=0;
%}
%token digit key op id

%%
input:
digit input {dig_count++;}
|key input	{key_count++;}
|id input	{id_count++;}
|op input	{op_count++;}
|digit {dig_count++;}
|id {id_count++;}
|key {key_count++;}
|op {op_count++;}
;
%%
#include<stdio.h>
extern int yylex();
extern int yyparse();
extern FILE*yyin;
int main()
{
	FILE *myfile=fopen("lab5.c","r");
	if(!myfile)
	{	printf("Cant open file\n");
		return -1;
	}
	yyin = myfile ;
	do{
		yyparse();
	}while(!feof(yyin));
printf("\nKeyword=%d\nIdentifier=%d\nOperator=%d\nDigit=%d\n",key,id,op,digit);
}
int yyerror()
{
	printf("ERROR\n");
	exit(-1);
}
