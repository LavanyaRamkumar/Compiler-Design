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
#line 1 "grammar.y" /* yacc.c:339  */

#include<stdio.h>
#include<string.h>
#include "icg.h"
#include<stdlib.h>
int t=0;
int l=0;
int combined=0,expr=0,j=0,b=0,k=0;
int csym=0;
char add[50];
int beg=0,w=0,temp=0,cbeg=0;
int yyerror();  
int yylex();

#line 81 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "grammar.y" /* yacc.c:355  */

typedef struct Num
{
	char code[1000];
	char addr[50];
	char true[5];
	char false[5];
	char next[5];
	int begin;
}NODE;

#line 123 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_IDENTIFIER = 258,
    T_C_CONSTANT = 259,
    T_I_CONSTANT = 260,
    T_F_CONSTANT = 261,
    T_STRING_LITERAL = 262,
    T_INC_OP = 263,
    T_DEC_OP = 264,
    T_LE_OP = 265,
    T_GE_OP = 266,
    T_EQ_OP = 267,
    T_NE_OP = 268,
    T_AND_OP = 269,
    T_OR_OP = 270,
    T_MUL_ASSIGN = 271,
    T_DIV_ASSIGN = 272,
    T_MOD_ASSIGN = 273,
    T_ADD_ASSIGN = 274,
    T_SUB_ASSIGN = 275,
    T_CHAR = 276,
    T_INT = 277,
    T_FLOAT = 278,
    T_DOUBLE = 279,
    T_IF = 280,
    T_ELSE = 281,
    T_WHILE = 282,
    T_CONTINUE = 283,
    T_BREAK = 284,
    T_RETURN = 285,
    T_MAIN = 286,
    T_INCLUDE = 287,
    T_DEFINE = 288,
    T_PRINT = 289,
    T_HEADER = 290,
    IFX = 291
  };
#endif
/* Tokens.  */
#define T_IDENTIFIER 258
#define T_C_CONSTANT 259
#define T_I_CONSTANT 260
#define T_F_CONSTANT 261
#define T_STRING_LITERAL 262
#define T_INC_OP 263
#define T_DEC_OP 264
#define T_LE_OP 265
#define T_GE_OP 266
#define T_EQ_OP 267
#define T_NE_OP 268
#define T_AND_OP 269
#define T_OR_OP 270
#define T_MUL_ASSIGN 271
#define T_DIV_ASSIGN 272
#define T_MOD_ASSIGN 273
#define T_ADD_ASSIGN 274
#define T_SUB_ASSIGN 275
#define T_CHAR 276
#define T_INT 277
#define T_FLOAT 278
#define T_DOUBLE 279
#define T_IF 280
#define T_ELSE 281
#define T_WHILE 282
#define T_CONTINUE 283
#define T_BREAK 284
#define T_RETURN 285
#define T_MAIN 286
#define T_INCLUDE 287
#define T_DEFINE 288
#define T_PRINT 289
#define T_HEADER 290
#define IFX 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "grammar.y" /* yacc.c:355  */

	NODE node;

