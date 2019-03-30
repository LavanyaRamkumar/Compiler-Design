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

"char"					{ECHO;strcpy(type,"char");//printf("%s \t\tT_CHAR\n",yytext);
 						return(T_CHAR); }
"int"					{ECHO;strcpy(type,"int");//printf("%s \t\tT_INT\n",yytext);
 						return(T_INT); }
"float"					{ECHO;strcpy(type,"float");//printf("%s \t\tT_FLOAT\n",yytext);
 						return(T_FLOAT); }
"double"				{ECHO;strcpy(type,"double");//printf("%s \t\tT_DOUBLE\n",yytext);
 						return(T_DOUBLE); }

"if"					{ECHO;//printf("%s \t\tT_IF\n",yytext);
 						return(T_IF); }
"else"					{ECHO;//printf("%s \t\tT_ELSE\n",yytext);
 						return(T_ELSE); }
"while"					{ECHO;//printf("%s \t\tT_WHILE\n",yytext);
 						return(T_WHILE); }
"break"					{ECHO;//printf("%s \t\tT_BREAK\n",yytext);
 						return(T_BREAK); }
"continue"				{ECHO;//printf("%s \t\tT_CONTINUE\n",yytext);
 						return(T_CONTINUE); }
"return"				{ECHO;//printf("%s \t\tT_RETURN\n",yytext);
 						return(T_RETURN); }

"main"					{ECHO;//printf("%s \t\tT_MAIN\n",yytext);
 						return T_MAIN;}
"#include"				{ECHO;//printf("%s \t\tT_INCLUDE\n",yytext);
 						return(T_INCLUDE); }
"#define"				{ECHO;//printf("%s \t\tT_DEFINE\n",yytext);
 						return(T_DEFINE); }
"printf"				{ECHO;//printf("%s \t\tT_PRINT\n",yytext);
 						return(T_PRINT); }
["]{L}{A}*".h"["]		{ECHO;//printf("%s \t\tT_HEADER\n",yytext);
 						return(T_HEADER); }
[<]{L}{A}*".h"[>]		{ECHO;//printf("%s \t\tT_HEADER\n",yytext);
 						return(T_HEADER); }
 						
{L}{A}* 				{ECHO;strcpy(var,yytext);if(strcmp(type,"")==0){used(csym,var,ln);}//printf("%d %s",comp_cnt, var);//printf("%s \t\tT_IDENTIFIER\n",yytext);
 						return T_IDENTIFIER;}
({D}*{E}?)				{ECHO;yylval.nVal.fVal=atoi(yytext);//printf("l%d",yylval.nVal.iVal);strcpy(yylval.sVal,yytext);//printf("%s \t\tT_I_CONSTANT\n",yytext);
 						return T_I_CONSTANT;}
{char}					{ECHO;yylval.nVal.fVal=yytext[1];
 						return T_C_CONSTANT;}
{D}*"."{D}+{E}?			{ECHO;yylval.nVal.fVal=(float)atof(yytext);/*strcpy(yylval.sVal,yytext);printf("\"%s\" %f\t\tT_F_CONSTANT\n",yytext,yylval.nVal.fVal);*/
 						return T_F_CONSTANT;}
{D}+"."{E}?				{ECHO;yylval.nVal.fVal=(float)atof(yytext);/*strcpy(yylval.sVal,yytext);printf("%s %f\t\tT_F_CONSTANT\n",yytext,yylval.nVal.fVal);*/
 						return T_F_CONSTANT;}
["][^"]*["]				{ECHO;strcpy(yylval.sVal,yytext);//printf("%s \t\tT_STRING_LITERAL\n",yytext);
 						return T_STRING_LITERAL;}
"+="					{ECHO;//printf("%s \t\tT_ADD_ASSIGN\n",yytext);
 						return T_ADD_ASSIGN; }
"-="					{ECHO;//printf("%s \t\tT_SUB_ASSIGN\n",yytext);
 						return T_SUB_ASSIGN; }
