%{
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

%}

%token T_IDENTIFIER T_C_CONSTANT T_I_CONSTANT T_F_CONSTANT T_STRING_LITERAL 
%token T_INC_OP T_DEC_OP T_LE_OP T_GE_OP T_EQ_OP T_NE_OP
%token T_AND_OP T_OR_OP T_MUL_ASSIGN T_DIV_ASSIGN T_MOD_ASSIGN T_ADD_ASSIGN T_SUB_ASSIGN
 
%token T_CHAR T_INT T_FLOAT T_DOUBLE
%token T_IF T_ELSE T_WHILE T_CONTINUE T_BREAK T_RETURN
%token T_MAIN T_INCLUDE T_DEFINE T_PRINT T_HEADER
%start program

%nonassoc IFX
%nonassoc T_ELSE
%code requires{
typedef struct Num
{
	float fVal;
	int idVal;
	int type;
}NUM;}
%union 	{
	NUM nVal;
	char sVal[64];
	char cVal;
}
%type <nVal> T_I_CONSTANT
%type <nVal> T_F_CONSTANT
%type <nVal> T_C_CONSTANT
%type <nVal> additive_expression multiplicative_expression unary_expression postfix_expression primary_expression expression relational_expression equality_expression logical_and_expression logical_or_expression assignment_expression initializer var_expression declarator init_declarator initializer_list 
%type <cVal> unary_operator '+' '-' '!' assignment_operator '='
%type <sVal> T_STRING_LITERAL
%%

