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

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "sym_tab.h"
#include<unistd.h>
#include <sys/types.h> 
int yyerror(char* err);  
extern FILE *yyout;
int yylex();
int comp_cnt=0;
int csym=0;
int ln=1;
int max=0;
char type[10];
char var[64];
int x=0,y=0,t=0,idc=0;


#line 86 "y.tab.c" /* yacc.c:339  */

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
#line 32 "grammar.y" /* yacc.c:355  */

typedef struct Num
{
	float fVal;
	int idVal;
	int type;
}NUM;

#line 125 "y.tab.c" /* yacc.c:355  */

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
#line 39 "grammar.y" /* yacc.c:355  */

	NUM nVal;
	char sVal[64];
	char cVal;

#line 215 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

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
       2,     2,     2,    39,     2,     2,     2,    47,     2,     2,
      41,    42,    45,    37,    50,    38,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
      48,    40,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
       0,    53,    53,    59,    60,    61,    62,    63,    68,    77,
      78,    84,    93,    94,    95,    99,   100,   101,   102,   106,
     107,   108,   112,   113,   114,   115,   119,   120,   121,   125,
     126,   127,   128,   129,   133,   134,   135,   139,   140,   144,
     145,   150,   158,   159,   160,   161,   162,   163,   167,   168,
     169,   173,   178,   179,   183,   184,   190,   194,   196,   198,
     202,   206,   207,   211,   212,   216,   217,   221,   222,   223,
     224,   228,   232,   239,   252,   253,   254,   255,   256,   257,
     258,   262,   263,   264,   265,   266,   267,   268,   273,   274,
     278,   279,   283,   284,   288,   289,   293,   294,   298,   299,
     303,   304,   308,   312,   313,   314,   315,   319,   320,   324,
     325,   329,   330,   331,   332,   332,   337,   337,   342,   346
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
  "'-'", "'!'", "'='", "'('", "')'", "'['", "']'", "'*'", "'/'", "'%'",
  "'<'", "'>'", "','", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "var_expression", "postfix_expression",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "list_of_strings", "list_of_lists", "type_specifier",
  "declarator", "statement", "while_statement", "compound_statement",
  "while_statement_list", "statement_list", "expression_statement",
  "while_compound_statement", "selection_statement",
  "while_selection_statement", "iteration_statement", "jump_statement",
  "return_statement", "program", "external_declaration", "$@1", "$@2",
  "function_definition", YY_NULLPTR
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
      61,    40,    41,    91,    93,    42,    47,    37,    60,    62,
      44,    59,   123,   125
};
# endif