"*="					{ECHO;//printf("%s \t\tT_MUL_ASSIGN\n",yytext);
 						return T_MUL_ASSIGN; }
"/="					{ECHO;//printf("%s \t\t T_DIV_ASSIGN\n",yytext);
 						return T_DIV_ASSIGN; }
"%="					{ECHO;//printf("%s \t\tT_MOD_ASSIGN\n",yytext);
 						return T_MOD_ASSIGN; }
"++"					{ECHO;//printf("%s \t\tT_INC_OP\n",yytext);
 						return T_INC_OP; }
"--"					{ECHO;//printf("%s \t\tT_DEC_OP\n",yytext);
 						return T_DEC_OP; }
"&&"					{ECHO;//printf("%s \t\tT_AND_OP\n",yytext);
 						return T_AND_OP; }
"||"					{ECHO;//printf("%s \t\tT_OR_OP\n",yytext);
 						return T_OR_OP; }
"<="					{ECHO;//printf("%s \t\tT_LE_OP\n",yytext);
 						return T_LE_OP; }
">="					{ECHO;//printf("%s \t\tT_GE_OP\n",yytext);
 						return T_GE_OP; }
"=="					{ECHO;//printf("%s \t\tT_EQ_OP\n",yytext);
 						return T_EQ_OP; }
"!="					{ECHO;//printf("%s \t\tT_NE_OP\n",yytext);
 						return T_NE_OP; }

"<"						{ECHO;//printf("%s \t\t'<'\n",yytext);
 						return '<'; }
">"						{ECHO;//printf("%s \t\t'>'\n",yytext);
 						return '>'; }
"{"/({D}|['"{])			{ECHO;//printf("here");//printf("%s \t\t'{'\n",yytext);
 						return '{'; }
"{"						{ECHO;csym=create_symboltable(csym);max=csym;comp_cnt++;//printf("%s \t\t'{'\n",yytext);
 						return '{'; }
"}"/([,;}])				{ECHO;//printf("%s \t\t'}'\n",yytext);
 						return '}'; }
"}"						{ECHO;csym= close_symtab(csym);comp_cnt--;//printf("%s \t\t'}'\n",yytext);
 						return '}'; }
"("						{ECHO;//printf("%s \t\t'('\n",yytext);
 						return '('; }
")"						{ECHO;//printf("%s \t\t')'\n",yytext);
 						return ')'; }
";"						{ECHO;//printf("%s \t\t';'\n",yytext);
 						return ';';}
"+"						{ECHO;yylval.cVal='+';//printf("%s \t\t'+'\n",yytext);
 						return '+';}
"*"						{ECHO;yylval.cVal='*';//printf("%s \t\t'*'\n",yytext);
 						return '*';}
"-"						{ECHO;yylval.cVal='-';//printf("%s \t\t'-'\n",yytext);
 						return '-';}
"!"						{ECHO;yylval.cVal='!';//printf("%s \t\t'!'\n",yytext);
 						return '!';}
"["						{ECHO;//printf("%s \t\t'['\n",yytext);
 						return '[';}
"]"						{ECHO;//printf("%s \t\t']'\n",yytext);
 						return ']';}
"/"						{ECHO;yylval.cVal='/';//printf("%s \t\t'/'\n",yytext);
 						return '/';}
"%"						{ECHO;yylval.cVal='%';//printf("%s \t\t'%%'\n",yytext);
 						return '%';}
["] 					{ECHO;//printf("%s \t\t'\"'\n",yytext);
 						return '"'; }
"="						{ECHO;//printf("%s \t\t'='\n",yytext);
 						return '=';}
","						{ECHO;//printf("%s \t\t','\n",yytext);
 						return ',';}
{MLC}					{multi_comment();}
{SLC} 					{}
{WS}+					{ECHO;}
{NL}					{ECHO;ln++;/*printf("%d",ln);*/}

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