primary_expression
	: T_IDENTIFIER {
					if(($$.idVal=find_variable(csym,var,0,0,0,&($$.fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					$$.type=check_typ(csym,var);
					}
	| T_I_CONSTANT {$$.fVal=$1.fVal;$$.type=1;}
	| T_C_CONSTANT {$$.fVal=$1.fVal;$$.type=3;}
	| T_F_CONSTANT {$$.fVal=$1.fVal;$$.type=2;}//{assign(csym,var,yylval.sVal);}
	| '(' expression ')' {$$.fVal=$2.fVal;$$.type=$2.type;}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' {if(($$.idVal=find_variable(csym,var,1,(int)$3.fVal,0,&($$.fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					$$.type=check_typ(csym,var);
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']' {if(($$.idVal=find_variable(csym,var,2,(int)$3.fVal,(int)$6.fVal,&($$.fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					//printf("find: %f",$$.fVal);
					$$.type=check_typ(csym,var);
					}
	;
	
var_expression
	: T_IDENTIFIER {if(($$.idVal=find_variable(csym,var,0,0,0,&($$.fVal)))==-1){yyerror("Wrong use of variable or undeclared");}$$.type=check_typ(csym,var);}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
		if(($$.idVal=find_variable(csym,var,1,(int)$3.fVal,0,&($$.fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					$$.type=check_typ(csym,var);
	}
	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']'	{
		if(($$.idVal=find_variable(csym,var,2,(int)$3.fVal,(int)$6.fVal,&($$.fVal)))==-1){
						yyerror("Wrong use of variable or undeclared");
					}
					$$.type=check_typ(csym,var);
	}
	;
	
postfix_expression
	: primary_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;$$.type=$1.type;}
	| postfix_expression T_INC_OP {$$.fVal=$1.fVal;$1.fVal+=1;$$.type=$1.type;}
	| postfix_expression T_DEC_OP {$$.fVal=$1.fVal;$1.fVal-=1;$$.type=$1.type;}
	;

unary_expression
	: postfix_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;$$.type=$1.type;}
	| T_INC_OP unary_expression {$2.fVal+=1;$$.fVal=$2.fVal;$$.type=$2.type;}
	| T_DEC_OP unary_expression {$2.fVal-=1;$$.fVal=$2.fVal;$$.type=$2.type;}
	| unary_operator unary_expression {$$.fVal=perform_unary($2.fVal,$1);$$.type=$2.type;}
	;

unary_operator
	: '+' {$$=$1;}
	| '-' {$$=$1;}
	| '!' {$$=$1;}
	;

multiplicative_expression
	: unary_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;$$.type=$1.type;}
	| multiplicative_expression '*' unary_expression {$$.fVal=$1.fVal*$3.fVal;$$.type=($1.type==2||$3.type==2)?2:1;}
	| multiplicative_expression '/' unary_expression {if($3.fVal==0){yyerror("Division By Zero");}$$.fVal=$1.fVal/$3.fVal;$$.type=2;}
	| multiplicative_expression '%' unary_expression {if($1.type==2||$3.type==2||$3.fVal==0){yyerror("Mod Operation not possible on this");}$$.fVal=(int)$1.fVal%(int)$3.fVal;$$.type=1;}
	;

additive_expression
	: multiplicative_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	| additive_expression '+' multiplicative_expression {$$.fVal=$1.fVal+$3.fVal;}
	| additive_expression '-' multiplicative_expression {$$.fVal=$1.fVal-$3.fVal;}
	;

relational_expression
	: additive_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	| relational_expression '<' additive_expression {$$.fVal=($1.fVal<$3.fVal);$$.idVal=$3.idVal;}
	| relational_expression '>' additive_expression {$$.fVal=($1.fVal>$3.fVal);$$.idVal=$3.idVal;}
	| relational_expression T_LE_OP additive_expression {$$.fVal=($1.fVal<=$3.fVal);$$.idVal=$3.idVal;}
	| relational_expression T_GE_OP additive_expression {$$.fVal=($1.fVal>=$3.fVal);$$.idVal=$3.idVal;}
	;

equality_expression
	: relational_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	| equality_expression T_EQ_OP relational_expression {$$.fVal=($1.fVal==$3.fVal);$$.idVal=$3.idVal;}
	| equality_expression T_NE_OP relational_expression {$$.fVal=($1.fVal!=$3.fVal);$$.idVal=$3.idVal;}
	;

logical_and_expression
	: equality_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	| logical_and_expression T_AND_OP equality_expression {$$.fVal=($1.fVal && $3.fVal);$$.idVal=$3.idVal;}
	;

logical_or_expression
	: logical_and_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	| logical_or_expression T_OR_OP logical_and_expression {{$$.fVal=($1.fVal || $3.fVal);$$.idVal=$3.idVal;}}
	;

assignment_expression
	//: logical_or_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	: var_expression assignment_operator logical_or_expression 
		{
		//STOPPED HERE
		if(check_typ_id(csym,$1.idVal)==-1){yyerror("Wrong use of variable or undeclared");}
		}
	;

assignment_operator
	: '=' {$$=1;}
	| T_MUL_ASSIGN {$$='*';}
	| T_DIV_ASSIGN {$$='/';}
	| T_MOD_ASSIGN {$$='%';}
	| T_ADD_ASSIGN {$$='+';}
	| T_SUB_ASSIGN {$$='-';}
	;

expression
	: assignment_expression
	| logical_or_expression
	| expression ',' assignment_expression
	;

declaration
	: type_specifier init_declarator_list ';' {strcpy(type,"");}
	;


init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator {/*add to  symtab-done below*/}
	| declarator '=' initializer {
		int ty=check_typ_id(csym,$1.idVal);
		//printf("val%d",ty);
		if(assign_id(csym,$1.idVal,$3.fVal,1,ty,0,0)==-1){yyerror("Assignment Not Possible");}
		if(check_dim(csym,$1.idVal)!=0){yyerror("Dimensional Error");}
	}
	| declarator '='  T_STRING_LITERAL 
		{	
			if(assign_string(csym,$1.idVal,$3,0)!=1){yyerror("Type mismatch");}
		}
	| declarator '=' '{' list_of_strings '}'
	
	| declarator '='  '{' initializer_list '}' {if(check_dim(csym,$1.idVal)!=1){yyerror("Dimensional Error 1D");}}
		
	| declarator '=' '{' list_of_lists '}' {if(check_dim(csym,$1.idVal)!=2){yyerror("Dimensional Error 2D");}}
	;
	
initializer
	: logical_or_expression {$$.fVal=$1.fVal;}
	;

initializer_list
	: initializer {if(assign_id(csym,idc,$1.fVal,1,t,x,y++)==-1){yyerror("Wrong Assignment");}}
	| initializer_list ',' initializer {if(assign_id(csym,idc,$3.fVal,1,t,x,y++)==-1){yyerror("Wrong Assignment");}}
	;

list_of_strings
	: T_STRING_LITERAL {if(assign_string(csym,idc,$1,x)!=2){yyerror("Error in String Assignment");}x++;}
	| list_of_strings ',' T_STRING_LITERAL {if(assign_string(csym,idc,$3,x)!=2){yyerror("Error in String Assignment");}x++;}
	;	

list_of_lists
	: '{' initializer_list '}' {x++;y=0;}
	| list_of_lists ',' '{' initializer_list '}' {x++;y=0;}
	;

type_specifier
	: T_CHAR
	| T_INT
	| T_FLOAT
	| T_DOUBLE
	;

declarator
	: T_IDENTIFIER {
					if(($$.idVal=add_to_symtab(csym,var,type,ln,0,0,0))==-1){
						yyerror("Either keyword or variable already present");}
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
					if(($$.idVal=add_to_symtab(csym,var,type,ln,1,(int)$3.fVal,0))==-1){
						yyerror("Either keyword or variable already present");}	
						idc=$$.idVal;
						t=check_typ(csym,var);
						x=0;y=0;
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' '[' T_I_CONSTANT ']'{
					if(($$.idVal=add_to_symtab(csym,var,type,ln,2,(int)$3.fVal,(int)$6.fVal))==-1){
						yyerror("Either keyword or variable already present");}
						idc=$$.idVal;
						t=check_typ(csym,var);
						x=0;y=0;
					}
	;




statement
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| return_statement
	| declaration
	| T_PRINT '(' T_STRING_LITERAL ')' ';'
	;

while_statement
	: while_compound_statement
	| expression_statement
	| while_selection_statement
	| iteration_statement
	| jump_statement
	| declaration
	| T_PRINT '(' T_STRING_LITERAL ')' ';'
	;


compound_statement
	: '{' '}' 
	| '{' statement_list '}'
	;

while_statement_list
	: while_statement
	| while_statement_list while_statement
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;
	
while_compound_statement
	: '{' '}'
	| '{' while_statement_list '}'
	;
	
selection_statement
	: T_IF '(' logical_or_expression ')'  statement %prec IFX
	| T_IF '(' logical_or_expression ')'  statement  T_ELSE statement
	;

while_selection_statement
	: T_IF '(' logical_or_expression ')'  while_statement %prec IFX
	| T_IF '(' logical_or_expression ')'  while_statement  T_ELSE while_statement
	;

iteration_statement
	: T_WHILE '(' logical_or_expression ')' while_statement
	;

jump_statement
	: T_CONTINUE ';'
	| T_BREAK ';'
	| T_RETURN ';'
	| T_RETURN logical_or_expression ';'
	;
	
return_statement
	: T_RETURN ';'
	| T_RETURN logical_or_expression ';'
	;

program
	: external_declaration function_definition {YYACCEPT;}
	| function_definition {YYACCEPT;}
	;

external_declaration
	: declaration
	| T_INCLUDE T_HEADER
	| external_declaration T_INCLUDE T_HEADER
	| T_DEFINE T_IDENTIFIER {
					if(add_to_symtab(csym,var,type,ln,0,0,0)==-1){
						yyerror("Either keyword or variable already present");}
					strcpy(type,"");
					} primary_expression
	| external_declaration T_DEFINE T_IDENTIFIER {
					if(add_to_symtab(csym,var,type,ln,0,0,0)==-1){
						yyerror("Either keyword or variable already present");}
					strcpy(type,"");
					} primary_expression			
	| external_declaration declaration
	;

function_definition
	: type_specifier T_MAIN '(' ')' compound_statement
	;

%%

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
