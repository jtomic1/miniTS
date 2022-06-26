%option noyywrap yylineno

%{
   #include <string.h>
   #include "minits.tab.h"
   #include "defs.h"
%}

%%

[ \t\n]+             { /* skip */ }

"let"		     { return _DECLARATION;}
"var"		     { return _DECLARATION;}
"const"		     { return _DECLARATION;}

"function"	     { return _FUNCTION;}

"number"             { return _TYPE; }
"boolean"            { return _TYPE; }
"bigint"	     { return _TYPE;}
"string"	     { return _TYPE;}
"any"	  	     { return _TYPE;}
"undefined"	     { return _TYPE;}
"void"	  	     { return _TYPE;}

"if"                 { return _IF; }
"else"               { return _ELSE; }
"return"             { return _RETURN; }

"do"		     { return _DO;}
"while"		     { return _WHILE;}

"for"                { return _FOR;}
"in"		     { return _IN;}
"of"                 { return _OF;}

"break"              { return _BREAK;}
"continue"           { return _CONTINUE;}

"switch"	     { return _SWITCH;}
"case"		     { return _CASE;}
"default" 	     { return _DEFAULT;}

"try"	             { return _TRY;}
"catch"		     { return _CATCH;}
"finally" 	     { return _FINALLY;}

"enum"               { return _ENUM;}

"interface"          { return _INTERFACE;}

"("                  { return _LPAREN; }
")"                  { return _RPAREN; }
"{"                  { return _LBRACKET; }
"}"                  { return _RBRACKET; }
":"		     { return _COLON; }
";"                  { return _SEMICOLON; }
"="                  { return _ASSIGN; }
","		     { return _COMMA; }

"++"                 { return _INC; }
"--"                 { return _DEC; }

"+"                  { return _AROP; }
"-"                  { return _AROP; }
"*"                  { return _AROP; }
"/"                  { return _AROP; }


"=>"                 { return _ARROW; }
"<"                  { return _RELOP; }
">"                  { return _RELOP; }
"<="                 { return _RELOP; }
">="                 { return _RELOP; }
"=="                 { return _RELOP; }
"!="                 { return _RELOP; }
"==="                { return _RELOP; }
"!=="                { return _RELOP; }

"true"|"false"		 { return _BOOLEAN;}

[a-zA-Z_$][a-zA-Z0-9_$]* { return _ID; }

[+-]?[0-9]{1,10}     { return _NUMBER;}
[+-]?("0x"|"0X")[0-9a-fA-F]{1,10}     { return _NUMBER;}
[+-]?("0o"|"0O")[0-7]{1,10}     { return _NUMBER;}
[+-]?("0b"|"0B")[0-1]{1,10}     { return _NUMBER;}
[0-9]{1,10}[n]       { return _BIGINT;}
[\'][^']*[\']	     { return _STRING;}
"`"[^`]*"`"    	     { return _STRING;}
\"[^\"]*\"		     { return _STRING;}

\/\/.*               { /* skip */ }
.                    { printf("line %d: LEXICAL ERROR on char %c\n", yylineno, *yytext);}
%%
