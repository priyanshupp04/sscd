%{
#include "y.tab.h"
int yylex();
%}
%%
a {return A;}
b {return B;}
\n {return yytext[0];}
. {return yytext[0];}
%%
