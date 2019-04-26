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
#line 1 "gram.y" /* yacc.c:339  */

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int yyerror();  
int yylex();

char *yytext;
char value[100]={'\0'};
FILE *fptr;

int yywrap()
{
return(1);
}
 
struct Node {
	char token[100];
	char* num ;
	struct Node* c1;
	struct Node* c2;
	struct Node* c3;
};

struct Node* root;
typedef struct Node node;

node* create_leaf (char * token, char* num);
node* create_node (char* token, node* c1, node* c2, node* c3);


#line 98 "y.tab.c" /* yacc.c:339  */

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
#line 45 "gram.y" /* yacc.c:355  */

	char* text; struct Node* node_ptr;

#line 214 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

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
       0,    59,    59,    63,    66,    69,    72,    74,    77,    87,
      91,    95,   101,   102,   109,   118,   119,   125,   131,   136,
     138,   140,   145,   147,   151,   154,   159,   160,   162,   167,
     168,   170,   172,   174,   179,   180,   182,   187,   188,   193,
     194,   200,   208,   209,   210,   211,   212,   213,   217,   218,
     219,   223,   232,   234,   236,   238,   245,   246,   253,   254,
     257,   263,   267,   270,   275,   279,   280,   285,   287,   294,
     295,   301,   304,   306,   314,   315,   316,   317,   318,   319,
     320,   324,   325,   326,   327,   328,   329,   330,   335,   336,
     340,   341,   346,   347,   352,   353,   357,   358,   362,   365,
     370,   373,   378,   383,   386,   389,   392,   399,   402,   409,
     411,   415,   417,   425,   433,   440,   448,   455
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
  "declaration", "type_specifier", "init_declarator_list",
  "init_declarator", "initializer", "initializer_list", "list_of_strings",
  "list_of_lists", "declarator", "statement", "while_statement",
  "compound_statement", "while_statement_list", "statement_list",
  "expression_statement", "while_compound_statement",
  "selection_statement", "while_selection_statement",
  "iteration_statement", "jump_statement", "return_statement", "program",
  "external_declaration", "function_definition", YY_NULLPTR
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

