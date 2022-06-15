%{
#include<stdio.h>
int a[] = {0,0,0,0},opnd=0,valid=1;
%}
%x oper
%%
[a-zA-Z0-9]+ {opnd++; BEGIN oper;}
<oper>"+" {if(valid) {valid=0;i=0;}
	 else ext();}
<oper>"-" {if(valid) {valid=0;i=1;}
	 else ext();}
<oper>"*" {if(valid) {valid=0;i=2;}
	 else ext();}
<oper>"/" {if(valid) {valid=0;i=3;}
	 else ext();}
<oper>[0-9a-zA-Z]+ {opnd++;
		 if(valid==0){valid=1,a[i]++;}
		 else ext();}
<oper>"\n" {if(valid==0) ext(); 
	   else return 0;}
.|\n {ext();}
%%

void ext()
{
printf("Invalid Expression");
exit(0);
}

void main()
{
printf("Input expression\n");
yylex();
printf("No of identifiers=%d\n No of + operators=%d\nNo of - operators=%d\n No of * operators=%d\n No of / operators=%d\n ",a[0],a[1],a[2],a[3]);
}
