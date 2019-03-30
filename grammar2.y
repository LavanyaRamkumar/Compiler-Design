%{
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "sym_tab.h"
int yyerror();  
int yylex();

char *yytext;
char value[100]={'\0'};


int yywrap()
{
return(1);
}

struct Node {
	char token[100];
	char* num ;
	struct Node* c;
	struct Node* s;
};

struct Node* root;
typedef struct Node node;

node* create_leaf (char * token, char* num);
node* create_node (char* token, node* c, node* s);

%}

%token T_IDENTIFIER T_C_CONSTANT T_I_CONSTANT T_F_CONSTANT T_STRING_LITERAL 
%token T_INC_OP T_DEC_OP T_LE_OP T_GE_OP T_EQ_OP T_NE_OP
%token T_AND_OP T_OR_OP T_MUL_ASSIGN T_DIV_ASSIGN T_MOD_ASSIGN T_ADD_ASSIGN T_SUB_ASSIGN
 
%token T_CHAR T_INT T_FLOAT T_DOUBLE
%token T_IF T_ELSE T_WHILE T_CONTINUE T_BREAK T_RETURN
%token T_MAIN T_INCLUDE T_DEFINE T_PRINT T_HEADER
%start additive_expression

%nonassoc IFX
%nonassoc T_ELSE


%union 	{
	char* text; struct Node* node_ptr;
}

%type <text> T_IDENTIFIER
%type <text> T_I_CONSTANT
%type <text> T_F_CONSTANT
%type <text> T_C_CONSTANT
%type <node_ptr> additive_expression multiplicative_expression unary_expression postfix_expression primary_expression expression relational_expression equality_expression logical_and_expression logical_or_expression assignment_expression initializer var_expression declarator init_declarator initializer_list 
%type <text> unary_operator '+' '-' '!' assignment_operator '='
%type <text> T_STRING_LITERAL

%%
primary_expression
	:T_I_CONSTANT { $$ = create_leaf("num",$1);
		        //printf("%p:",$$);
			printf("p->5\n");
		       }
	;

unary_expression : primary_expression {//$$ = $1;
				       $$ = create_node("p",$1,NULL);
				       //printf("%p:",$$);
				       printf("u->p\n");
				       }
		 ;

additive_expression
	: additive_expression '+' unary_expression {$$ = create_node("+",$1,$3);
						    //printf("root %p:",$$);

						    printf("a->a+u\n");
						   }
	| unary_expression { //$$ = $1;
			     $$ = create_node("u",$1,NULL);
			     //printf("%p:",$$);
			     printf("a->u\n"); }
	
	;

%% 

node* create_leaf (char * token, char* num){
	//printf("size of %d",sizeof(node));
	
	node* temp = (node*)malloc(sizeof(node));
	node* par = (node*)malloc(sizeof(node));
	strcpy(par->token,token);
	par->c = temp;
	par->s = NULL;
	strcpy(temp->token,num);
	temp->num = num;
	temp->c = NULL;
	temp->s = NULL;
	printf("temp leaf root: %p ",temp);
	printf("temp child: %p ",temp->c);
	printf("temp sib:%p ",temp->s);
	printf("par leaf root: %p ",par);
	printf("par child: %p ",par->c);
	printf("par sib:%p ",par->s);
	return par;

}

node* create_node (char* token, node* c, node* s){

	node* temp = (node*)malloc(sizeof(node));
	strcpy(temp->token,token);
	temp->num = NULL;
	temp->c = c;
	temp->s = NULL;
	c->s = s;
	printf("update of %p's sib to %p ",c,c->s);
	printf("root: %p ",temp);
	printf("child: %p ",temp->c);
	printf("sib:%p ",temp->s);
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
	
	if(!yyparse()){
		printf("\nValid\n");}
	
	return 1;
}

