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
#define YYLAST   470

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
       2,     2,     2,    44,     2,     2,     2,    50,     2,     2,
      37,    38,    48,    42,    53,    43,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      51,    45,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
       0,    61,    61,    65,    68,    71,    74,    76,    79,    89,
      93,    97,   103,   104,   113,   124,   125,   134,   142,   147,
     149,   151,   156,   158,   162,   165,   170,   171,   173,   178,
     179,   181,   183,   185,   190,   191,   193,   198,   199,   204,
     205,   211,   219,   220,   221,   222,   223,   224,   228,   229,
     230,   234,   243,   245,   247,   249,   256,   257,   264,   265,
     268,   274,   278,   281,   286,   290,   291,   296,   298,   305,
     306,   312,   315,   317,   325,   326,   327,   328,   329,   330,
     331,   335,   336,   337,   338,   339,   340,   341,   346,   347,
     351,   352,   357,   358,   363,   364,   368,   369,   373,   376,
     381,   384,   389,   394,   397,   400,   403,   410,   413,   420,
     422,   426,   428,   436,   444,   451,   459,   466
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
  "T_MAIN", "T_INCLUDE", "T_DEFINE", "T_PRINT", "T_HEADER", "IFX", "'('",
  "')'", "';'", "'{'", "'}'", "'+'", "'-'", "'!'", "'='", "'['", "']'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "','", "$accept",
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
     285,   286,   287,   288,   289,   290,   291,    40,    41,    59,
     123,   125,    43,    45,    33,    61,    91,    93,    42,    47,
      37,    60,    62,    44
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
     242,  -130,  -130,  -130,  -130,    -6,    29,  -130,    15,    64,
     284,  -130,  -130,    10,    36,    38,    23,  -130,    43,  -130,
      58,    81,  -130,  -130,    86,  -130,  -130,  -130,   388,  -130,
     110,    71,  -130,   138,    17,  -130,    10,   141,    80,   396,
     396,  -130,  -130,  -130,  -130,   200,   126,  -130,   396,    63,
     105,     1,   148,   137,   147,  -130,    33,   106,   124,  -130,
    -130,    30,   147,  -130,  -130,   122,   167,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,   396,  -130,  -130,  -130,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,  -130,   175,   133,   246,  -130,  -130,   396,  -130,
     -22,    39,    49,   134,   135,   147,  -130,  -130,  -130,    63,
      63,   105,   105,   105,   105,     1,     1,   148,   137,   142,
    -130,   176,   156,   157,   338,   160,  -130,  -130,    48,  -130,
     138,  -130,  -130,   288,  -130,  -130,  -130,  -130,    53,  -130,
     396,  -130,   191,  -130,   171,   195,   390,   209,   168,   396,
     396,  -130,    -9,   214,  -130,  -130,  -130,  -130,  -130,  -130,
     396,   177,   217,   183,  -130,    25,    40,  -130,   185,    69,
    -130,   188,   190,   330,   204,   198,  -130,   425,   234,   216,
     203,   218,   219,   380,   222,   115,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,   206,   330,   396,  -130,  -130,  -130,
      12,   249,  -130,  -130,   162,  -130,  -130,    41,  -130,   223,
    -130,  -130,   204,   221,   236,  -130,   204,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    52,    53,    54,    55,     0,     0,   111,     0,     0,
       0,   110,   112,     0,    71,     0,     0,    56,    58,     1,
       0,     0,   116,   109,     2,     4,     3,     5,     0,   114,
       0,     0,    51,     0,     0,   113,     0,     0,     2,     0,
       0,    19,    20,    21,    12,     0,    15,    22,     0,    26,
      29,    34,    37,    39,    49,    48,     0,     0,     0,    57,
      60,     0,    64,    59,   115,     0,     0,    16,    17,    43,
      44,    45,    46,    47,    42,     0,    13,    14,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,    72,     0,   117,    67,     0,    65,
       0,     0,     0,     7,     0,    41,    23,    24,    25,    27,
      28,    32,    33,    30,    31,    35,    36,    38,    40,     9,
      50,     0,     0,     0,     0,     0,    94,    88,     0,    79,
       0,    92,    74,     0,    75,    76,    77,    78,     0,    62,
       0,    61,     0,    63,     0,     0,     7,     0,     0,     0,
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
    -130,    32,  -130,  -130,   -31,  -130,    92,    44,    88,   182,
     186,   -33,   189,  -130,   250,     0,   104,  -130,   248,   -32,
     -91,  -130,  -130,  -130,  -129,  -127,   226,  -130,  -130,   -92,
    -130,  -130,  -130,   -90,  -130,  -130,  -130,  -130,   269
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
       7,    62,    63,   134,   156,   136,    91,   138,    67,    68,
      22,    84,    85,    24,    25,    26,    27,    78,    14,   139,
      24,    25,    26,    27,    60,    39,    40,    91,    62,    12,
     167,   140,    13,    24,    25,    26,    27,    97,    39,    40,
      91,   134,   105,   136,   179,    29,    15,    28,   106,   107,
     108,   208,    86,    87,    28,    91,    91,    61,   203,    41,
      42,    43,    32,   173,    19,    62,   206,    28,    64,   169,
      98,    92,    41,    42,    43,    31,    33,   211,   174,   212,
     141,   134,    30,   136,    36,   214,    93,   154,    34,   217,
     143,   152,   142,    35,   157,   129,    -9,    -9,    -9,    -9,
      -9,    93,   144,   134,     8,   136,   140,    62,   158,    58,
     176,    79,    80,    81,     8,    57,   165,   166,    38,    25,
      26,    27,   140,    39,    40,    -9,    66,    62,   111,   112,
     113,   114,    37,   129,    76,    77,     1,     2,     3,     4,
     180,    14,   123,   181,   182,   183,    65,    82,    83,   184,
     200,    90,    28,    94,   126,   185,   202,    41,    42,    43,
      88,    89,    91,   207,    95,    38,    25,    26,    27,   103,
      39,    40,   104,   129,   109,   110,   115,   116,   119,   121,
     145,   148,   146,     1,     2,     3,     4,   180,   147,   123,
     181,   182,   183,   149,   150,   129,   184,   153,   159,    28,
     161,   126,   185,   210,    41,    42,    43,    38,    25,    26,
      27,   160,    39,    40,   163,   164,    69,    70,    71,    72,
      73,   168,   171,   175,   170,     1,     2,     3,     4,   180,
     172,   123,   181,   182,   183,   177,   178,   193,   184,   194,
     196,    28,   195,   126,   185,    74,    41,    42,    43,    38,
      25,    26,    27,   205,    39,    40,   209,   197,   198,   201,
     215,   213,   216,     1,     2,     3,     4,     1,     2,     3,
       4,   122,   117,   123,     5,     6,   124,   118,    56,    23,
     125,    59,   120,    28,    96,   126,    95,   127,    41,    42,
      43,    38,    25,    26,    27,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     1,
       2,     3,     4,   122,     0,   123,    20,    21,   124,     0,
       0,     0,   125,     0,     0,    28,     0,   126,    95,   155,
      41,    42,    43,    38,    25,    26,    27,     0,    39,    40,
       0,    24,    25,    26,    27,     0,    39,    40,     0,     0,
       0,     1,     2,     3,     4,   122,     0,   123,     0,     0,
     124,     0,     0,     0,   125,     0,     0,    28,     0,   126,
      95,     0,    41,    42,    43,    28,     0,   151,     0,     0,
      41,    42,    43,    24,    25,    26,    27,     0,    39,    40,
       0,    38,    25,    26,    27,     0,    39,    40,     0,    24,
      25,    26,    27,     0,    39,    40,   -10,   -10,   -10,   -10,
     -10,     0,     0,     0,     0,     0,     0,    28,     0,   199,
       0,     0,    41,    42,    43,    28,     0,     0,     0,     0,
      41,    42,    43,    28,     0,   -10,   162,     0,    41,    42,
      43,   -11,   -11,   -11,   -11,   -11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -11
};

