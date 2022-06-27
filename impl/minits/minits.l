%option noyywrap yylineno

%{
   #include <string.h>
   #include "minits.tab.h"
   #include "defs.h"
%}

%%

[ \t\n]+             { /* skip */ }

"let"		     { yylval.s = strdup(yytext); return _DECLARATION;}
"var"		     { yylval.s = strdup(yytext); return _DECLARATION;}
"const"		     { yylval.s = strdup(yytext); return _DECLARATION;}

"function"	     { return _FUNCTION;}

"number"             { yylval.i = NUMBER; return _TYPE; }
"boolean"            { yylval.i = BOOLEAN; return _TYPE; }
"bigint"	     { yylval.i = BIGINT; return _TYPE;}
"string"	     { yylval.i = STRING; return _TYPE;}
"any"	  	     { yylval.i = ANY; return _TYPE;}
"undefined"	     { yylval.i = UNDEFINED; return _TYPE;}
"void"	  	     { yylval.i = VOID; return _TYPE;}

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

"+"                  { yylval.i = ADD; return _AROP; }
"-"                  { yylval.i = SUB; return _AROP; }
"*"                  { yylval.i = MUL; return _AROP; }
"/"                  { yylval.i = DIV; return _AROP; }


"=>"                 { return _ARROW; }

"<"                  { yylval.i = LT; return _RELOP; }
">"                  { yylval.i = GT; return _RELOP; }
"<="                 { yylval.i = LE; return _RELOP; }
">="                 { yylval.i = GE; return _RELOP; }
"=="                 { yylval.i = EQ; return _RELOP; }
"!="                 { yylval.i = NE; return _RELOP; }
"==="                { yylval.i = EEQ; return _RELOP; }
"!=="                { yylval.i = ENE; return _RELOP; }

"true"|"false"		 { yylval.s = strdup(yytext); return _BOOLEAN;}

[a-zA-Z_$][a-zA-Z0-9_$]* { yylval.s = strdup(yytext); return _ID; }

[+-]?[0-9]{1,10}     { yylval.s = strdup(yytext); return _NUMBER;}
[+-]?("0x"|"0X")[0-9a-fA-F]{1,10}     { yylval.s = strdup(yytext); return _NUMBER;}
[+-]?("0o"|"0O")[0-7]{1,10}     { yylval.s = strdup(yytext); return _NUMBER;}
[+-]?("0b"|"0B")[0-1]{1,10}     { yylval.s = strdup(yytext); return _NUMBER;}
[0-9]{1,10}[n]       { yylval.s = strdup(yytext); return _BIGINT;}
[\'][^']*[\']	     { yylval.s = strdup(yytext); return _STRING;}
"`"[^`]*"`"    	     { yylval.s = strdup(yytext); return _STRING;}
\"[^\"]*\"		     { yylval.s = strdup(yytext); return _STRING;}

\/\/.*               { /* skip */ }
.                    { printf("line %d: LEXICAL ERROR on char %c\n", yylineno, *yytext);}
%%