#define YYPACT_NINF -112

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define YYTABLE_NINF -12

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     289,  -112,  -112,  -112,  -112,    23,    70,  -112,     4,    79,
     392,  -112,  -112,  -112,    44,    56,   117,  -112,    59,  -112,
      72,   108,  -112,  -112,    78,   111,    76,   147,  -112,    25,
    -112,  -112,   104,  -112,  -112,  -112,    85,  -112,   112,   110,
    -112,  -112,   350,   350,  -112,  -112,  -112,    97,  -112,   120,
    -112,   350,   107,   153,    27,   180,   157,   161,  -112,    78,
     173,   358,   345,   161,  -112,   -33,   140,   176,  -112,  -112,
    -112,  -112,   350,  -112,    15,    62,    77,  -112,  -112,  -112,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,  -112,   142,   204,  -112,  -112,  -112,  -112,
    -112,  -112,   350,  -112,   208,   207,   175,   184,   332,   185,
    -112,  -112,   144,  -112,   147,  -112,  -112,   215,  -112,  -112,
    -112,  -112,    93,   350,  -112,   223,  -112,   181,  -112,  -112,
    -112,  -112,   107,   107,   153,   153,   153,   153,    27,    27,
     180,   157,   189,   190,   161,   198,  -112,   199,   350,   350,
    -112,    21,   237,  -112,  -112,  -112,  -112,  -112,  -112,   350,
     241,   386,   242,  -112,    71,    83,  -112,   206,    98,   211,
     245,   217,   293,   254,   200,  -112,  -112,   220,   222,   243,
     229,   221,   234,   343,   230,    18,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,   391,   268,   293,   350,  -112,  -112,
    -112,    63,   267,  -112,  -112,   136,   236,  -112,    95,  -112,
     244,  -112,  -112,  -112,   254,   238,   261,  -112,   254,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    67,    68,    69,    70,     0,     0,   111,     0,     0,
       0,   110,   112,   114,    71,     0,     0,    52,    54,     1,
       0,     0,   118,   109,     0,     0,     0,     0,    51,     0,
     113,   116,     2,     4,     3,     5,     0,   115,     0,     0,
      53,    56,     0,     0,    19,    20,    21,     0,    12,    15,
      22,     0,    26,    29,    34,    37,    39,    60,    55,     0,
       0,     2,     0,    49,    48,     0,    72,     0,   119,    16,
      17,    63,     0,    61,     0,     0,     0,    13,    14,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,    43,    44,    45,    46,
      47,    42,     0,     6,     0,     0,     0,     0,     0,     0,
      94,    88,     0,    79,     0,    92,    74,     0,    75,    76,
      77,    78,     0,     0,    58,     0,    57,     0,    59,    23,
      24,    25,    27,    28,    32,    33,    30,    31,    35,    36,
      38,    40,     7,     0,    41,     9,    50,     0,     0,     0,
     107,     0,     0,    95,    89,    93,    65,    62,    64,     0,
       0,     7,     0,    73,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,    66,     8,     0,    10,    98,
       0,     0,     0,     0,     0,     0,    86,   102,    82,    81,
      83,    84,    85,    80,     8,     0,     0,     0,   103,   104,
     105,     0,     0,    96,    90,     0,     0,    99,     0,   106,
       0,    97,    91,    11,     0,     0,   100,    87,     0,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,     1,  -112,  -112,   -31,  -112,   121,   -72,   118,   203,
     212,   -28,   186,  -112,   264,     0,  -112,   276,   -27,   -67,
    -112,  -112,     8,  -112,  -111,    17,   269,  -112,  -112,   -64,
    -112,  -112,  -112,   -63,  -112,  -112,  -112,  -112,  -112,  -112,
     297
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    62,    49,    50,    51,    52,    53,    54,    55,
      56,    63,    64,   102,   112,   186,    16,    17,    73,    74,
      75,    76,   114,    18,   115,   187,   116,   205,   117,   188,
     189,   119,   190,   191,   192,   121,     9,    10,    24,    59,
      11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    57,    58,   118,   120,   122,   155,    14,     8,   103,
      22,    69,    70,   134,   135,   136,   137,   104,     8,    57,
      79,    61,    33,    34,    35,    37,    42,    43,    32,    33,
      34,    35,    41,    42,    43,    15,    92,    85,    86,     1,
       2,     3,     4,   180,    57,   107,   181,   182,   183,   129,
     130,   131,   184,   118,   120,    44,    45,    46,    12,    36,
      93,   179,    44,    45,    46,   123,    36,   113,   124,   110,
     185,   203,   166,    13,   144,    87,    88,    47,    92,    19,
     151,    32,    33,    34,    35,   207,    92,    25,    61,    33,
      34,    35,   168,    42,    43,    57,   157,    26,    92,    29,
      32,    33,    34,    35,    71,    42,    43,    30,   118,   120,
      92,    31,   125,   172,   209,   126,    38,   113,    39,    36,
     164,   165,    44,    45,    46,   173,    36,   127,    77,    78,
     128,    57,   118,   120,    44,    45,    46,   214,    36,    61,
      33,    34,    35,   123,    42,    43,   156,    60,   123,    72,
      14,   175,    80,    81,    82,   201,    66,     1,     2,     3,
       4,   180,    67,   107,   181,   182,   183,    27,    28,   208,
     184,    91,   113,    44,    45,    46,    92,    36,    94,    61,
      33,    34,    35,   105,    42,    43,   142,   110,   185,   211,
      83,    84,    89,    90,   104,   153,   113,     1,     2,     3,
       4,   106,   204,   107,   132,   133,   108,   138,   139,   143,
     109,   145,   147,    44,    45,    46,   148,    36,    61,    33,
      34,    35,   212,    42,    43,   149,   152,   110,    67,   111,
     158,   216,   160,   159,   161,   219,     1,     2,     3,     4,
     106,   162,   107,   163,   167,   108,   169,   171,   174,   109,
     177,   193,    44,    45,    46,   176,    36,    61,    33,    34,
      35,   178,    42,    43,   194,   195,   110,    67,   154,   196,
     197,   202,   198,   206,   210,     1,     2,     3,     4,   180,
     213,   107,   181,   182,   183,   199,   215,   218,   184,   217,
     146,    44,    45,    46,   140,    36,    61,    33,    34,    35,
      65,    42,    43,    40,   141,   110,   185,    23,    68,     0,
       1,     2,     3,     4,     1,     2,     3,     4,   106,     0,
     107,     5,     6,   108,     0,     0,     0,   109,     0,     0,
      44,    45,    46,     0,    36,    32,    33,    34,    35,     0,
      42,    43,     0,     0,   110,    67,    32,    33,    34,    35,
       0,    42,    43,    32,    33,    34,    35,     0,    42,    43,
       0,    96,    97,    98,    99,   100,     0,     0,     0,    44,
      45,    46,     0,    36,    -9,    -9,    -9,    -9,    -9,     0,
      44,    45,    46,   150,    36,   101,     0,    44,    45,    46,
       0,    36,     0,     0,   200,     0,     0,     0,    -9,     0,
       0,    95,   -10,   -10,   -10,   -10,   -10,   -11,   -11,   -11,
     -11,   -11,     0,     1,     2,     3,     4,     0,     0,     0,
       0,     0,     0,     0,    20,    21,   -10,     0,     0,   170,
       0,   -11
};

