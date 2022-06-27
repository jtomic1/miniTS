%{
  #include <stdio.h>
  #include "defs.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  extern int yylineno;
%}

%token _TYPE
%token _DECLARATION
%token _NEWLINE
%token _FUNCTION

%token _IF
%token _ELSE
%token _RETURN

%token _DO
%token _WHILE

%token _FOR
%token _IN
%token _OF
 
%token _BREAK
%token _CONTINUE

%token _SWITCH
%token _CASE
%token _DEFAULT

%token _TRY
%token _CATCH
%token _FINALLY

%token _ENUM
%token _INTERFACE

%token _INC
%token _DEC

%token _ID
%token _NUMBER
%token _BIGINT
%token _BOOLEAN
%token _STRING

%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET
%token _ASSIGN
%token _COLON
%token _SEMICOLON
%token _AROP
%token _RELOP

%token _ARROW
%token _COMMA

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  : statement_list
  ;

statement_list
  : statement
  | statement_list statement
  ;

function
  : _FUNCTION _ID _LPAREN parameter _RPAREN _COLON _TYPE body
  | _FUNCTION _ID _LPAREN parameter _RPAREN body
  | _DECLARATION _ID _ASSIGN _FUNCTION _LPAREN parameter _RPAREN _COLON _TYPE body
  | _DECLARATION _ID _ASSIGN _FUNCTION _LPAREN parameter _RPAREN body
  ;

type
  : _TYPE
  ;

parameter
  : /* empty */
  | _ID _COLON type
  | parameter _COMMA _ID _COLON type
  ;

body
  : _LBRACKET statement_list _RBRACKET
  | body _SEMICOLON
  ;

variable_declaration
  : _DECLARATION _ID 
  | _DECLARATION _ID _COLON _TYPE 
  ;

statement
  : compound_statement
  | function
  | variable_declaration _SEMICOLON
  | assignment_statement _SEMICOLON
  | inline_assignment _SEMICOLON
  | if_statement
  | return_statement
  | while_loop
  | do_while_loop
  | function_call _SEMICOLON
  | for_loop
  | for_iterate_loop
  | inc_dec_exp _SEMICOLON
  | switch_statement
  | try_statement
  | enum_statement
  | interface_statement
  ;

compound_statement
  : _LBRACKET statement_list _RBRACKET
  | _LBRACKET statement_list _RBRACKET _SEMICOLON
  ;

assignment_statement
  : _ID _ASSIGN num_exp
  ;

inline_assignment
  : _DECLARATION _ID _COLON type _ASSIGN num_exp
  | _DECLARATION _ID _ASSIGN num_exp
  ;

num_exp
  : exp
  | num_exp _AROP exp
  ;

exp
  : literal
  | _ID
  | function_call
  | _LPAREN num_exp _RPAREN
  | inc_dec_exp
  ;

literal
  : _NUMBER
  | _BIGINT
  | _BOOLEAN
  | _STRING
  ;

function_call
  : _ID _LPAREN argument _RPAREN
  ;

argument
  : /* empty */
  | num_exp
  | argument _COMMA num_exp
  ;

if_statement
  : if_part %prec ONLY_IF
  | if_part _ELSE statement
  ;

if_part
  : _IF _LPAREN rel_exp _RPAREN statement
  ;

rel_exp
  : num_exp _RELOP num_exp
  ;

return_statement
  : _RETURN num_exp _SEMICOLON
  | _RETURN rel_exp _SEMICOLON
  | _RETURN _SEMICOLON
  ;

while_loop
  : _WHILE _LPAREN rel_exp _RPAREN _LBRACKET statement_list _RBRACKET _SEMICOLON
  ;

do_while_loop
  : _DO _LBRACKET statement_list _RBRACKET _WHILE _LPAREN rel_exp _RPAREN _SEMICOLON
  ;

for_loop
  : _FOR _LPAREN first_for_statement _SEMICOLON second_for_statement _SEMICOLON third_for_statement _RPAREN _LBRACKET statement_list _RBRACKET
  | for_loop _SEMICOLON
  ;

for_iterate_loop
  : _FOR _LPAREN variable_declaration _IN _ID _RPAREN _LBRACKET statement_list _RBRACKET
  | _FOR _LPAREN _ID _IN _ID _RPAREN _LBRACKET loop_statement_list _RBRACKET
  | _FOR _LPAREN variable_declaration _OF _ID _RPAREN _LBRACKET statement_list _RBRACKET
  | _FOR _LPAREN _ID _OF _ID _RPAREN _LBRACKET loop_statement_list _RBRACKET
  | for_iterate_loop _SEMICOLON
  ;

first_for_statement
  : /* empty */ 
  | assignment_statement
  | inline_assignment
  ;

second_for_statement
  : /* empty */
  | rel_exp
  ;

third_for_statement
  : /* empty */
  | function_call
  | assignment_statement
  | inc_dec_exp
  ;

loop_statement_list
  : statement
  | break_statement
  | continue_statement
  ;

break_statement
  : _BREAK _SEMICOLON
  ;

continue_statement
  : _CONTINUE _SEMICOLON
  ;

inc_dec_exp
  : _ID _INC
  | _INC _ID
  | _ID _DEC
  | _DEC _ID
  ;

switch_statement
  : _SWITCH _LPAREN exp _RPAREN _LBRACKET case_statements default_statement _RBRACKET
  | switch_statement _SEMICOLON
  ;

case_statements
  : case_statement
  | case_statements case_statement
  ;

case_statement
  : _CASE literal _COLON statement_list break_statement
  ;

default_statement
  :
  | _DEFAULT _COLON statement_list
  ;

try_statement
  : try_part catch_finally_part
  ;

try_part
  : _TRY _LBRACKET statement_list _RBRACKET
  ;

catch_part
  : _CATCH _LPAREN _ID _RPAREN _LBRACKET statement_list _RBRACKET
  | _CATCH _LBRACKET statement_list _RBRACKET
  ;  

finally_part
  : _FINALLY _LBRACKET statement_list _RBRACKET
  ;

catch_finally_part
  : catch_part
  | finally_part
  | catch_part finally_part
  ; 

enum_statement
  : _ENUM _ID _LBRACKET enum_list _RBRACKET
  ;

enum_list
  : enum_line _COMMA
  | enum_list enum_line _COMMA
  ;

enum_line
  : _ID
  | _ID _ASSIGN _NUMBER
  | _ID _ASSIGN _STRING
  ;

interface_statement
  : _INTERFACE _ID _LBRACKET _RBRACKET 
  | _INTERFACE _ID _LBRACKET interface_elements _RBRACKET 
  ;

interface_elements
  : interface_element
  | interface_elements interface_element
  ;

interface_element
  : _ID _COLON _TYPE _SEMICOLON
  | _LPAREN parameter _RPAREN _COLON _TYPE _SEMICOLON
  | _ID _COLON _LPAREN parameter _RPAREN _ARROW _TYPE _SEMICOLON
  | _ID _LPAREN parameter _RPAREN _COLON _TYPE _SEMICOLON
  ;

%%

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s\n", yylineno, s);
  return 0;
}

int main() {
  return yyparse();
}