#line 211 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,    50,     2,     2,
      42,    43,    48,    37,    53,    38,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
      51,    40,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    45,    47,    49,    50,    52,    59,    70,
      72,    79,    90,    92,    96,   102,   103,   105,   106,   111,
     112,   113,   117,   118,   120,   122,   127,   128,   130,   135,
     136,   138,   140,   142,   147,   148,   150,   155,   158,   172,
     177,   177,   183,   184,   188,   189,   190,   191,   192,   196,
     197,   198,   202,   205,   206,   210,   211,   212,   222,   222,
     223,   223,   224,   224,   228,   232,   237,   244,   255,   269,
     270,   274,   275,   276,   277,   281,   282,   283,   287,   288,
     289,   290,   291,   292,   293,   297,   298,   299,   300,   301,
     302,   303,   308,   309,   313,   314,   318,   319,   323,   324,
     328,   329,   332,   332,   340,   341,   345,   346,   350,   350,
     361,   362,   363,   364,   368,   369,   373,   374,   378,   379,
     380,   381,   382,   383,   387,   387
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENTIFIER", "T_C_CONSTANT",
  "T_I_CONSTANT", "T_F_CONSTANT", "T_STRING_LITERAL", "T_INC_OP",
  "T_DEC_OP", "T_LE_OP", "T_GE_OP", "T_EQ_OP", "T_NE_OP", "T_AND_OP",
  "T_OR_OP", "T_MUL_ASSIGN", "T_DIV_ASSIGN", "T_MOD_ASSIGN",
  "T_ADD_ASSIGN", "T_SUB_ASSIGN", "T_CHAR", "T_INT", "T_FLOAT", "T_DOUBLE",
  "T_IF", "T_ELSE", "T_WHILE", "T_CONTINUE", "T_BREAK", "T_RETURN",
  "T_MAIN", "T_INCLUDE", "T_DEFINE", "T_PRINT", "T_HEADER", "IFX", "'+'",
  "'-'", "'!'", "'='", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "','", "$accept",
  "primary_expression", "var_expression", "postfix_expression",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "@1",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator", "$@2", "$@3",
  "$@4", "initializer", "initializer_list", "list_of_strings",
  "list_of_lists", "type_specifier", "declarator", "statement",
  "while_statement", "compound_statement", "while_statement_list",
  "statement_list", "expression_statement", "while_compound_statement",
  "X", "@5", "selection_statement", "while_selection_statement",
  "iteration_statement", "@6", "jump_statement", "return_statement",
  "program", "external_declaration", "function_definition", "@7", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    43,    45,    33,
      61,    59,    40,    41,   123,   125,    91,    93,    42,    47,
      37,    60,    62,    44
};
# endif

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     103,  -137,   -10,  -137,  -137,   -12,    61,  -137,    84,    96,
     209,  -137,    56,  -137,    32,    72,   -21,  -137,    63,  -137,
      88,   104,  -137,  -137,    89,    93,  -137,  -137,  -137,   353,
    -137,   136,  -137,    84,    21,  -137,    32,  -137,   140,   354,
     360,   360,  -137,  -137,  -137,  -137,    97,    10,  -137,   360,
     108,    45,     5,   174,   137,   146,  -137,    26,   124,  -137,
    -137,    24,   146,  -137,  -137,   157,   155,   198,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,   360,   360,  -137,  -137,  -137,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,  -137,  -137,   203,   164,   206,   360,   176,    67,
    -137,   181,   182,   146,   146,  -137,  -137,  -137,   108,   108,
      45,    45,    45,    45,     5,     5,   174,   360,   193,  -137,
     223,  -137,    40,  -137,    57,   360,   115,  -137,   202,   204,
     306,   207,  -137,  -137,     9,  -137,  -137,  -137,   213,  -137,
     298,  -137,  -137,  -137,   240,   361,   137,   243,   216,  -137,
     246,  -137,   360,   127,  -137,   212,  -137,  -137,  -137,    -8,
     259,  -137,  -137,  -137,   241,   221,   264,   224,  -137,  -137,
    -137,  -137,   360,   360,   360,  -137,   227,   298,  -137,   225,
     228,   143,    -9,    -3,   232,  -137,   165,   270,  -137,  -137,
     256,  -137,   229,   247,   248,   346,   245,   125,  -137,  -137,
    -137,  -137,   256,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
      36,   275,  -137,  -137,   170,   265,  -137,   249,  -137,  -137,
     256,   255,  -137,  -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    71,    72,    73,    74,     0,     0,   118,     0,     0,
       0,   117,     0,   119,     0,    75,     0,    53,    55,     1,
       0,     0,   123,   116,     0,     2,     4,     3,     5,     0,
     121,     0,    52,     0,     0,   120,     0,   124,     0,     2,
       0,     0,    19,    20,    21,    12,     0,    15,    22,     0,
      26,    29,    34,    37,    39,    50,    49,     0,     0,    54,
      57,    60,    64,    56,   122,     0,     0,     0,    16,    17,
      44,    45,    46,    47,    48,     0,     0,    13,    14,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     6,     0,    76,     0,     0,     0,     0,
     125,     7,     0,    42,    43,    23,    24,    25,    27,    28,
      32,    33,    30,    31,    35,    36,    38,     0,     9,    51,
       0,    67,     0,    65,     0,     0,     0,    72,     0,     0,
       0,     0,    98,    92,     0,    83,    96,    78,     0,    79,
       0,    80,    81,    82,     0,     7,    41,     0,     0,    59,
       0,    61,     0,     0,    63,     0,   102,   108,   115,     0,
       0,    99,    93,    97,   104,     0,     0,     0,    77,    68,
      66,    69,     0,     0,     0,   114,     0,     0,     8,     0,
      10,     0,     0,     0,     0,   105,     8,     0,    70,   103,
       0,    84,     0,     0,     0,     0,     0,     0,    90,   109,
      86,    85,     0,    87,    88,    89,    11,   110,   111,   112,
       0,     0,   100,    94,     0,   106,   113,     0,   101,    95,
       0,     0,   107,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,     3,  -137,  -137,   -27,  -137,    37,   138,   100,   208,
     188,   -30,  -137,   214,  -137,   284,     0,  -137,   283,  -137,
    -137,  -137,   -33,  -120,  -137,  -137,  -137,  -137,  -129,  -136,
     252,  -137,  -137,   -97,  -137,   -96,  -137,  -137,  -137,   -91,
    -137,  -137,  -137,  -137,  -137,   308,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   117,    56,    76,   134,   198,    16,    17,    96,
      97,    98,   123,   124,   122,   126,     8,    18,   136,   199,
     137,   214,   138,   200,   201,   202,   173,   141,   203,   204,
     174,   205,   143,     9,    10,    11,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    63,   139,   140,    62,   153,    92,    92,   142,   163,
      22,   164,    92,    68,    69,    85,    86,    30,    77,    78,
      32,    12,    79,    13,    25,    26,    27,    28,    60,    40,
      41,   -58,    33,   175,   189,    25,    26,    27,    28,    64,
     190,   139,   140,   139,   140,   103,   104,   142,   185,   142,
     161,    92,   181,   105,   106,   107,    87,    88,    42,    43,
      44,   213,    94,    29,    14,    61,   215,    62,   -62,    93,
      39,    26,    27,    28,    29,    40,    41,   216,   219,    94,
     139,   140,    83,    84,   222,   149,   142,    15,     1,   127,
       3,     4,   128,   150,   129,    62,    19,   130,    24,   135,
     159,   131,   151,    34,    42,    43,    44,    36,   132,    29,
     152,    99,   133,    70,    71,    72,    73,    74,    31,   170,
     108,   109,    62,    35,     1,     2,     3,     4,    39,    26,
      27,    28,    37,    40,    41,     5,     6,    75,   135,    38,
     135,    58,    62,   182,   183,    66,     1,   127,     3,     4,
     128,    91,   129,   193,   194,   195,    80,    81,    82,   196,
     154,    92,    42,    43,    44,   210,   132,    29,   155,   197,
     212,    95,   171,    39,    26,    27,    28,   135,    40,    41,
     152,   -11,   -11,   -11,   -11,   -11,    89,    90,   188,   114,
     115,     1,   127,     3,     4,   128,   152,   129,   193,   194,
     195,    99,   101,   102,   196,   -11,   118,    42,    43,    44,
     120,   132,    29,   121,   197,   218,    39,    26,    27,    28,
     125,    40,    41,   110,   111,   112,   113,   144,   148,   145,
       1,     2,     3,     4,     1,   127,     3,     4,   128,   147,
     129,    20,    21,   130,   156,   165,   157,   131,   167,   160,
      42,    43,    44,   169,   132,    29,   172,    99,   162,    39,
      26,    27,    28,   168,    40,    41,   176,   177,   178,   179,
     184,   180,   186,   191,   187,   192,   206,     1,   127,     3,
       4,   128,   217,   129,   193,   194,   195,   211,   207,   208,
     196,   220,   221,    42,    43,    44,   223,   132,    29,   116,
     197,    39,    26,    27,    28,   146,    40,    41,   119,    25,
      26,    27,    28,    57,    40,    41,    59,   100,    23,     1,
     127,     3,     4,   128,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,    42,    43,    44,     0,   132,
      29,     0,    99,    42,    43,    44,     0,   158,    29,    25,
      26,    27,    28,     0,    40,    41,    39,    26,    27,    28,
       0,    40,    41,    25,    26,    27,    28,     0,    40,    41,
      -9,    -9,    -9,    -9,    -9,     0,     0,   -10,   -10,   -10,
     -10,   -10,     0,    42,    43,    44,     0,   209,    29,     0,
      42,    43,    44,     0,    -9,    29,     0,    42,    43,    44,
      67,   -10,    29,     0,     0,     0,     0,   166
};