static const yytype_int16 yycheck[] =
{
       0,    29,    29,    67,    67,    72,   117,     3,     0,    42,
      10,    42,    43,    85,    86,    87,    88,    50,    10,    47,
      51,     3,     4,     5,     6,    24,     8,     9,     3,     4,
       5,     6,     7,     8,     9,    31,    15,    10,    11,    21,
      22,    23,    24,    25,    72,    27,    28,    29,    30,    80,
      81,    82,    34,   117,   117,    37,    38,    39,    35,    41,
      59,   172,    37,    38,    39,    50,    41,    67,    53,    51,
      52,    53,    51,     3,   102,    48,    49,    52,    15,     0,
     108,     3,     4,     5,     6,   196,    15,    43,     3,     4,
       5,     6,   159,     8,     9,   123,   123,    41,    15,    40,
       3,     4,     5,     6,     7,     8,     9,    35,   172,   172,
      15,     3,    50,    42,    51,    53,     5,   117,    42,    41,
     148,   149,    37,    38,    39,    42,    41,    50,     8,     9,
      53,   159,   196,   196,    37,    38,    39,    42,    41,     3,
       4,     5,     6,    50,     8,     9,    53,    43,    50,    52,
       3,    53,    45,    46,    47,   183,    44,    21,    22,    23,
      24,    25,    52,    27,    28,    29,    30,    50,    51,   197,
      34,    14,   172,    37,    38,    39,    15,    41,     5,     3,
       4,     5,     6,    43,     8,     9,    44,    51,    52,    53,
      37,    38,    12,    13,    50,    51,   196,    21,    22,    23,
      24,    25,   185,    27,    83,    84,    30,    89,    90,     5,
      34,     3,     5,    37,    38,    39,    41,    41,     3,     4,
       5,     6,   205,     8,     9,    41,    41,    51,    52,    53,
       7,   214,    43,    52,    44,   218,    21,    22,    23,    24,
      25,    43,    27,    44,     7,    30,     5,     5,    42,    34,
       5,    51,    37,    38,    39,    44,    41,     3,     4,     5,
       6,    44,     8,     9,    44,    43,    51,    52,    53,    26,
      41,    41,    51,     5,     7,    21,    22,    23,    24,    25,
      44,    27,    28,    29,    30,    51,    42,    26,    34,    51,
     104,    37,    38,    39,    91,    41,     3,     4,     5,     6,
      36,     8,     9,    27,    92,    51,    52,    10,    39,    -1,
      21,    22,    23,    24,    21,    22,    23,    24,    25,    -1,
      27,    32,    33,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    41,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    51,    52,     3,     4,     5,     6,
      -1,     8,     9,     3,     4,     5,     6,    -1,     8,     9,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    37,
      38,    39,    -1,    41,    16,    17,    18,    19,    20,    -1,
      37,    38,    39,    51,    41,    40,    -1,    37,    38,    39,
      -1,    41,    -1,    -1,    51,    -1,    -1,    -1,    40,    -1,
      -1,    43,    16,    17,    18,    19,    20,    16,    17,    18,
      19,    20,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    40,    -1,    -1,    43,
      -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    32,    33,    69,    76,    90,
      91,    94,    35,     3,     3,    31,    70,    71,    77,     0,
      32,    33,    69,    94,    92,    43,    41,    50,    51,    40,
      35,     3,     3,     4,     5,     6,    41,    55,     5,    42,
      71,     7,     8,     9,    37,    38,    39,    52,    55,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    72,    93,
      43,     3,    56,    65,    66,    68,    44,    52,    80,    58,
      58,     7,    52,    72,    73,    74,    75,     8,     9,    58,
      45,    46,    47,    37,    38,    10,    11,    48,    49,    12,
      13,    14,    15,    55,     5,    43,    16,    17,    18,    19,
      20,    40,    67,    42,    50,    43,    25,    27,    30,    34,
      51,    53,    68,    69,    76,    78,    80,    82,    83,    85,
      87,    89,    73,    50,    53,    50,    53,    50,    53,    58,
      58,    58,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    64,    44,     5,    65,     3,    66,     5,    41,    41,
      51,    65,    41,    51,    53,    78,    53,    72,     7,    52,
      43,    44,    43,    44,    65,    65,    51,     7,    73,     5,
      43,     5,    42,    42,    42,    53,    44,     5,    44,    78,
      25,    28,    29,    30,    34,    52,    69,    79,    83,    84,
      86,    87,    88,    51,    44,    43,    26,    41,    51,    51,
      51,    65,    41,    53,    79,    81,     5,    78,    65,    51,
       7,    53,    79,    44,    42,    42,    79,    51,    26,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    73,    73,    74,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    88,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    92,    91,    93,    91,    91,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     4,     7,     1,
       4,     7,     1,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     1,     3,     3,     5,     5,     5,
       1,     1,     3,     1,     3,     3,     5,     1,     1,     1,
       1,     1,     4,     7,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     1,     1,     1,     1,     5,     2,     3,
       1,     2,     1,     2,     1,     2,     2,     3,     5,     7,
       5,     7,     5,     2,     2,     2,     3,     2,     3,     2,
       1,     1,     2,     3,     0,     4,     0,     5,     2,     5
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
#line 53 "grammar.y" /* yacc.c:1646  */
    {
					if(((yyval.nVal).idVal=find_variable(csym,var,0,0,0,&((yyval.nVal).fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					(yyval.nVal).type=check_typ(csym,var);
					}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).type=1;}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).type=3;}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).type=2;}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[-1].nVal).fVal;(yyval.nVal).type=(yyvsp[-1].nVal).type;}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "grammar.y" /* yacc.c:1646  */
    {if(((yyval.nVal).idVal=find_variable(csym,var,1,(int)(yyvsp[-1].nVal).fVal,0,&((yyval.nVal).fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					(yyval.nVal).type=check_typ(csym,var);
					}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "grammar.y" /* yacc.c:1646  */
    {if(((yyval.nVal).idVal=find_variable(csym,var,2,(int)(yyvsp[-4].nVal).fVal,(int)(yyvsp[-1].nVal).fVal,&((yyval.nVal).fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					//printf("find: %f",$$.fVal);
					(yyval.nVal).type=check_typ(csym,var);
					}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "grammar.y" /* yacc.c:1646  */
    {if(((yyval.nVal).idVal=find_variable(csym,var,0,0,0,&((yyval.nVal).fVal)))==-1){yyerror("Wrong use of variable or undeclared");}(yyval.nVal).type=check_typ(csym,var);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "grammar.y" /* yacc.c:1646  */
    {
		if(((yyval.nVal).idVal=find_variable(csym,var,1,(int)(yyvsp[-1].nVal).fVal,0,&((yyval.nVal).fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					(yyval.nVal).type=check_typ(csym,var);
	}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 84 "grammar.y" /* yacc.c:1646  */
    {
		if(((yyval.nVal).idVal=find_variable(csym,var,2,(int)(yyvsp[-4].nVal).fVal,(int)(yyvsp[-1].nVal).fVal,&((yyval.nVal).fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					(yyval.nVal).type=check_typ(csym,var);
	}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;(yyval.nVal).type=(yyvsp[0].nVal).type;}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[-1].nVal).fVal;(yyvsp[-1].nVal).fVal+=1;(yyval.nVal).type=(yyvsp[-1].nVal).type;}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[-1].nVal).fVal;(yyvsp[-1].nVal).fVal-=1;(yyval.nVal).type=(yyvsp[-1].nVal).type;}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 99 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;(yyval.nVal).type=(yyvsp[0].nVal).type;}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[0].nVal).fVal+=1;(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).type=(yyvsp[0].nVal).type;}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 101 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[0].nVal).fVal-=1;(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).type=(yyvsp[0].nVal).type;}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 102 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=perform_unary((yyvsp[0].nVal).fVal,(yyvsp[-1].cVal));(yyval.nVal).type=(yyvsp[0].nVal).type;}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)=(yyvsp[0].cVal);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)=(yyvsp[0].cVal);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 108 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)=(yyvsp[0].cVal);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;(yyval.nVal).type=(yyvsp[0].nVal).type;}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[-2].nVal).fVal*(yyvsp[0].nVal).fVal;(yyval.nVal).type=((yyvsp[-2].nVal).type==2||(yyvsp[0].nVal).type==2)?2:1;}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "grammar.y" /* yacc.c:1646  */
    {if((yyvsp[0].nVal).fVal==0){yyerror("Division By Zero");}(yyval.nVal).fVal=(yyvsp[-2].nVal).fVal/(yyvsp[0].nVal).fVal;(yyval.nVal).type=2;}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "grammar.y" /* yacc.c:1646  */
    {if((yyvsp[-2].nVal).type==2||(yyvsp[0].nVal).type==2||(yyvsp[0].nVal).fVal==0){yyerror("Mod Operation not possible on this");}(yyval.nVal).fVal=(int)(yyvsp[-2].nVal).fVal%(int)(yyvsp[0].nVal).fVal;(yyval.nVal).type=1;}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[-2].nVal).fVal+(yyvsp[0].nVal).fVal;}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 121 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[-2].nVal).fVal-(yyvsp[0].nVal).fVal;}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal<(yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal>(yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal<=(yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal>=(yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal==(yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 135 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal!=(yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 139 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal && (yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 144 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "grammar.y" /* yacc.c:1646  */
    {{(yyval.nVal).fVal=((yyvsp[-2].nVal).fVal || (yyvsp[0].nVal).fVal);(yyval.nVal).idVal=(yyvsp[0].nVal).idVal;}}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 151 "grammar.y" /* yacc.c:1646  */
    {
		//STOPPED HERE
		if(check_typ_id(csym,(yyvsp[-2].nVal).idVal)==-1){yyerror("Wrong use of variable or undeclared");}
		}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 158 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)=1;}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 159 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)='*';}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 160 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)='/';}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 161 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)='%';}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 162 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)='+';}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 163 "grammar.y" /* yacc.c:1646  */
    {(yyval.cVal)='-';}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 173 "grammar.y" /* yacc.c:1646  */
    {strcpy(type,"");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 183 "grammar.y" /* yacc.c:1646  */
    {/*add to  symtab-done below*/}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 184 "grammar.y" /* yacc.c:1646  */
    {
		int ty=check_typ_id(csym,(yyvsp[-2].nVal).idVal);
		//printf("val%d",ty);
		if(assign_id(csym,(yyvsp[-2].nVal).idVal,(yyvsp[0].nVal).fVal,1,ty,0,0)==-1){yyerror("Assignment Not Possible");}
		if(check_dim(csym,(yyvsp[-2].nVal).idVal)!=0){yyerror("Dimensional Error");}
	}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "grammar.y" /* yacc.c:1646  */
    {	
			if(assign_string(csym,(yyvsp[-2].nVal).idVal,(yyvsp[0].sVal),0)!=1){yyerror("Type mismatch");}
		}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 196 "grammar.y" /* yacc.c:1646  */
    {if(check_dim(csym,(yyvsp[-4].nVal).idVal)!=1){yyerror("Dimensional Error 1D");}}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 198 "grammar.y" /* yacc.c:1646  */
    {if(check_dim(csym,(yyvsp[-4].nVal).idVal)!=2){yyerror("Dimensional Error 2D");}}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 202 "grammar.y" /* yacc.c:1646  */
    {(yyval.nVal).fVal=(yyvsp[0].nVal).fVal;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 206 "grammar.y" /* yacc.c:1646  */
    {if(assign_id(csym,idc,(yyvsp[0].nVal).fVal,1,t,x,y++)==-1){yyerror("Wrong Assignment");}}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 207 "grammar.y" /* yacc.c:1646  */
    {if(assign_id(csym,idc,(yyvsp[0].nVal).fVal,1,t,x,y++)==-1){yyerror("Wrong Assignment");}}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 211 "grammar.y" /* yacc.c:1646  */
    {if(assign_string(csym,idc,(yyvsp[0].sVal),x)!=2){yyerror("Error in String Assignment");}x++;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 212 "grammar.y" /* yacc.c:1646  */
    {if(assign_string(csym,idc,(yyvsp[0].sVal),x)!=2){yyerror("Error in String Assignment");}x++;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 216 "grammar.y" /* yacc.c:1646  */
    {x++;y=0;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 217 "grammar.y" /* yacc.c:1646  */
    {x++;y=0;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 228 "grammar.y" /* yacc.c:1646  */
    {
					if(((yyval.nVal).idVal=add_to_symtab(csym,var,type,ln,0,0,0))==-1){
						yyerror("Either keyword or variable already present");}
					}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 232 "grammar.y" /* yacc.c:1646  */
    {
					if(((yyval.nVal).idVal=add_to_symtab(csym,var,type,ln,1,(int)(yyvsp[-1].nVal).fVal,0))==-1){
						yyerror("Either keyword or variable already present");}	
						idc=(yyval.nVal).idVal;
						t=check_typ(csym,var);
						x=0;y=0;
					}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 239 "grammar.y" /* yacc.c:1646  */
    {
					if(((yyval.nVal).idVal=add_to_symtab(csym,var,type,ln,2,(int)(yyvsp[-4].nVal).fVal,(int)(yyvsp[-1].nVal).fVal))==-1){
						yyerror("Either keyword or variable already present");}
						idc=(yyval.nVal).idVal;
						t=check_typ(csym,var);
						x=0;y=0;
					}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 324 "grammar.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 325 "grammar.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 332 "grammar.y" /* yacc.c:1646  */
    {
					if(add_to_symtab(csym,var,type,ln,0,0,0)==-1){
						yyerror("Either keyword or variable already present");}
					strcpy(type,"");
					}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 337 "grammar.y" /* yacc.c:1646  */
    {
					if(add_to_symtab(csym,var,type,ln,0,0,0)==-1){
						yyerror("Either keyword or variable already present");}
					strcpy(type,"");
					}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1967 "y.tab.c" /* yacc.c:1646  */
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
#line 349 "grammar.y" /* yacc.c:1906  */


int yyerror(char * err)
{
	printf("\n\n\nNot Valid at line number %d\nError Information : %s\n\n",ln,err);
	FILE *fptr;
	fptr = fopen("../valid.txt", "w");
	fprintf(fptr,"%s","0");
	fclose(fptr);
	exit(0);

	return 1;
}
int main()
{
	init_symtab();
	yyout=fopen("../IO/op1.c","w");
	if(!yyparse()){
		//printf("\nValid\n\n");
		FILE *fptr;
		fptr = fopen("../valid.txt", "w");
		fprintf(fptr,"%s","1");
		fclose(fptr);
		exit_sym();
}
	display_symtab(max+1);
	return 1;
}
