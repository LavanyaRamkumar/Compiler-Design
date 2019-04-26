D   [0-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
E   ([Ee][+-]?{D}+)
WS  [ \t\v\f]
NL  [\n]
char [']([^']|[\\]['nt])[']
SLC [/][/][^\n]*
MLC [/][*]
%{
	#include <stdio.h>
	#include "y.tab.h"
	#include<stdlib.h>	
void multi_comment(void);
int yyerror();
extern int csym;
%}
%%

"char"					{return(T_CHAR); }
"int"					{return(T_INT); }
"float"					{return(T_FLOAT); }
"double"				{return(T_DOUBLE); }

"if"					{return(T_IF); }
"else"					{return(T_ELSE); }
"while"					{return(T_WHILE); }
"break"					{return(T_BREAK); }
"continue"				{return(T_CONTINUE); }
"return"				{return(T_RETURN); }

"main"					{return T_MAIN;}
"#include"				{return(T_INCLUDE); }
"#define"				{return(T_DEFINE); }
"printf"				{strcpy(yylval.node.addr,yytext);return(T_PRINT); }
["]{L}{A}*".h"["]		{return(T_HEADER); }
[<]{L}{A}*".h"[>]		{return(T_HEADER); }
 						
{L}{A}* 				{strcpy(yylval.node.addr,yytext);return T_IDENTIFIER;}
({D}*{E}?)				{strcpy(yylval.node.addr,yytext);return T_I_CONSTANT;}
{char}					{strcpy(yylval.node.addr,yytext);return T_C_CONSTANT;}
{D}*"."{D}+{E}?			{strcpy(yylval.node.addr,yytext);return T_F_CONSTANT;}
{D}+"."{E}?				{strcpy(yylval.node.addr,yytext);return T_F_CONSTANT;}
["][^"]*["]				{strcpy(yylval.node.addr,yytext);return T_STRING_LITERAL;}
"+="					{return T_ADD_ASSIGN; }
"-="					{return T_SUB_ASSIGN; }
"*="					{return T_MUL_ASSIGN; }
"/="					{return T_DIV_ASSIGN; }
"%="					{return T_MOD_ASSIGN; }
"++"					{return T_INC_OP; }
"--"					{return T_DEC_OP; }
"&&"					{return T_AND_OP; }
"||"					{return T_OR_OP; }
"<="					{return T_LE_OP; }
">="					{return T_GE_OP; }
"=="					{return T_EQ_OP; }
"!="					{return T_NE_OP; }

"<"						{return '<'; }
">"						{return '>'; }
"{"/({D}|['"{])			{return '{'; }
"{"						{csym++;return '{'; }
"}"/([,;}])				{return '}'; }
"}"						{csym--;return '}'; }
"("						{return '('; }
")"						{return ')'; }
";"						{return ';';}
"+"						{return '+';}
"*"						{return '*';}
"-"						{return '-';}
"!"						{return '!';}
"["						{return '[';}
"]"						{return ']';}
"/"						{return '/';}
"%"						{return '%';}
["] 					{return '"'; }
"="						{return '=';}
","						{return ',';}
{MLC}					{multi_comment();}
{SLC} 					{}
{WS}+					{}
{NL}					{}
.						{}

%%
void multi_comment(void)
{
    int c;

    while ((c = input())!=-1)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;
			
            if (c == '/')
                return;

            if (c == -1)
                break;
        }
}
int yywrap()
{
	return 1;
}
