%{
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "sym_tab.h"
int yyerror();  
int yylex();

char *yytext;
char value[100]={'\0'};
FILE *fptr;
int i = 0;
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

%union 	{
	char* text; struct Node* node_ptr;
}

%type <text> T_IDENTIFIER
%type <text> T_I_CONSTANT
%type <text> T_F_CONSTANT
%type <text> T_C_CONSTANT
%type <node_ptr> additive_expression multiplicative_expression unary_expression postfix_expression primary_expression expression relational_expression equality_expression logical_and_expression logical_or_expression assignment_expression initializer var_expression declarator init_declarator initializer_list declaration  init_declarator_list expression 
%type <text> unary_operator '+' '-' '!' assignment_operator '='
%type <text> T_STRING_LITERAL type_specifier

%%
primary_expression
	: T_IDENTIFIER {
					if(($$.idVal=find_variable(csym,var,0,0,0,&($$.fVal)))==-1){
						yyerror();
					}
					$$.type=check_typ(csym,var);
					$$.idVal=find_variable(csym,var,0,0,0,&($$.fVal));

					$$.node_ptr = create_leaf("id",$$.idVal,-1);
					printf("identifier: %p",$$.node_ptr);
					}
	| T_I_CONSTANT {$$.fVal=$1.fVal;$$.type=1;
			$$.node_ptr = create_leaf("num",NULL,$1.fVal);
			printf("constant: %p",$$.node_ptr);
			}
	| T_C_CONSTANT {$$.fVal=$1.fVal;$$.type=3;
			$$.node_ptr = create_leaf("num",NULL,$1.fVal);
			}
	| T_F_CONSTANT {$$.fVal=$1.fVal;$$.type=2;
			$$.node_ptr = create_leaf("num",NULL,$1.fVal);
			}
	| '(' expression ')' {$$.fVal=$2.fVal;$$.type=$2.type;
			      $$.node_ptr = $2.node_ptr;
			      }
	| T_IDENTIFIER '[' T_I_CONSTANT ']' { if(($$.idVal=find_variable(csym,var,1,(int)$3.fVal,0,&($$.fVal)))==-1){
						yyerror();
						}
						$$.type=check_typ(csym,var);
					$$.idVal=find_variable(csym,var,0,0,0,&($$.fVal));

					$$.node_ptr = create_leaf("id",$$.idVal,-1);
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']' {if(($$.idVal=find_variable(csym,var,2,(int)$3.fVal,(int)$6.fVal,&($$.fVal)))==-1){
						yyerror();
					}
					//printf("find: %f",$$.fVal);
					$$.type=check_typ(csym,var);
					$$.idVal=find_variable(csym,var,0,0,0,&($$.fVal));
	
					$$.node_ptr = create_leaf("id",$$.idVal,-1);
					
					}
	;
	
var_expression
	: T_IDENTIFIER {if(($$.idVal=find_variable(csym,var,0,0,0,&($$.fVal)))==-1){yyerror();}$$.type=check_typ(csym,var);
			$$.idVal=find_variable(csym,var,0,0,0,&($$.fVal));
			$$.node_ptr = create_leaf("id",$$.idVal,-1);
			}

	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
		if(($$.idVal=find_variable(csym,var,1,(int)$3.fVal,0,&($$.fVal)))==-1){
						yyerror();
					}
		$$.type=check_typ(csym,var);
		$$.idVal=find_variable(csym,var,0,0,0,&($$.fVal));

		$$.node_ptr = create_leaf("id",$$.idVal,-1);
	}
	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']'	{
		if(($$.idVal=find_variable(csym,var,2,(int)$3.fVal,(int)$6.fVal,&($$.fVal)))==-1){
						yyerror();
					}
		$$.type=check_typ(csym,var);
		$$.idVal=find_variable(csym,var,0,0,0,&($$.fVal));

		$$.node_ptr = create_leaf("id",$$.idVal,-1);
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
	: unary_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;$$.type=$1.type;
			    $$.node_ptr = $1.node_ptr;
			    }
	| multiplicative_expression '*' unary_expression {$$.fVal=$1.fVal*$3.fVal;$$.type=($1.type==2||$3.type==2)?2:1;
							  $$.node_ptr = create_node("*", $1.node_ptr, $3.node_ptr);}
	| multiplicative_expression '/' unary_expression {if($3.fVal==0){yyerror();}$$.fVal=$1.fVal/$3.fVal;$$.type=2;
							  $$.node_ptr = create_node("/", $1.node_ptr, $3.node_ptr);}
	| multiplicative_expression '%' unary_expression {if($1.type==2||$3.type==2||$3.fVal==0){yyerror();}$$.fVal=(int)$1.fVal%(int)$3.fVal;$$.type=1;
							  $$.node_ptr = create_node("%", $1.node_ptr, $3.node_ptr);}
	;

additive_expression
	: multiplicative_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;
				     $$.node_ptr = $1.node_ptr;}
	| additive_expression '+' multiplicative_expression {$$.fVal=$1.fVal+$3.fVal;
							     $$.node_ptr = create_node("+", $1.node_ptr, $3.node_ptr);}
	| additive_expression '-' multiplicative_expression {$$.fVal=$1.fVal-$3.fVal;
							     $$.node_ptr = create_node("-", $1.node_ptr, $3.node_ptr);}
	;