static const yytype_int16 yycheck[] =
{
       0,    34,    34,    95,   133,    95,    15,    98,    39,    40,
      10,    10,    11,     3,     4,     5,     6,    48,     3,    41,
       3,     4,     5,     6,     7,     8,     9,    15,    61,    35,
      39,    53,     3,     3,     4,     5,     6,     7,     8,     9,
      15,   133,    75,   133,   173,    13,    31,    37,    79,    80,
      81,    39,    51,    52,    37,    15,    15,    40,   185,    42,
      43,    44,    39,    38,     0,    98,   195,    37,    36,   160,
      40,    38,    42,    43,    44,    37,    53,   204,    38,    38,
      41,   173,    46,   173,     3,   212,    53,    39,    45,   216,
      41,   124,    53,    35,    41,    95,    16,    17,    18,    19,
      20,    53,    53,   195,     0,   195,    53,   140,   140,    38,
      41,    48,    49,    50,    10,     5,   149,   150,     3,     4,
       5,     6,    53,     8,     9,    45,    46,   160,    84,    85,
      86,    87,    46,   133,     8,     9,    21,    22,    23,    24,
      25,     3,    27,    28,    29,    30,     5,    42,    43,    34,
     183,    14,    37,    47,    39,    40,    41,    42,    43,    44,
      12,    13,    15,   196,    40,     3,     4,     5,     6,    47,
       8,     9,     5,   173,    82,    83,    88,    89,     3,    46,
      46,     5,    47,    21,    22,    23,    24,    25,    46,    27,
      28,    29,    30,    37,    37,   195,    34,    37,     7,    37,
       5,    39,    40,    41,    42,    43,    44,     3,     4,     5,
       6,    40,     8,     9,     5,    47,    16,    17,    18,    19,
      20,     7,     5,    38,    47,    21,    22,    23,    24,    25,
      47,    27,    28,    29,    30,    47,    46,    39,    34,     5,
      37,    37,    26,    39,    40,    45,    42,    43,    44,     3,
       4,     5,     6,    47,     8,     9,     7,    39,    39,    37,
      39,    38,    26,    21,    22,    23,    24,    21,    22,    23,
      24,    25,    90,    27,    32,    33,    30,    91,    28,    10,
      34,    33,    93,    37,    58,    39,    40,    41,    42,    43,
      44,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    21,
      22,    23,    24,    25,    -1,    27,    32,    33,    30,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,     3,     4,     5,     6,    -1,     8,     9,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,
      40,    -1,    42,    43,    44,    37,    -1,    39,    -1,    -1,
      42,    43,    44,     3,     4,     5,     6,    -1,     8,     9,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,     3,
       4,     5,     6,    -1,     8,     9,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    43,    44,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,    37,    -1,    45,    46,    -1,    42,    43,
      44,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    32,    33,    69,    70,    90,
      91,    92,    35,     3,     3,    31,    71,    72,    77,     0,
      32,    33,    69,    92,     3,     4,     5,     6,    37,    55,
      46,    37,    39,    53,    45,    35,     3,    46,     3,     8,
       9,    42,    43,    44,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,     5,    38,    72,
       7,    40,    65,    73,    55,     5,    46,    58,    58,    16,
      17,    18,    19,    20,    45,    67,     8,     9,    58,    48,
      49,    50,    42,    43,    10,    11,    51,    52,    12,    13,
      14,    15,    38,    53,    47,    40,    80,     7,    40,    73,
      74,    75,    76,    47,     5,    65,    58,    58,    58,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    64,     3,
      66,    46,    25,    27,    30,    34,    39,    41,    68,    69,
      70,    78,    80,    82,    83,    85,    87,    89,    74,    41,
      53,    41,    53,    41,    53,    46,    47,    46,     5,    37,
      37,    39,    65,    37,    39,    41,    78,    41,    73,     7,
      40,     5,    46,     5,    47,    65,    65,    39,     7,    74,
      47,     5,    47,    38,    38,    38,    41,    47,    46,    78,
      25,    28,    29,    30,    34,    40,    69,    79,    83,    84,
      86,    87,    88,    39,     5,    26,    37,    39,    39,    39,
      65,    37,    41,    79,    81,    47,    78,    65,    39,     7,
      41,    79,    38,    38,    79,    39,    26,    79
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
#line 61 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("num",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			//printf("const");
			}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("int",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 68 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("char",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("float",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 74 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr);
			      }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-3].text));
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-3].text),(yyvsp[-1].text));
					}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 79 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-6].text));
		        		      			  fprintf(fptr,"%p %s[%d][%d] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-6].text),(yyvsp[-4].text),(yyvsp[-1].text));
					
					}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 89 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("id",(yyvsp[0].text));
		        fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));
			}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-3].text));
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-3].text),(yyvsp[-1].text));
		
	}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-6].text));
		        		      			  fprintf(fptr,"%p %s[%s][%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-6].text),(yyvsp[-4].text),(yyvsp[-1].text));
	}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 103 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 104 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* new = create_leaf("var",(yyvsp[-1].node_ptr));
					fprintf(fptr,"%p %s -1 -1 -1\n",new,(yyvsp[-1].node_ptr));
					node* p = create_node("+",(yyvsp[-1].node_ptr),o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,(yyvsp[-1].node_ptr),o);
					(yyval.node_ptr) = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),new,p); }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 113 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* new = create_leaf("var",(yyvsp[-1].node_ptr));
					fprintf(fptr,"%p %s -1 -1 -1\n",new,(yyvsp[-1].node_ptr));
					node* p = create_node("+",(yyvsp[-1].node_ptr),o,NULL);
					fprintf(fptr,"%p - %p %p -1\n",p,(yyvsp[-1].node_ptr),o);
					(yyval.node_ptr) = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),new,p); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 124 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 125 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					
					node* new = create_leaf("var",(yyvsp[0].node_ptr));
					fprintf(fptr,"%p %s -1 -1 -1\n",new,(yyvsp[0].node_ptr));
					node* p = create_node("+",(yyvsp[0].node_ptr),o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,(yyvsp[0].node_ptr),o);
					(yyval.node_ptr) = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),new,p);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 134 "gram.y" /* yacc.c:1646  */
    { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* new = create_leaf("var",(yyvsp[0].node_ptr));
					fprintf(fptr,"%p %s -1 -1 -1\n",new,(yyvsp[0].node_ptr));
					node* p = create_node("-",(yyvsp[0].node_ptr),o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,(yyvsp[0].node_ptr),o);
					(yyval.node_ptr) = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),new,p); }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("un_exp",(yyvsp[-1].text),(yyvsp[0].node_ptr),NULL);
					fprintf(fptr,"%p un_exp %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].text),(yyvsp[0].node_ptr));}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 147 "gram.y" /* yacc.c:1646  */
    { (yyval.text) = create_leaf("+","");
		fprintf(fptr,"%p + -1 -1 -1\n",(yyval.text));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 149 "gram.y" /* yacc.c:1646  */
    { (yyval.text) = create_leaf("-","");
		fprintf(fptr,"%p - -1 -1 -1\n",(yyval.text)); }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 151 "gram.y" /* yacc.c:1646  */
    { (yyval.text) = create_leaf("!","");
		fprintf(fptr,"%p ! -1 -1 -1\n",(yyval.text));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 156 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);
			    }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_node("*",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p * %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
						    //printf("mul");
							  }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 162 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("/",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p / %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 165 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("%",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p mod %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 170 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 171 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("+",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p + %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 173 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("-",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p - %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 178 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 179 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("<",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p < %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 181 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node(">",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p > %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 183 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("<=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p <= %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 185 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node(">=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p >= %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 190 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 191 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("==",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p == %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 193 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("!=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p != %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 198 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 199 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("&&",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p && %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 204 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 205 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("||",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p || %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 212 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						    fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
	
	}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 219 "gram.y" /* yacc.c:1646  */
    {(yyval.text)=1;}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 220 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='*';}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 221 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='/';}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 222 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='%';}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 223 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='+';}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 224 "gram.y" /* yacc.c:1646  */
    {(yyval.text)='-';}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 228 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 229 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 234 "gram.y" /* yacc.c:1646  */
    { 
						   (yyval.node_ptr) = create_node("declaration",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),NULL);
							
						   fprintf(fptr,"%p declaration %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr));
						   //printf("%p declaration %p %p -1",$$,$1,$2); 
						   }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 243 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("char",(yyvsp[0].text));
		  fprintf(fptr,"%p char -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 245 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("int",(yyvsp[0].text));
		  fprintf(fptr,"%p int -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 247 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("float",(yyvsp[0].text));
		  fprintf(fptr,"%p float -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 249 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("double",(yyvsp[0].text));
		  fprintf(fptr,"%p double -1 -1 -1 \n",(yyval.node_ptr)); }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 256 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 257 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("list",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
						   fprintf(fptr,"%p list %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
						   //printf("%p list %p %p -1\n",$$,$1,$3);
						    }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 265 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
				       fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); 
				      }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 269 "gram.y" /* yacc.c:1646  */
    {	node* r =  create_leaf("string",(yyvsp[0].node_ptr));
			fprintf(fptr,"%p %s -1 -1 -1\n",r,(yyvsp[0].node_ptr));
		  (yyval.node_ptr) = create_node("=",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),r);
		}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 274 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr));
						}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 278 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr)); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 281 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("=",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr)); }
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 286 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 290 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 291 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("init_list",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p init_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 296 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) =  create_leaf("string",(yyvsp[0].node_ptr));
						fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].node_ptr)); }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 298 "gram.y" /* yacc.c:1646  */
    { node* r =  create_leaf("string",(yyvsp[0].node_ptr));
						fprintf(fptr,"%p %s -1 -1 -1\n",r,(yyvsp[0].node_ptr));
						(yyval.node_ptr) = create_node("string_list",(yyvsp[-2].node_ptr),r,NULL);
	          		             fprintf(fptr,"%p string_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),r); }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 305 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 306 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("diff_list",(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          		             fprintf(fptr,"%p diff_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-1].node_ptr)); }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 312 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("num",(yyvsp[0].text));
		      	//printf("%p id -1 -1 -1\n",$$);
			fprintf(fptr,"%p %s -1 -1 -1\n",(yyval.node_ptr),(yyvsp[0].text));}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 315 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-3].text));
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-3].text),(yyvsp[-1].text)); }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 317 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_leaf("1D",(yyvsp[-6].text));
		        		      			  fprintf(fptr,"%p %s[%s][%s] -1 -1 -1\n",(yyval.node_ptr),(yyvsp[-6].text),(yyvsp[-4].text),(yyvsp[-1].text)); }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 325 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 326 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 327 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 328 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 329 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 330 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 335 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 336 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 337 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 338 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 339 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 340 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 347 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 351 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 352 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("while_list",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p while_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 357 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 358 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("stmt_list",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p stmt_list %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 364 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 369 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[-1].node_ptr); }
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 373 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p if %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 376 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
	          		             fprintf(fptr,"%p if %p %p %p\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 381 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             fprintf(fptr,"%p if %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 384 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("if",(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr));
	          		             fprintf(fptr,"%p if %p %p %p\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 389 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("while",(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             			  fprintf(fptr,"%p while %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[0].node_ptr)); }
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 394 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("continue","");
		  fprintf(fptr,"%p continue -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 397 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("break","");
		  fprintf(fptr,"%p break -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 400 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("return","");
		  fprintf(fptr,"%p return -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 403 "gram.y" /* yacc.c:1646  */
    {  (yyvsp[-2].node_ptr) = create_leaf("return","ret");
						fprintf(fptr,"%p return -1 -1 -1 \n",(yyvsp[-2].node_ptr));
						(yyval.node_ptr) = create_node("jump",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          		             	fprintf(fptr,"%p jump %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr)); }
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 410 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr) = create_leaf("return",NULL);
		  fprintf(fptr,"%p return -1 -1 -1 \n",(yyval.node_ptr)); }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 413 "gram.y" /* yacc.c:1646  */
    {  (yyvsp[-2].node_ptr) = create_leaf("return","");
						fprintf(fptr,"%p return -1 -1 -1 \n",(yyvsp[-2].node_ptr));
						(yyval.node_ptr) = create_node("jump1",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),NULL);
	          		             	fprintf(fptr,"%p jump1 %p %p -1\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr)); }
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 420 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("PROGRAM",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             	fprintf(fptr,"%p PROGRAM %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); YYACCEPT;}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 422 "gram.y" /* yacc.c:1646  */
    {(yyval.node_ptr)=(yyvsp[0].node_ptr);YYACCEPT;}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 426 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = (yyvsp[0].node_ptr); //fprintf(fptr,"only decl\n");
				}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 428 "gram.y" /* yacc.c:1646  */
    { (yyvsp[-1].node_ptr) = create_leaf("#include","");
				fprintf(fptr,"%p #include -1 -1 -1 \n",(yyvsp[-1].node_ptr));
				(yyvsp[0].node_ptr) = create_leaf("header","");
				fprintf(fptr,"%p header -1 -1 -1 \n",(yyvsp[0].node_ptr));
				(yyval.node_ptr) = create_node("ext",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		fprintf(fptr,"%p ext %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr)); 
				//fprintf(fptr,"inclunhead\n");
				}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 436 "gram.y" /* yacc.c:1646  */
    { (yyvsp[-1].node_ptr) = create_leaf("#include","");
				fprintf(fptr,"%p #include1 -1 -1 -1 \n",(yyvsp[-1].node_ptr));
				(yyvsp[0].node_ptr) = create_leaf("header","");
				fprintf(fptr,"%p header1 -1 -1 -1 \n",(yyvsp[0].node_ptr));
				(yyval.node_ptr) = create_node("ext",(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr));
	          		fprintf(fptr,"%p ext %p %p %p\n",(yyval.node_ptr),(yyvsp[-2].node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr));
				//fprintf(fptr,"ext inclunhead\n");
				 }
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 444 "gram.y" /* yacc.c:1646  */
    { node* r = create_leaf("id",(yyvsp[-1].text));
				fprintf(fptr,"%p %s -1 -1 -1 \n",r,(yyvsp[-1].text));
				
				(yyval.node_ptr) = create_node("#def",r,(yyvsp[0].node_ptr),NULL);
	          		fprintf(fptr,"%p #def %p %p -1\n",(yyval.node_ptr),r,(yyvsp[0].node_ptr));
				//fprintf(fptr,"def only\n");
				 }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "gram.y" /* yacc.c:1646  */
    { node* r = create_leaf("id",(yyvsp[-1].text));
				fprintf(fptr,"%p %s -1 -1 -1 \n",r,(yyvsp[-1].text));
				 node* r1= create_node("#def",r,(yyvsp[0].node_ptr),NULL);
	          		fprintf(fptr,"%p #def %p %p -1\n",r1,r,(yyvsp[0].node_ptr));
				(yyval.node_ptr) = create_node("ext",(yyvsp[-3].node_ptr),r1,NULL);
	          		fprintf(fptr,"%p ext %p %p -1\n",(yyval.node_ptr),(yyvsp[-3].node_ptr),r1);
				//fprintf(fptr,"ext def\n");
				}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 459 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("ext",(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             	fprintf(fptr,"%p ext %p %p -1\n",(yyval.node_ptr),(yyvsp[-1].node_ptr),(yyvsp[0].node_ptr));
						//fprintf(fptr,"ext decl\n");
						}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 466 "gram.y" /* yacc.c:1646  */
    { (yyval.node_ptr) = create_node("main()",(yyvsp[-4].node_ptr),(yyvsp[0].node_ptr),NULL);
	          		             	fprintf(fptr,"%p main() %p %p -1\n",(yyval.node_ptr),(yyvsp[-4].node_ptr),(yyvsp[0].node_ptr));}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2335 "y.tab.c" /* yacc.c:1646  */
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
#line 471 "gram.y" /* yacc.c:1906  */


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

