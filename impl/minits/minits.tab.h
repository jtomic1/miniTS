/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MINITS_TAB_H_INCLUDED
# define YY_YY_MINITS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _TYPE = 258,
    _DECLARATION = 259,
    _NEWLINE = 260,
    _FUNCTION = 261,
    _IF = 262,
    _ELSE = 263,
    _RETURN = 264,
    _DO = 265,
    _WHILE = 266,
    _FOR = 267,
    _IN = 268,
    _OF = 269,
    _BREAK = 270,
    _CONTINUE = 271,
    _SWITCH = 272,
    _CASE = 273,
    _DEFAULT = 274,
    _TRY = 275,
    _CATCH = 276,
    _FINALLY = 277,
    _ENUM = 278,
    _INTERFACE = 279,
    _INC = 280,
    _DEC = 281,
    _ID = 282,
    _NUMBER = 283,
    _BIGINT = 284,
    _BOOLEAN = 285,
    _STRING = 286,
    _LPAREN = 287,
    _RPAREN = 288,
    _LBRACKET = 289,
    _RBRACKET = 290,
    _ASSIGN = 291,
    _COLON = 292,
    _SEMICOLON = 293,
    _AROP = 294,
    _RELOP = 295,
    _ARROW = 296,
    _COMMA = 297,
    ONLY_IF = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "minits.y" /* yacc.c:1909  */

  int i;
  char *s;

#line 103 "minits.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINITS_TAB_H_INCLUDED  */
