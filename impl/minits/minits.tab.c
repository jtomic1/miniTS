/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "minits.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <stdlib.h>
  #include "symtab.h"
  #include "defs.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
	void warning(char *s);


  extern int yylineno;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  unsigned level = 1;

	int* parameter_map[128];
	int arg_counter = 0;

#line 91 "minits.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "minits.tab.h".  */
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
#line 26 "minits.y" /* yacc.c:355  */

  int i;
  char *s;

#line 180 "minits.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINITS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "minits.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  275

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    93,    94,    99,    98,   115,   117,   116,
     133,   138,   139,   143,   144,   148,   152,   153,   157,   158,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   190,   191,   195,
     203,   204,   208,   209,   213,   214,   215,   216,   217,   221,
     222,   223,   224,   228,   235,   237,   241,   242,   246,   250,
     251,   255,   259,   263,   264,   265,   269,   273,   277,   278,
     282,   283,   284,   285,   286,   289,   291,   292,   295,   297,
     300,   302,   303,   304,   308,   309,   310,   314,   318,   322,
     323,   324,   325,   329,   330,   334,   335,   339,   342,   344,
     348,   352,   356,   357,   361,   365,   366,   367,   371,   375,
     376,   380,   381,   382,   386,   387,   391,   392,   396,   397,
     398,   399
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_DECLARATION", "_NEWLINE",
  "_FUNCTION", "_IF", "_ELSE", "_RETURN", "_DO", "_WHILE", "_FOR", "_IN",
  "_OF", "_BREAK", "_CONTINUE", "_SWITCH", "_CASE", "_DEFAULT", "_TRY",
  "_CATCH", "_FINALLY", "_ENUM", "_INTERFACE", "_INC", "_DEC", "_ID",
  "_NUMBER", "_BIGINT", "_BOOLEAN", "_STRING", "_LPAREN", "_RPAREN",
  "_LBRACKET", "_RBRACKET", "_ASSIGN", "_COLON", "_SEMICOLON", "_AROP",
  "_RELOP", "_ARROW", "_COMMA", "ONLY_IF", "$accept", "program",
  "statement_list", "function", "$@1", "$@2", "parameter_list",
  "parameters", "parameter", "body", "variable_declaration", "statement",
  "compound_statement", "assignment_statement", "inline_assignment",
  "num_exp", "exp", "literal", "function_call", "argument_list",
  "arguments", "argument", "if_statement", "if_part", "rel_exp",
  "return_statement", "while_loop", "do_while_loop", "for_loop",
  "for_iterate_loop", "first_for_statement", "second_for_statement",
  "third_for_statement", "loop_statement_list", "break_statement",
  "continue_statement", "inc_dec_exp", "switch_statement",
  "case_statements", "case_statement", "default_statement",
  "try_statement", "try_part", "catch_part", "finally_part",
  "catch_finally_part", "enum_statement", "enum_list", "enum_line",
  "interface_statement", "interface_elements", "interface_element", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     604,   -21,    27,    16,   614,    33,    29,    41,    50,    54,
      31,    63,    72,    93,   -10,   604,   121,   604,  -194,    85,
    -194,  -194,    86,    97,   103,  -194,   135,  -194,  -194,  -194,
     106,   108,   109,   110,  -194,    43,  -194,  -194,    39,   117,
     628,    21,  -194,  -194,  -194,  -194,   628,  -194,    40,  -194,
    -194,  -194,   115,  -194,   604,   628,    10,   628,   604,   123,
     125,  -194,  -194,  -194,  -194,   628,   628,   102,  -194,  -194,
    -194,  -194,  -194,  -194,   604,  -194,  -194,  -194,  -194,     9,
     126,   132,  -194,  -194,   177,   152,   137,    45,   129,   -16,
    -194,   628,   628,  -194,   232,   133,   140,    -3,    80,  -194,
    -194,   130,   136,   264,   144,    -8,   138,   141,   134,  -194,
     138,   142,  -194,   148,   604,   604,  -194,   146,   138,   145,
     147,   149,   143,  -194,   604,  -194,  -194,   138,   176,   154,
      79,   162,   165,   167,   170,   628,   164,  -194,   174,    -6,
     171,    -1,   137,  -194,    -7,  -194,  -194,   628,  -194,   179,
     296,   328,   137,   628,   212,     1,   137,  -194,   184,   604,
     628,   185,   186,   188,   189,  -194,   190,   199,    24,  -194,
     181,  -194,   137,     2,   191,  -194,  -194,  -194,   193,  -194,
    -194,   196,   138,  -194,   604,   227,   195,  -194,   628,   360,
     200,   201,   203,   206,   105,    74,   120,  -194,  -194,  -194,
    -194,   215,   216,   137,   213,   604,    22,   392,  -194,  -194,
     220,   222,   552,   552,   604,   604,  -194,  -194,   228,  -194,
     225,   226,  -194,   229,   235,  -194,   236,   262,   424,   274,
     195,  -194,   244,   241,  -194,   242,   245,  -194,   247,  -194,
    -194,   250,   456,   488,   252,   604,   604,  -194,   289,   253,
     255,  -194,  -194,   195,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,   604,   578,   604,   257,   293,  -194,   244,   520,  -194,
    -194,   259,   195,  -194,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    21,     0,
       3,    20,     0,     0,     0,    25,    59,    26,    27,    28,
      30,    31,     0,    33,    34,     0,    35,    36,    18,     0,
       0,    45,    49,    50,    51,    52,     0,    65,     0,    42,
      44,    46,     0,    48,     0,     0,    75,     0,     0,     0,
       0,    90,    92,    89,    91,    54,     0,     0,     1,     4,
      22,    23,    24,    29,     0,    69,    74,    32,    94,     0,
       0,   105,   106,   100,     0,     0,    11,     0,     0,     0,
      63,     0,     0,    64,     0,     0,     0,     0,     0,    76,
      77,     0,     0,     0,     0,     0,    58,     0,    55,    56,
      39,    37,    60,     0,     0,     0,   107,     0,    41,    19,
       0,     0,    12,    13,     0,    47,    43,    62,     0,     0,
      18,     0,     0,     0,     0,    78,     0,   101,   111,     0,
       0,     0,    11,   114,     0,   116,    53,     0,    38,     0,
       0,     0,    11,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,   108,
       0,   109,    11,     0,     0,   115,   117,    57,     0,   103,
     104,     0,    40,    15,     0,     0,     7,    14,     0,     0,
       0,     0,     0,     0,    80,     0,    98,    95,   112,   113,
     110,     0,     0,    11,     0,     0,     0,     0,     5,    17,
       0,     0,     0,     0,     0,     0,    82,    81,     0,    83,
       0,     0,    96,     0,     0,   118,     0,     0,     0,     0,
      10,    16,     0,     0,    66,     0,     0,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,   102,     8,     6,    67,    87,    88,    71,    73,    70,
      72,     0,     0,    99,     0,     0,   119,     0,     0,    97,
     121,     0,     9,    68,   120
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,   -14,  -194,  -194,  -194,  -140,  -194,   153,  -193,
     248,   -17,  -194,   -52,   254,     3,   -49,   116,     5,  -194,
    -194,   168,  -194,  -194,   -37,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,    88,    52,  -194,    26,  -194,  -194,   122,
    -194,  -194,  -194,  -194,   231,  -194,  -194,  -194,   178,  -194,
    -194,   180
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,   232,   267,   121,   122,   123,   186,
      19,    20,    21,    22,    23,    87,    49,    50,    24,   107,
     108,   109,    25,    26,    52,    27,    28,    29,    30,    31,
     101,   166,   218,   238,   239,   240,    32,    33,   196,   197,
     223,    34,    35,    81,    82,    83,    36,   139,   140,    37,
     144,   145
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      69,    67,   174,    88,    99,   202,    38,    48,   102,    51,
     131,   132,   181,   230,    96,    63,    64,   125,    95,   141,
     141,   138,    65,    91,   142,   142,    66,   143,   175,   169,
      53,   172,   201,    66,   203,   184,   173,    97,   185,   253,
      94,   113,   126,   114,   103,    51,    63,    64,    40,    89,
      69,    51,   198,    65,    39,   199,   184,   112,    59,   229,
      51,    55,    51,   226,    79,    80,    53,    54,   106,   110,
      51,    51,    53,    56,   272,    84,    85,    69,    90,    91,
      92,    53,    57,    53,    91,    92,    69,   118,    58,    51,
      60,    53,    53,   133,   134,   127,    51,    51,   165,    61,
     150,   151,    42,    43,    44,    45,     1,   157,     2,     3,
      53,     4,     5,     6,     7,   160,    85,    53,    53,     8,
      62,    68,     9,    70,    71,    10,    11,    12,    13,    14,
      12,    13,    14,    69,    69,    72,    15,   111,   195,   221,
      51,    73,   216,    74,    75,   189,    76,    77,    78,    86,
     106,   210,    51,    93,    80,   119,   182,   104,    51,   105,
     115,    53,   124,   118,   120,    51,   129,   130,   135,   136,
     207,   138,    69,    53,   146,   149,   147,    91,   152,    53,
     148,   153,   155,   117,   154,   156,    53,   158,   159,   161,
      69,   228,   162,    51,   163,   237,   237,   164,   167,   217,
     242,   243,    12,    13,    41,    42,    43,    44,    45,    46,
     168,    69,   178,   171,    53,   183,   188,   195,   190,   191,
     219,   192,   193,   200,   204,    69,    69,   205,   194,   206,
     208,   262,   263,   209,   212,   213,     1,   214,     2,     3,
     215,     4,     5,     6,     7,    69,    69,   268,   224,     8,
     227,    69,     9,   233,   225,    10,    11,    12,    13,    14,
     234,   244,   245,   246,   247,   250,    15,   128,     1,   249,
       2,     3,   248,     4,     5,     6,     7,   252,   184,   254,
     255,     8,   257,   256,     9,   258,   261,    10,    11,    12,
      13,    14,   264,   266,   265,   270,   271,   274,    15,   137,
       1,   241,     2,     3,    98,     4,     5,     6,     7,   187,
     100,   220,   116,     8,   269,   177,     9,   170,   222,    10,
      11,    12,    13,    14,   176,     0,     0,     0,     0,     0,
      15,   179,     1,     0,     2,     3,     0,     4,     5,     6,
       7,     0,     0,     0,     0,     8,     0,     0,     9,     0,
       0,    10,    11,    12,    13,    14,     0,     0,     0,     0,
       0,     0,    15,   180,     1,     0,     2,     3,     0,     4,
       5,     6,     7,     0,     0,     0,     0,     8,     0,     0,
       9,     0,     0,    10,    11,    12,    13,    14,     0,     0,
       0,     0,     0,     0,    15,   211,     1,     0,     2,     3,
       0,     4,     5,     6,     7,     0,     0,     0,     0,     8,
       0,     0,     9,     0,     0,    10,    11,    12,    13,    14,
       0,     0,     0,     0,     0,     0,    15,   231,     1,     0,
       2,     3,     0,     4,     5,     6,     7,     0,     0,     0,
       0,     8,     0,     0,     9,     0,     0,    10,    11,    12,
      13,    14,     0,     0,     0,     0,     0,     0,    15,   251,
       1,     0,     2,     3,     0,     4,     5,     6,     7,     0,
       0,     0,     0,     8,     0,     0,     9,     0,     0,    10,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
      15,   259,     1,     0,     2,     3,     0,     4,     5,     6,
       7,     0,     0,     0,     0,     8,     0,     0,     9,     0,
       0,    10,    11,    12,    13,    14,     0,     0,     0,     0,
       0,     0,    15,   260,     1,     0,     2,     3,     0,     4,
       5,     6,     7,     0,     0,     0,     0,     8,     0,     0,
       9,     0,     0,    10,    11,    12,    13,    14,     0,     0,
       0,     0,     0,     0,    15,   273,     1,     0,     2,     3,
       0,     4,     5,     6,     7,     0,     0,   235,   236,     8,
       0,     0,     9,     0,     0,    10,    11,    12,    13,    14,
       0,     0,     1,     0,     2,     3,    15,     4,     5,     6,
       7,     0,     0,   235,     0,     8,     0,     0,     9,     0,
       0,    10,    11,    12,    13,    14,     0,     0,     1,     0,
       2,     3,    15,     4,     5,     6,     7,     0,     0,     0,
       0,     8,     0,     0,     9,     0,     0,    10,    11,    12,
      13,    14,     0,     0,     0,     0,     0,     0,    15,    12,
      13,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,    47,    12,    13,    41,    42,    43,    44,    45,
      46
};

