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
#line 32 "grammar.y" /* yacc.c:1909  */

typedef struct Num
{
	float fVal;
	int idVal;
	int type;
}NUM;

#line 53 "y.tab.h" /* yacc.c:1909  */

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
#line 39 "grammar.y" /* yacc.c:1909  */

	NUM nVal;
	char sVal[64];
	char cVal;

#line 143 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