#define YYPACT_NINF -130

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define YYTABLE_NINF -12

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     210,  -130,  -130,  -130,  -130,   -27,    24,  -130,     3,    29,
     249,  -130,  -130,    32,   -10,    14,    13,  -130,    28,  -130,
      65,   101,  -130,  -130,    68,  -130,  -130,  -130,    93,  -130,
     108,    73,   132,  -130,     8,  -130,    32,   150,   142,   381,
     381,  -130,  -130,  -130,  -130,   170,   138,  -130,   381,   161,
      56,    40,   152,   127,   186,  -130,    -2,   113,   159,  -130,
    -130,    15,   186,  -130,  -130,   171,   216,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,   381,  -130,  -130,  -130,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,  -130,   226,   187,   214,  -130,  -130,   381,  -130,
      75,    76,    98,   197,   201,   186,  -130,  -130,  -130,   161,
     161,    56,    56,    56,    56,    40,    40,   152,   127,   203,
    -130,   242,   208,   209,    71,   213,  -130,  -130,   125,  -130,
     132,  -130,  -130,   253,  -130,  -130,  -130,  -130,   124,   381,
    -130,   256,  -130,   212,  -130,   255,   383,   263,   225,   381,
     381,  -130,    10,   272,  -130,  -130,  -130,  -130,  -130,  -130,
     381,   240,   280,   244,  -130,    42,    43,  -130,   247,   141,
    -130,   258,   243,   331,   292,   248,  -130,   375,   288,   277,
     266,   257,   259,   370,   268,   115,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,   267,   331,   381,  -130,  -130,  -130,
      11,   305,  -130,  -130,   175,  -130,  -130,    72,  -130,   276,
    -130,  -130,   292,   273,   297,  -130,   292,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    52,    53,    54,    55,     0,     0,   111,     0,     0,
       0,   110,   112,     0,    71,     0,     0,    56,    58,     1,
       0,     0,   116,   109,     2,     4,     3,     5,     0,   114,
       0,     0,     0,    51,     0,   113,     0,     0,     2,     0,
       0,    19,    20,    21,    12,     0,    15,    22,     0,    26,
      29,    34,    37,    39,    49,    48,     0,     0,     0,    57,
      60,     0,    64,    59,   115,     0,     0,    16,    17,    43,
      44,    45,    46,    47,    42,     0,    13,    14,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,    72,     0,   117,    67,     0,    65,
       0,     0,     0,     7,     0,    41,    23,    24,    25,    27,
      28,    32,    33,    30,    31,    35,    36,    38,    40,     9,
      50,     0,     0,     0,     0,     0,    94,    88,     0,    79,
       0,    92,    74,     0,    75,    76,    77,    78,     0,     0,
      62,     0,    61,     0,    63,     0,     7,     0,     0,     0,
       0,   107,     0,     0,    95,    89,    93,    69,    66,    68,
       0,     0,     0,     0,    73,     0,     0,   108,     0,     0,
       8,     0,    10,     0,     0,     0,    70,     8,     0,    98,
       0,     0,     0,     0,     0,     0,    86,   102,    82,    81,
      83,    84,    85,    80,     0,     0,     0,   103,   104,   105,
       0,     0,    96,    90,     0,    11,    99,     0,   106,     0,
      97,    91,     0,     0,   100,    87,     0,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,    -4,  -130,  -130,    -9,  -130,   110,    85,   136,   235,
     236,   -33,   239,  -130,   300,     0,    82,  -130,   306,   -32,
     -91,  -130,  -130,  -130,  -129,  -126,   283,  -130,  -130,   -92,
    -130,  -130,  -130,   -90,  -130,  -130,  -130,  -130,   332
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    75,   128,   186,   130,    16,    17,    99,
     100,   101,   102,    18,   131,   187,   132,   204,   133,   188,
     189,   135,   190,   191,   192,   137,     9,    10,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    62,    63,   134,   156,   136,    14,   138,    12,    29,
      22,    24,    25,    26,    27,    60,    39,    40,    24,    25,
      26,    27,    97,    39,    40,    91,    91,    13,    62,    19,
      67,    68,    64,    30,    15,    24,    25,    26,    27,    78,
      92,   134,   105,   136,   179,    41,    42,    43,    93,    28,
      84,    85,    41,    42,    43,    31,    28,    91,    91,   203,
      61,   167,   208,    32,    33,    62,   206,    98,    34,   169,
     106,   107,   108,    28,    24,    25,    26,    27,   211,    39,
      40,   134,     8,   136,   173,   174,   214,    91,    86,    87,
     217,   152,     8,    82,    83,   129,    38,    25,    26,    27,
      35,    39,    40,   134,    36,   136,    62,   158,    41,    42,
      43,    37,    28,    57,   212,    58,   165,   166,    38,    25,
      26,    27,   151,    39,    40,   139,   141,    62,   140,   142,
      41,    42,    43,   129,    28,    14,     1,     2,     3,     4,
     180,    90,   123,   181,   182,   183,    76,    77,   143,   184,
     200,   144,    41,    42,    43,    65,    28,    94,    -9,    -9,
      -9,    -9,    -9,   207,    88,    89,   126,   185,   202,   111,
     112,   113,   114,   129,   139,    93,   154,   157,    38,    25,
      26,    27,    -9,    39,    40,    66,    69,    70,    71,    72,
      73,   139,   109,   110,   176,   129,     1,     2,     3,     4,
     180,    91,   123,   181,   182,   183,    79,    80,    81,   184,
      74,    95,    41,    42,    43,   103,    28,    38,    25,    26,
      27,   104,    39,    40,   115,   116,   126,   185,   210,   119,
     121,     1,     2,     3,     4,     1,     2,     3,     4,   122,
     145,   123,     5,     6,   124,   146,   147,   148,   125,   149,
     150,    41,    42,    43,   153,    28,    38,    25,    26,    27,
     161,    39,    40,   159,   160,   126,    95,   127,   163,   164,
       1,     2,     3,     4,     1,     2,     3,     4,   122,   168,
     123,    20,    21,   124,   170,   171,   178,   125,   172,   175,
      41,    42,    43,   194,    28,    38,    25,    26,    27,   193,
      39,    40,   177,   195,   126,    95,   155,   196,   197,   201,
     198,   205,   209,     1,     2,     3,     4,   180,   213,   123,
     181,   182,   183,   216,   215,   117,   184,   118,    56,    41,
      42,    43,   120,    28,    38,    25,    26,    27,    59,    39,
      40,    96,    23,   126,   185,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,   122,     0,   123,     0,
       0,   124,     0,     0,     0,   125,     0,     0,    41,    42,
      43,     0,    28,    24,    25,    26,    27,     0,    39,    40,
       0,     0,   126,    95,    24,    25,    26,    27,     0,    39,
      40,   -11,   -11,   -11,   -11,   -11,     0,     0,     0,   -10,
     -10,   -10,   -10,   -10,     0,     0,     0,    41,    42,    43,
       0,    28,     0,     0,     0,   -11,     0,     0,    41,    42,
      43,   199,    28,   -10,     0,     0,   162
};