relational_expression
	: additive_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;
				$$.node_ptr = $1.node_ptr;}
	| relational_expression '<' additive_expression {$$.fVal=($1.fVal<$3.fVal);$$.idVal=$3.idVal;
							 $$.node_ptr = create_node("<", $1.node_ptr, $3.node_ptr);}
	| relational_expression '>' additive_expression {$$.fVal=($1.fVal>$3.fVal);$$.idVal=$3.idVal;
							 $$.node_ptr = create_node(">", $1.node_ptr, $3.node_ptr);}
	| relational_expression T_LE_OP additive_expression {$$.fVal=($1.fVal<=$3.fVal);$$.idVal=$3.idVal;
							     $$.node_ptr = create_node("LE", $1.node_ptr, $3.node_ptr);}
	| relational_expression T_GE_OP additive_expression {$$.fVal=($1.fVal>=$3.fVal);$$.idVal=$3.idVal;
							     $$.node_ptr = create_node("GE", $1.node_ptr, $3.node_ptr);}
	;

equality_expression
	: relational_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;
				 $$.node_ptr = $1.node_ptr;}
	| equality_expression T_EQ_OP relational_expression {$$.fVal=($1.fVal==$3.fVal);$$.idVal=$3.idVal;
							     $$.node_ptr = create_node("==", $1.node_ptr, $3.node_ptr);}
	| equality_expression T_NE_OP relational_expression {$$.fVal=($1.fVal!=$3.fVal);$$.idVal=$3.idVal;
							     $$.node_ptr = create_node("!=", $1.node_ptr, $3.node_ptr);}
	;

logical_and_expression
	: equality_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;
			       $$.node_ptr = $1.node_ptr;}
	| logical_and_expression T_AND_OP equality_expression {$$.fVal=($1.fVal && $3.fVal);$$.idVal=$3.idVal;
							       $$.node_ptr = create_node("&&", $1.node_ptr, $3.node_ptr);}
	;

logical_or_expression
	: logical_and_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	| logical_or_expression T_OR_OP logical_and_expression {{$$.fVal=($1.fVal || $3.fVal);$$.idVal=$3.idVal;}
								$$.node_ptr = create_node("||", $1.node_ptr, $3.node_ptr);}
	;

assignment_expression
	//: logical_or_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	: var_expression assignment_operator logical_or_expression 
		{
	
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
		if(assign_id(csym,$1.idVal,$3.fVal,1,ty,0,0)==-1){yyerror();}
		if(check_dim(csym,$1.idVal)!=0){yyerror();}
	}
	| declarator '='  T_STRING_LITERAL 
		{	
			if(assign_string(csym,$1.idVal,$3,0)!=1){yyerror();}
		}
	| declarator '=' '{' list_of_strings '}'
	
	| declarator '='  '{' initializer_list '}' {if(check_dim(csym,$1.idVal)!=1){yyerror();}}
		
	| declarator '=' '{' list_of_lists '}' {if(check_dim(csym,$1.idVal)!=2){yyerror();}}
	;
	
initializer
	: logical_or_expression {$$.fVal=$1.fVal;}
	;

initializer_list
	: initializer { }
	| initializer_list ',' initializer { }
	;

list_of_strings
	: T_STRING_LITERAL { }
	| list_of_strings ',' T_STRING_LITERAL { }
	;	

list_of_lists
	: '{' initializer_list '}' { }
	| list_of_lists ',' '{' initializer_list '}' { }
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
						yyerror();}
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
					if(($$.idVal=add_to_symtab(csym,var,type,ln,1,(int)$3.fVal,0))==-1){
						yyerror();}	
						idc=$$.idVal;
						t=check_typ(csym,var);
						x=0;y=0;
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' '[' T_I_CONSTANT ']'{
					if(($$.idVal=add_to_symtab(csym,var,type,ln,2,(int)$3.fVal,(int)$6.fVal))==-1){
						yyerror();}
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
						yyerror();}
					strcpy(type,"");
					} primary_expression
	| external_declaration T_DEFINE T_IDENTIFIER {
					if(add_to_symtab(csym,var,type,ln,0,0,0)==-1){
						yyerror();}
					strcpy(type,"");
					} primary_expression			
	| external_declaration declaration
	;

function_definition
	: type_specifier T_MAIN '(' ')' compound_statement
	;

%%

int yyerror()
{
	
	//int c;

    //while ((c = input())!=';' ||(c = input())!=-1 );
	printf("\nNot Valid %d\n",ln);
	exit(0);

	return 1;
}

int main()
{
	init_symtab();
	printf("size of %d",sizeof(node));
	//printf("1");
	if(!yyparse()){
		printf("\nValid\n");}
	display_symtab(max+1);
	return 1;
}
node* create_leaf (char * token, float * ptr, float num){
	printf("size of %d",sizeof(node));
	node* temp = (node*)malloc(sizeof(node));
	temp.token = token;
	temp.num = num;
	temp.ptr = ptr;
	temp.l = NULL;
	temp.r = NULL;
	return temp;

}

node* create_node (char* token, node* l, node* r){
	node* temp = (node*)malloc(sizeof(node));
	temp.token = token;
	temp.num = NULL;
	temp.ptr = NULL;
	temp.l = l;
	temp.r = r;
	return temp;

}
