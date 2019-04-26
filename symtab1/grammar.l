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
extern int comp_cnt;
extern char type[10];
extern char var[64];
extern int ln;
extern int csym;
extern int max;
int create_symboltable(int par);
int close_symtab(int cur);
void used(int sym,char* var_name,int ln);
%}
%%

"char"					{ECHO;strcpy(type,"char");
 						return(T_CHAR); }
"int"					{ECHO;strcpy(type,"int");
 						return(T_INT); }
"float"					{ECHO;strcpy(type,"float");
 						return(T_FLOAT); }
"double"				{ECHO;strcpy(type,"double");
 						return(T_DOUBLE); }

"if"					{ECHO;
 						return(T_IF); }
"else"					{ECHO;
 						return(T_ELSE); }
"while"					{ECHO;
 						return(T_WHILE); }
"break"					{ECHO;
 						return(T_BREAK); }
"continue"				{ECHO;
 						return(T_CONTINUE); }
"return"				{ECHO;
 						return(T_RETURN); }

"main"					{ECHO;
 						return T_MAIN;}
"#include"				{ECHO;
 						return(T_INCLUDE); }
"#define"				{ECHO;
 						return(T_DEFINE); }
"printf"				{ECHO;
 						return(T_PRINT); }
["]{L}{A}*".h"["]		{ECHO;
 						return(T_HEADER); }
[<]{L}{A}*".h"[>]		{ECHO;
 						return(T_HEADER); }
 						
{L}{A}* 				{ECHO;strcpy(var,yytext);if(strcmp(type,"")==0){used(csym,var,ln);}
 						return T_IDENTIFIER;}
({D}*{E}?)				{ECHO;yylval.nVal.fVal=atoi(yytext);
 						return T_I_CONSTANT;}
{char}					{ECHO;yylval.nVal.fVal=yytext[1];
 						return T_C_CONSTANT;}
{D}*"."{D}+{E}?			{ECHO;yylval.nVal.fVal=(float)atof(yytext);
 						return T_F_CONSTANT;}
{D}+"."{E}?				{ECHO;yylval.nVal.fVal=(float)atof(yytext);
 						return T_F_CONSTANT;}
["][^"]*["]				{ECHO;strcpy(yylval.sVal,yytext);
 						return T_STRING_LITERAL;}
"+="					{ECHO;
 						return T_ADD_ASSIGN; }
"-="					{ECHO;
 						return T_SUB_ASSIGN; }
"*="					{ECHO;
 						return T_MUL_ASSIGN; }
"/="					{ECHO;
 						return T_DIV_ASSIGN; }
"%="					{ECHO;
 						return T_MOD_ASSIGN; }
"++"					{ECHO;
 						return T_INC_OP; }
"--"					{ECHO;
 						return T_DEC_OP; }
"&&"					{ECHO;
 						return T_AND_OP; }
"||"					{ECHO;
 						return T_OR_OP; }
"<="					{ECHO;
 						return T_LE_OP; }
">="					{ECHO;
 						return T_GE_OP; }
"=="					{ECHO;
 						return T_EQ_OP; }
"!="					{ECHO;
 						return T_NE_OP; }

"<"						{ECHO;
 						return '<'; }
">"						{ECHO;
 						return '>'; }
"{"/({D}|['"{])			{ECHO;
 						return '{'; }
"{"						{ECHO;csym=create_symboltable(csym);max=csym;comp_cnt++;
 						return '{'; }
"}"/([,;}])				{ECHO;
 						return '}'; }
"}"						{ECHO;csym= close_symtab(csym);comp_cnt--;
 						return '}'; }
"("						{ECHO;
 						return '('; }
")"						{ECHO;
 						return ')'; }
";"						{ECHO;
 						return ';';}
"+"						{ECHO;yylval.cVal='+';
 						return '+';}
"*"						{ECHO;yylval.cVal='*';
 						return '*';}
"-"						{ECHO;yylval.cVal='-';
 						return '-';}
"!"						{ECHO;yylval.cVal='!';
 						return '!';}
"["						{ECHO;
 						return '[';}
"]"						{ECHO;
 						return ']';}
"/"						{ECHO;yylval.cVal='/';
 						return '/';}
"%"						{ECHO;yylval.cVal='%';
 						return '%';}
["] 					{ECHO;
 						return '"'; }
"="						{ECHO;
 						return '=';}
","						{ECHO;
 						return ',';}
{MLC}					{multi_comment();}
{SLC} 					{}
{WS}+					{ECHO;}
{NL}					{ECHO;ln++;}
.						{yyerror("Incorrect Syntax");}
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