static const yytype_int16 yycheck[] =
{
      17,    15,   142,    40,    56,     3,    27,     4,    57,     4,
      13,    14,   152,   206,     4,    25,    26,    33,    55,    27,
      27,    27,    32,    39,    32,    32,    36,    35,    35,    35,
       4,    32,   172,    36,    32,    34,    37,    27,    37,   232,
      54,    32,    91,    34,    58,    40,    25,    26,    32,    46,
      67,    46,    28,    32,    27,    31,    34,    74,    27,    37,
      55,    32,    57,   203,    21,    22,    40,    34,    65,    66,
      65,    66,    46,    32,   267,    36,    37,    94,    38,    39,
      40,    55,    32,    57,    39,    40,   103,    84,    34,    84,
      27,    65,    66,    13,    14,    92,    91,    92,   135,    27,
     114,   115,    28,    29,    30,    31,     4,   124,     6,     7,
      84,     9,    10,    11,    12,    36,    37,    91,    92,    17,
      27,     0,    20,    38,    38,    23,    24,    25,    26,    27,
      25,    26,    27,   150,   151,    38,    34,    35,    18,    19,
     135,    38,   194,     8,    38,   159,    38,    38,    38,    32,
     147,   188,   147,    38,    22,     3,   153,    34,   153,    34,
      34,   135,    33,   160,    27,   160,    33,    27,    38,    33,
     184,    27,   189,   147,    33,    27,    42,    39,    32,   153,
      38,    36,    33,     6,    37,    42,   160,    11,    34,    27,
     207,   205,    27,   188,    27,   212,   213,    27,    34,   194,
     214,   215,    25,    26,    27,    28,    29,    30,    31,    32,
      36,   228,    33,    42,   188,     3,    32,    18,    33,    33,
     194,    33,    33,    42,    33,   242,   243,    34,    38,    33,
       3,   245,   246,    38,    34,    34,     4,    34,     6,     7,
      34,     9,    10,    11,    12,   262,   263,   261,    33,    17,
      37,   268,    20,    33,    38,    23,    24,    25,    26,    27,
      38,    33,    37,    37,    35,     3,    34,    35,     4,    33,
       6,     7,    37,     9,    10,    11,    12,     3,    34,    38,
      38,    17,    35,    38,    20,    35,    34,    23,    24,    25,
      26,    27,     3,    38,    41,    38,     3,    38,    34,    35,
       4,   213,     6,     7,    56,     9,    10,    11,    12,   156,
      56,   195,    81,    17,   262,   147,    20,   139,   196,    23,
      24,    25,    26,    27,   144,    -1,    -1,    -1,    -1,    -1,
      34,    35,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    -1,    -1,    15,    16,    17,
      -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    -1,     4,    -1,     6,     7,    34,     9,    10,    11,
      12,    -1,    -1,    15,    -1,    17,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    27,    -1,    -1,     4,    -1,
       6,     7,    34,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    38,    25,    26,    27,    28,    29,    30,    31,
      32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     7,     9,    10,    11,    12,    17,    20,
      23,    24,    25,    26,    27,    34,    45,    46,    47,    54,
      55,    56,    57,    58,    62,    66,    67,    69,    70,    71,
      72,    73,    80,    81,    85,    86,    90,    93,    27,    27,
      32,    27,    28,    29,    30,    31,    32,    38,    59,    60,
      61,    62,    68,    80,    34,    32,    32,    32,    34,    27,
      27,    27,    27,    25,    26,    32,    36,    46,     0,    55,
      38,    38,    38,    38,     8,    38,    38,    38,    38,    21,
      22,    87,    88,    89,    36,    37,    32,    59,    68,    59,
      38,    39,    40,    38,    46,    68,     4,    27,    54,    57,
      58,    74,    60,    46,    34,    34,    59,    63,    64,    65,
      59,    35,    55,    32,    34,    34,    88,     6,    59,     3,
      27,    50,    51,    52,    33,    33,    60,    59,    35,    33,
      27,    13,    14,    13,    14,    38,    33,    35,    27,    91,
      92,    27,    32,    35,    94,    95,    33,    42,    38,    27,
      46,    46,    32,    36,    37,    33,    42,    55,    11,    34,
      36,    27,    27,    27,    27,    68,    75,    34,    36,    35,
      92,    42,    32,    37,    50,    35,    95,    65,    33,    35,
      35,    50,    59,     3,    34,    37,    53,    52,    32,    46,
      33,    33,    33,    33,    38,    18,    82,    83,    28,    31,
      42,    50,     3,    32,    33,    34,    33,    46,     3,    38,
      68,    35,    34,    34,    34,    34,    57,    62,    76,    80,
      61,    19,    83,    84,    33,    38,    50,    37,    46,    37,
      53,    35,    48,    33,    38,    15,    16,    55,    77,    78,
      79,    77,    46,    46,    33,    37,    37,    35,    37,    33,
       3,    35,     3,    53,    38,    38,    38,    35,    35,    35,
      35,    34,    46,    46,     3,    41,    38,    49,    46,    78,
      38,     3,    53,    35,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    48,    47,    47,    49,    47,
      47,    50,    50,    51,    51,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    61,    61,    62,    63,    63,    64,    64,    65,    66,
      66,    67,    68,    69,    69,    69,    70,    71,    72,    72,
      73,    73,    73,    73,    73,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    78,    79,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    84,    84,
      85,    86,    87,    87,    88,    89,    89,    89,    90,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     9,     6,     0,    11,
       8,     0,     1,     1,     3,     3,     3,     2,     2,     4,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     3,     4,     3,
       6,     4,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     4,     0,     1,     1,     3,     1,     1,
       3,     5,     3,     3,     3,     2,     8,     9,    11,     2,
       9,     9,     9,     9,     2,     0,     1,     1,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     8,     2,     1,     2,     5,     0,     3,
       2,     4,     7,     4,     4,     1,     1,     2,     5,     2,
       3,     1,     3,     3,     4,     5,     1,     2,     4,     6,
       8,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 99 "minits.y" /* yacc.c:1646  */
    {
      fun_idx = lookup_symbol((yyvsp[-5].s), FUN);
      unsigned current_level = lookup_level((yyvsp[-5].s), FUN);
      if(fun_idx == -1)
        fun_idx = insert_symbol((yyvsp[-5].s), FUN, (yyvsp[0].i), NO_ATR, NO_ATR, level++);
      else if (fun_idx != -1 && current_level != level)
        fun_idx = insert_symbol((yyvsp[-5].s), FUN, (yyvsp[0].i), NO_ATR, NO_ATR, level++);
			else
        err("redefinition of function '%s'", (yyvsp[-5].s));
    }
#line 1556 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 110 "minits.y" /* yacc.c:1646  */
    {
      clear_symbols(fun_idx + 1);
      var_num = 0;
      level--;
    }
#line 1566 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 117 "minits.y" /* yacc.c:1646  */
    {
      fun_idx = lookup_symbol((yyvsp[-7].s), FUN);
      unsigned current_level = lookup_level((yyvsp[-7].s), FUN);
      if(fun_idx == -1)
        fun_idx = insert_symbol((yyvsp[-7].s), FUN, (yyvsp[0].i), NO_ATR, NO_ATR, level++);
      else if (fun_idx != -1 && current_level != level)
				fun_idx = insert_symbol((yyvsp[-7].s), FUN, (yyvsp[0].i), NO_ATR, NO_ATR, level++);
      else
        err("redefinition of function '%s'", (yyvsp[-7].s));
    }
#line 1581 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "minits.y" /* yacc.c:1646  */
    {
      clear_symbols(fun_idx + 1);
      var_num = 0;
			level--;
  	}
#line 1591 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 138 "minits.y" /* yacc.c:1646  */
    { set_atr1(fun_idx, 0);}
#line 1597 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "minits.y" /* yacc.c:1646  */
    {
   		if(lookup_symbol((yyvsp[-2].s), VAR|PAR) == -1)
        insert_symbol((yyvsp[-2].s), VAR, (yyvsp[0].i), ++var_num, NO_ATR, level);
      else if (lookup_symbol((yyvsp[-2].s), VAR|PAR) != -1 && lookup_level((yyvsp[-2].s), VAR) != level)
				insert_symbol((yyvsp[-2].s), VAR, (yyvsp[0].i), ++var_num, NO_ATR, level);
			else
        err("redeclaration of variable '%s'", (yyvsp[-2].s));
		}
#line 1610 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 196 "minits.y" /* yacc.c:1646  */
    {
			if(lookup_symbol((yyvsp[-2].s), VAR|PAR) == -1)
				err("SEMANTIC ERROR: undefined variable '%s'", (yyvsp[-2].s));
		}
#line 1619 "minits.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 229 "minits.y" /* yacc.c:1646  */
    {
			if (lookup_symbol((yyvsp[-3].s), FUN) == -1)
				err("Undefined function '%s'", (yyvsp[-3].s));
		}
#line 1628 "minits.tab.c" /* yacc.c:1646  */
    break;


#line 1632 "minits.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 402 "minits.y" /* yacc.c:1906  */


int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s\n", yylineno, s);
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
int synerr;
  init_symtab();

  synerr = yyparse();
  clear_symtab();
  

  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count)
    printf("\n%d error(s).\n", error_count);

  if(synerr)
    return -1; //syntax error
  else
    return error_count; //semantic errors
}