static const yytype_int16 yycheck[] =
{
       0,    34,    34,    95,   133,    95,     3,    98,    35,    13,
      10,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,    15,    15,     3,    61,     0,
      39,    40,    36,    43,    31,     3,     4,     5,     6,    48,
      42,   133,    75,   133,   173,    37,    38,    39,    50,    41,
      10,    11,    37,    38,    39,    41,    41,    15,    15,   185,
      52,    51,    51,    50,    51,    98,   195,    52,    40,   160,
      79,    80,    81,    41,     3,     4,     5,     6,   204,     8,
       9,   173,     0,   173,    42,    42,   212,    15,    48,    49,
     216,   124,    10,    37,    38,    95,     3,     4,     5,     6,
      35,     8,     9,   195,     3,   195,   139,   139,    37,    38,
      39,    43,    41,     5,    42,    42,   149,   150,     3,     4,
       5,     6,    51,     8,     9,    50,    50,   160,    53,    53,
      37,    38,    39,   133,    41,     3,    21,    22,    23,    24,
      25,    14,    27,    28,    29,    30,     8,     9,    50,    34,
     183,    53,    37,    38,    39,     5,    41,    44,    16,    17,
      18,    19,    20,   196,    12,    13,    51,    52,    53,    84,
      85,    86,    87,   173,    50,    50,    51,    53,     3,     4,
       5,     6,    40,     8,     9,    43,    16,    17,    18,    19,
      20,    50,    82,    83,    53,   195,    21,    22,    23,    24,
      25,    15,    27,    28,    29,    30,    45,    46,    47,    34,
      40,    52,    37,    38,    39,    44,    41,     3,     4,     5,
       6,     5,     8,     9,    88,    89,    51,    52,    53,     3,
      43,    21,    22,    23,    24,    21,    22,    23,    24,    25,
      43,    27,    32,    33,    30,    44,    43,     5,    34,    41,
      41,    37,    38,    39,    41,    41,     3,     4,     5,     6,
       5,     8,     9,     7,    52,    51,    52,    53,     5,    44,
      21,    22,    23,    24,    21,    22,    23,    24,    25,     7,
      27,    32,    33,    30,    44,     5,    43,    34,    44,    42,
      37,    38,    39,     5,    41,     3,     4,     5,     6,    51,
       8,     9,    44,    26,    51,    52,    53,    41,    51,    41,
      51,    44,     7,    21,    22,    23,    24,    25,    42,    27,
      28,    29,    30,    26,    51,    90,    34,    91,    28,    37,
      38,    39,    93,    41,     3,     4,     5,     6,    32,     8,
       9,    58,    10,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    -1,    41,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    51,    52,     3,     4,     5,     6,    -1,     8,
       9,    16,    17,    18,    19,    20,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    37,    38,    39,
      -1,    41,    -1,    -1,    -1,    40,    -1,    -1,    37,    38,
      39,    51,    41,    40,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    32,    33,    69,    70,    90,
      91,    92,    35,     3,     3,    31,    71,    72,    77,     0,
      32,    33,    69,    92,     3,     4,     5,     6,    41,    55,
      43,    41,    50,    51,    40,    35,     3,    43,     3,     8,
       9,    37,    38,    39,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,     5,    42,    72,
       7,    52,    65,    73,    55,     5,    43,    58,    58,    16,
      17,    18,    19,    20,    40,    67,     8,     9,    58,    45,
      46,    47,    37,    38,    10,    11,    48,    49,    12,    13,
      14,    15,    42,    50,    44,    52,    80,     7,    52,    73,
      74,    75,    76,    44,     5,    65,    58,    58,    58,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    64,     3,
      66,    43,    25,    27,    30,    34,    51,    53,    68,    69,
      70,    78,    80,    82,    83,    85,    87,    89,    74,    50,
      53,    50,    53,    50,    53,    43,    44,    43,     5,    41,
      41,    51,    65,    41,    51,    53,    78,    53,    73,     7,
      52,     5,    43,     5,    44,    65,    65,    51,     7,    74,
      44,     5,    44,    42,    42,    42,    53,    44,    43,    78,
      25,    28,    29,    30,    34,    52,    69,    79,    83,    84,
      86,    87,    88,    51,     5,    26,    41,    51,    51,    51,
      65,    41,    53,    79,    81,    44,    78,    65,    51,     7,
      53,    79,    42,    42,    79,    51,    26,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    70,    70,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    73,    74,    74,    75,    75,    76,
      76,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    88,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     4,     7,     1,
       4,     7,     1,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     5,     5,     5,     1,     1,     3,     1,     3,     3,
       5,     1,     4,     7,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     1,     1,     1,     1,     5,     2,     3,
       1,     2,     1,     2,     1,     2,     2,     3,     5,     7,
       5,     7,     5,     2,     2,     2,     3,     2,     3,     2,
       1,     1,     2,     3,     3,     4,     2,     5
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
#line 59 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("num",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			//printf("const");
			}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("int",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 66 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("char",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 69 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("float",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr);
			      }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-3].text));
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-3].text),(yyvsp[-1].text));
					}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-6].text));
		        		      			  fprintf(fptr,"%p %s[%d][%d] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-6].text),(yyvsp[-4].text),(yyvsp[-1].text));
					
					}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("id",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-3].text));
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-3].text),(yyvsp[-1].text));
		
	}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 95 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-6].text));
		        		      			  fprintf(fptr,"%p %s[%s][%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-6].text),(yyvsp[-4].text),(yyvsp[-1].text));
	}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* p = create_node("+",(yyvsp[-1].node_ptr),o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,(yyvsp[-1].node_ptr),o);
					(yyval.node_ptr) = create_node("=",(yyvsp[-1].node_ptr),p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),p); }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* p = create_node("+",(yyvsp[-1].node_ptr),o,NULL);
					fprintf(fptr,"%p - %p %p -1\n",p,(yyvsp[-1].node_ptr),o);
					(yyval.node_ptr) = create_node("=",(yyvsp[-1].node_ptr),p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),p); }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 118 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 119 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* p = create_node("+",(yyvsp[0].node_ptr),o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,(yyvsp[0].node_ptr),o);
					(yyval.node_ptr) = create_node("=",(yyvsp[0].node_ptr),p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[0].node_ptr),p);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 125 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* p = create_node("-",(yyvsp[0].node_ptr),o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,(yyvsp[0].node_ptr),o);
					(yyval.node_ptr) = create_node("=",(yyvsp[0].node_ptr),p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[0].node_ptr),p); }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("un_exp",(yyvsp[-1].text),(yyvsp[0].node_ptr),NULL);
					fprintf(fptr,"%p un_exp %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].text),(yyvsp[0].node_ptr));}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 136 "gram.y" /* yacc.c:1646  */
    { (yyval.text) = create_leaf("+","");
		fprintf(fptr,"%p + -1 -1 -1\n",(yyval.text));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 138 "gram.y" /* yacc.c:1646  */
    { (yyval.text) = create_leaf("-","");
		fprintf(fptr,"%p - -1 -1 -1\n",(yyval.text)); }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 140 "gram.y" /* yacc.c:1646  */
    { (yyval.text) = create_leaf("!","");
		fprintf(fptr,"%p ! -1 -1 -1\n",(yyval.text));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);
			    }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_node("*",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p * %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
						    //printf("mul");
							  }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 151 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("/",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p / %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 154 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("%",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p mod %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 159 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 160 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("+",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p + %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 162 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("-",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p - %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 167 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 168 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("<",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p < %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 170 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node(">",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p > %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 172 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("<=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p <= %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 174 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node(">=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p >= %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 179 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 180 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("==",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p == %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("!=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p != %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 187 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 188 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("&&",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p && %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("||",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p || %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 201 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
	
	}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 208 "gram.y" /* yacc.c:1646  */
    {(yyval.text)=1;}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 209 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='*';}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 210 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='/';}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 211 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='%';}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 212 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='+';}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 213 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='-';}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 217 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 218 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 223 "gram.y" /* yacc.c:1646  */
    { 
						   (yyval.node_ptr) = create_node("declaration",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),NULL);
							
						   fprintf(fptr,"%p declaration %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr));
						   //printf("%p declaration %p %p -1",$$,$1,$2); 
						   }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 232 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("char",(yyvsp[0].text));
		  fprintf(fptr,"%p char -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 234 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("int",(yyvsp[0].text));
		  fprintf(fptr,"%p int -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 236 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("float",(yyvsp[0].text));
		  fprintf(fptr,"%p float -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 238 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("double",(yyvsp[0].text));
		  fprintf(fptr,"%p double -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 245 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 246 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("list",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						   fprintf(fptr,"%p list %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
						   //printf("%p list %p %p -1\n",$$,$1,$3);
						    }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 253 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 254 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
				       fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); 
				      }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "gram.y" /* yacc.c:1646  */
    {	node* r =  create_leaf("string",(yyvsp[0].text));
			fprintf(fptr,"%p %s -1 -1 -1\n",r,(yyvsp[0].text));
		  (yyval.node_ptr) = create_node("=",(yyvsp[-2].node_ptr),(yyvsp[0].text),NULL);
	          fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),r);
		}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 263 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr));
						}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 267 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr)); }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 270 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr)); }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 275 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 279 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 280 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("init_list",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p init_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 285 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) =  create_leaf("string",(yyvsp[0].text));
						fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text)); }
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 287 "gram.y" /* yacc.c:1646  */
    { node* r =  create_leaf("string",(yyvsp[0].text));
						fprintf(fptr,"%p %s -1 -1 -1\n",r,(yyvsp[0].text));
						(yyval.node_ptr) = create_node("string_list",(yyvsp[-2].node_ptr),r,NULL);
	          		             fprintf(fptr,"%p string_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),r); }
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 294 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 295 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("diff_list",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          		             fprintf(fptr,"%p diff_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr)); }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 301 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("num",(yyvsp[0].text));
		      	//printf("%p id -1 -1 -1\n",$$);
			fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 304 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-3].text));
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-3].text),(yyvsp[-1].text)); }
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 306 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-6].text));
		        		      			  fprintf(fptr,"%p %s[%s][%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-6].text),(yyvsp[-4].text),(yyvsp[-1].text)); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 314 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 315 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 316 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 317 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 318 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 319 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 324 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 325 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 326 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 327 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 328 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 329 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 336 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 340 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 341 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("while_list",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p while_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 346 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 347 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("stmt_list",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p stmt_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 353 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 358 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 362 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p if %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 365 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
	          		             fprintf(fptr,"%p if %p %p %p\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 370 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p if %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 373 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
	          		             fprintf(fptr,"%p if %p %p %p\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 378 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("while",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             			  fprintf(fptr,"%p while %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 383 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("continue","");
		  fprintf(fptr,"%p continue -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 386 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("break","");
		  fprintf(fptr,"%p break -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 389 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("return","");
		  fprintf(fptr,"%p return -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 392 "gram.y" /* yacc.c:1646  */
    {  (yyvsp[-2].node_ptr) = create_leaf("return","ret");
						fprintf(fptr,"%p return -1 -1 -1 \n",(yyvsp[-2].node_ptr));
						(yyval.node_ptr) = create_node("jump",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          		             	fprintf(fptr,"%p jump %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr)); }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 399 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("return",NULL);
		  fprintf(fptr,"%p return -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 402 "gram.y" /* yacc.c:1646  */
    {  (yyvsp[-2].node_ptr) = create_leaf("return","");
						fprintf(fptr,"%p return -1 -1 -1 \n",(yyvsp[-2].node_ptr));
						(yyval.node_ptr) = create_node("jump1",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          		             	fprintf(fptr,"%p jump1 %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr)); }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 409 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("PROGRAM",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             	fprintf(fptr,"%p PROGRAM %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); YYACCEPT;}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 411 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr)=(yyvsp[0].node_ptr);YYACCEPT;}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 415 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); //fprintf(fptr,"only decl\n");
				}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 417 "gram.y" /* yacc.c:1646  */
    { (yyvsp[-1].node_ptr) = create_leaf("#include","");
				fprintf(fptr,"%p #include -1 -1 -1 \n",(yyvsp[-1].node_ptr));
				(yyvsp[0].node_ptr) = create_leaf("header","");
				fprintf(fptr,"%p header -1 -1 -1 \n",(yyvsp[0].node_ptr));
				(yyval.node_ptr) = create_node("ext",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		fprintf(fptr,"%p ext %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); 
				//fprintf(fptr,"inclunhead\n");
				}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 425 "gram.y" /* yacc.c:1646  */
    { (yyvsp[-1].node_ptr) = create_leaf("#include","");
				fprintf(fptr,"%p #include1 -1 -1 -1 \n",(yyvsp[-1].node_ptr));
				(yyvsp[0].node_ptr) = create_leaf("header","");
				fprintf(fptr,"%p header1 -1 -1 -1 \n",(yyvsp[0].node_ptr));
				(yyval.node_ptr) = create_node("ext",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr));
	          		fprintf(fptr,"%p ext %p %p %p\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr));
				//fprintf(fptr,"ext inclunhead\n");
				 }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 433 "gram.y" /* yacc.c:1646  */
    { node* r = create_leaf("id",(yyvsp[-1].text));
				fprintf(fptr,"%p %s -1 -1 -1 \n",r,(yyvsp[-1].text));
				
				(yyval.node_ptr) = create_node("#def",r,(yyvsp[0].node_ptr),NULL);
	          		fprintf(fptr,"%p #def %p %p -1\n",(yyval.node_ptr),r,(yyvsp[0].node_ptr));
				//fprintf(fptr,"def only\n");
				 }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 440 "gram.y" /* yacc.c:1646  */
    { node* r = create_leaf("id",(yyvsp[-1].text));
				fprintf(fptr,"%p %s -1 -1 -1 \n",r,(yyvsp[-1].text));
				 node* r1= create_node("#def",r,(yyvsp[0].node_ptr),NULL);
	          		fprintf(fptr,"%p #def %p %p -1\n",r1,r,(yyvsp[0].node_ptr));
				(yyval.node_ptr) = create_node("ext",(yyvsp[-3].node_ptr),r1,NULL);
	          		fprintf(fptr,"%p ext %p %p -1\n",(yyval.node_ptr),(yyvsp[-3].node_ptr),r1);
				//fprintf(fptr,"ext def\n");
				}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 448 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("ext",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             	fprintf(fptr,"%p ext %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr));
						//fprintf(fptr,"ext decl\n");
						}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 455 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("main()",(yyvsp[-4].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             	fprintf(fptr,"%p main() %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[0].node_ptr));}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2316 "y.tab.c" /* yacc.c:1646  */
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
#line 460 "gram.y" /* yacc.c:1906  */


node* create_leaf (char * token, char* num){
	//printf("size of %d",sizeof(node));
	
	node* temp = (node*)malloc(sizeof(node));
	//printf("create_leaf %p\n",temp);
	/*node* par = (node*)malloc(sizeof(node));
	strcpy(par->token,token);
	par->c = temp;
	par->s = NULL;*/
	strcpy(temp->token,num);
	temp->num = num;
	temp->c1 = NULL;
	temp->c2 = NULL;
	temp->c3 = NULL;
	/*printf("temp leaf root: %p ",temp);
	printf("temp child: %p ",temp->c);
	printf("temp sib:%p ",temp->s);
	printf("par leaf root: %p ",par);
	printf("par child: %p ",par->c);
	printf("par sib:%p ",par->s);*/
	//return par;
	return temp;
}

node* create_node (char* token, node* c1, node* c2, node* c3){

	node* temp = (node*)malloc(sizeof(node));
	//printf("create_node %p\n",temp);
	strcpy(temp->token,token);
	temp->num = NULL;
	/*temp->c = c;
	temp->s = NULL;
	c->s = s;
	printf("update of %p's sib to %p ",c,c->s);
	printf("root: %p ",temp);
	printf("child: %p ",temp->c);
	printf("sib:%p ",temp->s);*/
	temp->c1 = c1;
	temp->c2 = c2;
	temp->c3 = c3;
	return temp;

}

int yyerror()
{
	
	printf("\nNot Valid");
	exit(0);

	return 1;
}
						     
int main()
{
	fptr = fopen("sample.txt", "w");
	if(!yyparse()){
		printf("\nValid\n");
}
	
	return 1;
}