static const yytype_int16 yycheck[] =
{
       0,    34,    99,    99,    34,   125,    15,    15,    99,   138,
      10,   140,    15,    40,    41,    10,    11,    14,     8,     9,
      41,    31,    49,    35,     3,     4,     5,     6,     7,     8,
       9,     7,    53,    41,    43,     3,     4,     5,     6,    36,
      43,   138,   138,   140,   140,    75,    76,   138,   177,   140,
      41,    15,   172,    80,    81,    82,    51,    52,    37,    38,
      39,   197,    53,    42,     3,    44,   202,    97,    44,    43,
       3,     4,     5,     6,    42,     8,     9,    41,   214,    53,
     177,   177,    37,    38,   220,    45,   177,     3,    21,    22,
      23,    24,    25,    53,    27,   125,     0,    30,    42,    99,
     130,    34,    45,    40,    37,    38,    39,     3,    41,    42,
      53,    44,    45,    16,    17,    18,    19,    20,    46,   152,
      83,    84,   152,    35,    21,    22,    23,    24,     3,     4,
       5,     6,    43,     8,     9,    32,    33,    40,   138,    46,
     140,     5,   172,   173,   174,     5,    21,    22,    23,    24,
      25,    14,    27,    28,    29,    30,    48,    49,    50,    34,
      45,    15,    37,    38,    39,   195,    41,    42,    53,    44,
      45,    47,    45,     3,     4,     5,     6,   177,     8,     9,
      53,    16,    17,    18,    19,    20,    12,    13,    45,    89,
      90,    21,    22,    23,    24,    25,    53,    27,    28,    29,
      30,    44,    47,     5,    34,    40,     3,    37,    38,    39,
      46,    41,    42,     7,    44,    45,     3,     4,     5,     6,
      44,     8,     9,    85,    86,    87,    88,    46,     5,    47,
      21,    22,    23,    24,    21,    22,    23,    24,    25,    46,
      27,    32,    33,    30,    42,     5,    42,    34,     5,    42,
      37,    38,    39,     7,    41,    42,    44,    44,    45,     3,
       4,     5,     6,    47,     8,     9,     7,    26,    47,     5,
      43,    47,    47,    41,    46,     5,    47,    21,    22,    23,
      24,    25,     7,    27,    28,    29,    30,    42,    41,    41,
      34,    26,    43,    37,    38,    39,    41,    41,    42,    91,
      44,     3,     4,     5,     6,   117,     8,     9,    94,     3,
       4,     5,     6,    29,     8,     9,    33,    65,    10,    21,
      22,    23,    24,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    37,    38,    39,    -1,    41,
      42,    -1,    44,    37,    38,    39,    -1,    41,    42,     3,
       4,     5,     6,    -1,     8,     9,     3,     4,     5,     6,
      -1,     8,     9,     3,     4,     5,     6,    -1,     8,     9,
      16,    17,    18,    19,    20,    -1,    -1,    16,    17,    18,
      19,    20,    -1,    37,    38,    39,    -1,    41,    42,    -1,
      37,    38,    39,    -1,    40,    42,    -1,    37,    38,    39,
      46,    40,    42,    -1,    -1,    -1,    -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    32,    33,    70,    80,    97,
      98,    99,    31,    35,     3,     3,    71,    72,    81,     0,
      32,    33,    70,    99,    42,     3,     4,     5,     6,    42,
      55,    46,    41,    53,    40,    35,     3,    43,    46,     3,
       8,     9,    37,    38,    39,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    67,    69,     5,    72,
       7,    44,    65,    76,    55,   100,     5,    46,    58,    58,
      16,    17,    18,    19,    20,    40,    68,     8,     9,    58,
      48,    49,    50,    37,    38,    10,    11,    51,    52,    12,
      13,    14,    15,    43,    53,    47,    73,    74,    75,    44,
      84,    47,     5,    65,    65,    58,    58,    58,    60,    60,
      61,    61,    61,    61,    62,    62,    63,    66,     3,    67,
      46,     7,    78,    76,    77,    44,    79,    22,    25,    27,
      30,    34,    41,    45,    69,    70,    82,    84,    86,    87,
      89,    91,    93,    96,    46,    47,    64,    46,     5,    45,
      53,    45,    53,    77,    45,    53,    42,    42,    41,    65,
      42,    41,    45,    82,    82,     5,    46,     5,    47,     7,
      76,    45,    44,    90,    94,    41,     7,    26,    47,     5,
      47,    77,    65,    65,    43,    82,    47,    46,    45,    43,
      43,    41,     5,    28,    29,    30,    34,    44,    70,    83,
      87,    88,    89,    92,    93,    95,    47,    41,    41,    41,
      65,    42,    45,    83,    85,    83,    41,     7,    45,    83,
      26,    43,    83,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    63,    64,    64,    65,
      66,    65,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    70,    71,    71,    72,    72,    72,    73,    72,
      74,    72,    75,    72,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    90,    89,    91,    91,    92,    92,    94,    93,
      95,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    98,    98,    98,   100,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     4,     7,     1,
       4,     7,     1,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       0,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     1,     3,     3,     0,     6,
       0,     6,     0,     6,     1,     1,     3,     1,     3,     3,
       5,     1,     1,     1,     1,     1,     4,     7,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     1,     1,     1,
       1,     5,     2,     3,     1,     2,     1,     2,     1,     2,
       2,     3,     0,     5,     2,     4,     2,     4,     0,     6,
       2,     2,     2,     3,     3,     2,     2,     1,     1,     2,
       3,     3,     4,     2,     0,     6
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
        case 2:
#line 43 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,"");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,"");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,"");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,"");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,(yyvsp[-1].node).addr);strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "grammar.y" /* yacc.c:1646  */
    {
											int type= check_typ(csym,(yyvsp[-3].node).addr);
											int te=t+1;t=t+2;
											sprintf((yyval.node).code,"t%d = %d*%s\nt%d = %s[t%d]\n",te,type,(yyvsp[-1].node).addr,t,(yyvsp[-3].node).addr,te);
											sprintf((yyval.node).addr,"t%d",t);
										}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "grammar.y" /* yacc.c:1646  */
    {
											int t1=t+1,t2=t+2,t3=t+3,t=t+4;
											int l,b;
											int type= check_typ(csym,(yyvsp[-6].node).addr);
											check_dim(csym,(yyvsp[-6].node).addr,&l,&b);
											sprintf((yyval.node).code,"t%d = %d*%s\nt%d = %s+t%d\nt%d = %d*t%d\nt%d = %s[t%d]\n",t1,b,(yyvsp[-1].node).addr,t2,(yyvsp[-4].node).addr,t1,t3,type,t2,t,(yyvsp[-6].node).addr,t3);
											sprintf((yyval.node).addr,"t%d",t);
										}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,"");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "grammar.y" /* yacc.c:1646  */
    {
											int type= check_typ(csym,(yyvsp[-3].node).addr);
											t=t+1;
											sprintf((yyval.node).code,"t%d = %d * %s\n",t,type,(yyvsp[-1].node).addr);
											sprintf((yyval.node).addr,"%s[t%d]",(yyvsp[-3].node).addr,t);
										}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 79 "grammar.y" /* yacc.c:1646  */
    {
											int t1=t+1,t2=t+2,t=t+3;
											int l,b;
											int type= check_typ(csym,(yyvsp[-6].node).addr);
											check_dim(csym,(yyvsp[-6].node).addr,&l,&b);
											sprintf((yyval.node).code,"t%d = %d * %s\nt%d = %s+t%d\nt%d = %d * t%d\n",t1,b,(yyvsp[-1].node).addr,t2,(yyvsp[-4].node).addr,t1,t,type,t2);
											sprintf((yyval.node).addr,"%s[t%d]",(yyvsp[-6].node).addr,t);
										}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "grammar.y" /* yacc.c:1646  */
    {t++;int te=t;t++;
									sprintf((yyval.node).code,"t%d = %s\n%st%d = %s + 1\n%s = t%d\n",te,(yyvsp[-1].node).addr,(yyvsp[-1].node).code,t,(yyvsp[-1].node).addr,(yyvsp[-1].node).addr,t);
									sprintf((yyval.node).addr,"t%d",te);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "grammar.y" /* yacc.c:1646  */
    {t++;int te=t;t++;
									sprintf((yyval.node).code,"t%d = %s\n%st%d = %s - 1\n%s = t%d\n",te,(yyvsp[-1].node).addr,(yyvsp[-1].node).code,t,(yyvsp[-1].node).addr,(yyvsp[-1].node).addr,t);
									sprintf((yyval.node).addr,"t%d",te);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 102 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 103 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).code,"%st%d = %s + 1\n%s = t%d\n",(yyvsp[0].node).code,t,(yyvsp[0].node).addr,(yyvsp[0].node).addr,t);strcpy((yyval.node).addr,(yyvsp[0].node).addr);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).code,"%st%d = %s - 1\n%s = t%d\n",(yyvsp[0].node).code,t,(yyvsp[0].node).addr,(yyvsp[0].node).addr,t);strcpy((yyval.node).addr,(yyvsp[0].node).addr);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 106 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   						sprintf((yyval.node).code,"%s%s = %s %s\n",(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-1].node).code,(yyvsp[0].node).addr);}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 111 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,"plus");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 112 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,"minus");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 113 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,"not");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s * %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s / %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 122 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s %% %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 128 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s + %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 130 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s - %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 135 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 136 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s < %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 138 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s > %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 140 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s <= %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s >= %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 147 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 148 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s == %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 150 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).addr,"t%d",t);
   			sprintf((yyval.node).code,"%s%s%s = %s != %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyval.node).addr,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 155 "grammar.y" /* yacc.c:1646  */
    { 
							strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);
						}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 158 "grammar.y" /* yacc.c:1646  */
    {
					//printf("$1:%s %s",$1.addr,$3.addr);
					/*if(expr!=0){sprintf($$.code,"%sifFalse %s goto L%d\n%s",$1.code,$1.addr,expr,$3.code);strcpy($$.addr,$3.addr);sprintf($$.next,"L%d",expr);expr=0;}*/
					if((yyvsp[-3].node).begin!=0){temp=t;sprintf((yyval.node).code,"%sifFalse %s goto END%d\n%s",(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[-3].node).begin,(yyvsp[0].node).code);}
   					sprintf((yyval.node).code,"%sifFalse %s goto %s\n%s",(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[-3].node).next,(yyvsp[0].node).code);
   					strcpy((yyval.node).addr,(yyvsp[0].node).addr);
   					if(strcmp((yyvsp[-3].node).next,"")==0){
   						/*printf("here");*/
   						sprintf((yyval.node).code,"%sifFalse %s goto L%d\n%s",(yyvsp[-2].node).code,(yyvsp[-2].node).addr,l,(yyvsp[0].node).code);}
   						if((yyvsp[-3].node).begin!=0){temp=t;sprintf((yyval.node).code,"%sifFalse %s goto END%d\n%s",(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[-3].node).begin,(yyvsp[0].node).code);}
   					}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 172 "grammar.y" /* yacc.c:1646  */
    {
			strcpy((yyval.node).addr,(yyvsp[0].node).addr);
			strcpy((yyval.node).code,(yyvsp[0].node).code);
			//strcpy($$.next,$1.next);
			}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).next,(yyvsp[-2].node).next);}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 177 "grammar.y" /* yacc.c:1646  */
    {temp=t;
   			sprintf((yyval.node).code,"%sif %s goto %s\n%s",(yyvsp[-3].node).code,(yyvsp[-3].node).addr,(yyvsp[-4].node).true,(yyvsp[0].node).code);strcpy((yyval.node).addr,(yyvsp[0].node).addr);combined=1;//strcpy($$.addr,$1.addr);
   			if(strcmp((yyvsp[-4].node).true,"")==0){sprintf((yyval.node).code,"%sif %s goto L%d\n%s",(yyvsp[-3].node).code,(yyvsp[-3].node).addr,expr,(yyvsp[0].node).code);sprintf((yyvsp[-4].node).true,"L%d",expr);expr=0;}}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 183 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s%s%s = %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);/*printf("%s",$$.code);*/}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 184 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s%s%s = %s %s %s\n",(yyvsp[-2].node).code,(yyvsp[0].node).code,(yyvsp[-2].node).addr,(yyvsp[-2].node).addr,(yyvsp[-1].node).addr,(yyvsp[0].node).addr);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 188 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,"*");}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 189 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,"/");}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 190 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,"%");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 191 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,"+");}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 192 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).addr,"-");}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 196 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 197 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);sprintf((yyval.node).code,"%s",(yyvsp[0].node).code);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 198 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 202 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 205 "grammar.y" /* yacc.c:1646  */
    {j+=b;strcpy((yyval.node).code,(yyvsp[0].node).code);strcpy((yyval.node).addr,(yyvsp[0].node).addr);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 206 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s%s",(yyvsp[-2].node).code,(yyvsp[0].node).code);strcpy((yyval.node).addr,(yyvsp[0].node).addr);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 210 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 211 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s%s%s = %s\n",(yyvsp[0].node).code,(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[0].node).addr);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 212 "grammar.y" /* yacc.c:1646  */
    {
										char a[100]="";
										for(int i=1;i<strlen((yyvsp[0].node).addr)-1;i++)
										{
											sprintf(a,"%s[%d] = '%c'\n",(yyvsp[-2].node).addr,i-1,(yyvsp[0].node).addr[i]);
											strcat((yyval.node).code,a);
										}
										sprintf(a,"%s[%d] = '\\0'\n",(yyvsp[-2].node).addr,(int)strlen((yyvsp[0].node).addr)-1);
										strcat((yyval.node).code,a);
										}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 222 "grammar.y" /* yacc.c:1646  */
    {int l;check_dim(csym,(yyvsp[-2].node).addr,&l,&b);strcpy(add,(yyvsp[-2].node).addr);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 222 "grammar.y" /* yacc.c:1646  */
    {j=0;b=0;strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 223 "grammar.y" /* yacc.c:1646  */
    {int l;check_dim(csym,(yyvsp[-2].node).addr,&l,&b);strcpy(add,(yyvsp[-2].node).addr);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 223 "grammar.y" /* yacc.c:1646  */
    {j=0;b=0;strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 224 "grammar.y" /* yacc.c:1646  */
    {int l;check_dim(csym,(yyvsp[-2].node).addr,&l,&b);strcpy(add,(yyvsp[-2].node).addr);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 224 "grammar.y" /* yacc.c:1646  */
    {j=0;b=0;k=0;strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 228 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);strcpy((yyval.node).addr,(yyvsp[0].node).addr);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 232 "grammar.y" /* yacc.c:1646  */
    {int type= check_typ(csym,add);
					t=t+1;
					sprintf((yyval.node).code,"t%d = %d*%d\n%s[t%d] = %s\n",t,type,j,add,t,(yyvsp[0].node).addr);
					//strcat($$.code,"%s[%d]=%s\n",add,j,$1.addr);
					j+=1;}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 237 "grammar.y" /* yacc.c:1646  */
    {int type= check_typ(csym,add);
					t=t+1;
					sprintf((yyval.node).code,"%st%d = %d*%d\n%s[t%d] = %s\n",(yyvsp[-2].node).code,t,type,j,add,t,(yyvsp[0].node).addr);
					j+=1;}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 244 "grammar.y" /* yacc.c:1646  */
    {char a[100]="";
						
										for(int i=1;i<strlen((yyvsp[0].node).addr)-1;i++)
										{
											sprintf(a,"%s[%d] = '%c'\n",add,j+i-1,(yyvsp[0].node).addr[i]);
											strcat((yyval.node).code,a);
										}
										sprintf(a,"%s[%d] = '\\0'\n",add,(int)strlen((yyvsp[0].node).addr)-1+j);
										strcat((yyval.node).code,a);
										j+=b;
										}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 255 "grammar.y" /* yacc.c:1646  */
    {char a[100]="";
										//strcat($$.code,$1.code);
										for(int i=1;i<strlen((yyvsp[0].node).addr)-1;i++)
										{
											sprintf(a,"%s[%d] = '%c'\n",add,j+i-1,(yyvsp[0].node).addr[i]);
											strcat((yyval.node).code,a);
										}
										sprintf(a,"%s[%d] = '\\0'\n",add,(int)strlen((yyvsp[0].node).addr)-1+j);
										strcat((yyval.node).code,a);
										j+=b;
										}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 269 "grammar.y" /* yacc.c:1646  */
    {t++;k+=b;j=k;sprintf((yyval.node).code,"%s",(yyvsp[-1].node).code);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 270 "grammar.y" /* yacc.c:1646  */
    {k+=b;j=k;sprintf((yyval.node).code,"%s%s",(yyvsp[-4].node).code,(yyvsp[-1].node).code);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 281 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s %s\n",ptype(check_typ(csym,(yyvsp[0].node).addr)),(yyvsp[0].node).addr);strcpy((yyval.node).addr,(yyvsp[0].node).addr);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 282 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s %s[%s]\n",ptype(check_typ(csym,(yyvsp[-3].node).addr)),(yyvsp[-3].node).addr,(yyvsp[-1].node).addr);strcpy((yyval.node).addr,(yyvsp[-3].node).addr);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 283 "grammar.y" /* yacc.c:1646  */
    {t++;sprintf((yyval.node).code,"t%d = %s*%s\n%s %s[t%d]\n",t,(yyvsp[-4].node).addr,(yyvsp[-1].node).addr,ptype(check_typ(csym,(yyvsp[-6].node).addr)),(yyvsp[-6].node).addr,t);strcpy((yyval.node).addr,(yyvsp[-6].node).addr);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 287 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 288 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 289 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 290 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 291 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 292 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 293 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"print %s\n",(yyvsp[-2].node).addr);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 297 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 298 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 299 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 300 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 301 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 302 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 303 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"print %s\n",(yyvsp[-2].node).addr);}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 309 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[-1].node).addr);strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 313 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 314 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);sprintf((yyval.node).code,"%s%s",(yyvsp[-1].node).code,(yyvsp[0].node).code);}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 318 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);strcpy((yyval.node).code,(yyvsp[0].node).code);}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 319 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[0].node).addr);sprintf((yyval.node).code,"%s%s",(yyvsp[-1].node).code,(yyvsp[0].node).code);}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 324 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[-1].node).addr);strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 329 "grammar.y" /* yacc.c:1646  */
    { strcpy((yyval.node).addr,(yyvsp[-1].node).addr);strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 332 "grammar.y" /* yacc.c:1646  */
    {l++;sprintf((yyval.node).true,"L%d",l);expr=l;l++;sprintf((yyval.node).next,"L%d",l);(yyval.node).begin=0;}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 332 "grammar.y" /* yacc.c:1646  */
    {
						if(combined==1) sprintf((yyval.node).code,"%sifFalse t%d goto %s\n%s : \n",(yyvsp[-1].node).code,t,(yyvsp[-2].node).next,(yyvsp[-2].node).true);
						else sprintf((yyval.node).code,"%sifFalse t%d goto %s\n",(yyvsp[-1].node).code,t,(yyvsp[-2].node).next);
						strcpy((yyval.node).next,(yyvsp[-2].node).next);
						combined=0;
						}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 340 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s%s%s:\n",(yyvsp[-1].node).code,(yyvsp[0].node).code,(yyval.node).next);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 341 "grammar.y" /* yacc.c:1646  */
    {l++;sprintf((yyval.node).code,"%s%sgoto L%d\n%s:\n%sL%d:\n",(yyvsp[-3].node).code,(yyvsp[-2].node).code,l,(yyval.node).next,(yyvsp[0].node).code,l);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 345 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%s%s%s:\n",(yyvsp[-1].node).code,(yyvsp[0].node).code,(yyval.node).next);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 346 "grammar.y" /* yacc.c:1646  */
    {l++;sprintf((yyval.node).code,"%s%sgoto L%d\n%s:\n%sL%d:\n",(yyvsp[-3].node).code,(yyvsp[-2].node).code,l,(yyval.node).next,(yyvsp[0].node).code,l);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 350 "grammar.y" /* yacc.c:1646  */
    {beg++;cbeg++;(yyval.node).begin=beg;w=1;sprintf((yyval.node).next,"END%d",beg);l++;sprintf((yyval.node).true,"L%d",l);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 350 "grammar.y" /* yacc.c:1646  */
    {cbeg--;
			if(combined==1) sprintf((yyval.node).code,"BEGIN%d :\n%sifFalse %s goto END%d\n%s : \n%sgoto BEGIN%d\nEND%d :\n",(yyvsp[-3].node).begin,(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[-3].node).begin,(yyvsp[-3].node).true,(yyvsp[0].node).code,(yyvsp[-3].node).begin,(yyvsp[-3].node).begin);
			else sprintf((yyval.node).code,"BEGIN%d : \n%sifFalse %s goto END%d\n%s : \n%sgoto BEGIN%d\nEND%d :\n ",(yyvsp[-3].node).begin,(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[-3].node).begin,(yyvsp[-3].node).true,(yyvsp[0].node).code,(yyvsp[-3].node).begin,(yyvsp[-3].node).begin);
			strcpy((yyval.node).next,(yyvsp[-3].node).next);
			combined=0;w=0;
			
			//printf("\n\n%s\n\n",$<node>3.true);
			}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 361 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"goto BEGIN%d\n",cbeg);}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 362 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"goto END%d\n",cbeg);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 363 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"return\n");}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 364 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%sreturn %s\n",(yyvsp[-1].node).code,(yyvsp[-1].node).addr);}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 368 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"%sreturn %s\n",(yyvsp[-1].node).code,(yyvsp[-1].node).addr);}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 369 "grammar.y" /* yacc.c:1646  */
    {sprintf((yyval.node).code,"return\n");}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 373 "grammar.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 374 "grammar.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 378 "grammar.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].node).code);}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 381 "grammar.y" /* yacc.c:1646  */
    {printf("int %s\n%s = %s\n",(yyvsp[-1].node).addr,(yyvsp[-1].node).addr,(yyvsp[0].node).addr);}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 382 "grammar.y" /* yacc.c:1646  */
    {printf("int %s\n%s = %s\n",(yyvsp[-1].node).addr,(yyvsp[-1].node).addr,(yyvsp[0].node).addr);}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 383 "grammar.y" /* yacc.c:1646  */
    {printf("%s",(yyvsp[0].node).code);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 387 "grammar.y" /* yacc.c:1646  */
    {strcpy((yyval.node).next,"next");}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 387 "grammar.y" /* yacc.c:1646  */
    {printf("main:\n%snext :",(yyvsp[0].node).code);
							if((int)strlen((yyvsp[0].node).code)>(int)sizeof((yyvsp[0].node).code))
								printf("\n\nBuffer exceeded");}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2308 "y.tab.c" /* yacc.c:1646  */
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
#line 392 "grammar.y" /* yacc.c:1906  */

int yyerror()
{
	printf("\nNot Valid\n");
	exit(0);
	return 1;
}
int main()
{
	init_symtab();
	if(!yyparse()){
		//printf("\nValid\n");
		}
	return 1;
}
