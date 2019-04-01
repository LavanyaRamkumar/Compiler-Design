%{
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "sym_tab.h"
int yyerror();  
int yylex();

char *yytext;
char value[100]={'\0'};

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
			//printf("%p const -1 -1 -1",i++);
			//printf("%p prim_exp ",$$);
		        printf("\nprim %p ",$$);
			printf("p->5\n");
		       }
	;
multiplicative_expression
	: primary_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("mul_exp %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("m->u\n");
			   }
	| multiplicative_expression '*' primary_expression { $$ = create_node("*",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("m->m*p\n");
						     }
	| multiplicative_expression '/' primary_expression { $$ = create_node("/",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("m->m/p\n");
						     }
	| multiplicative_expression '%' primary_expression { $$ = create_node("%",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("m->m mod p\n");
						     }
	
	;

additive_expression
	: multiplicative_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("add_exp %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("a->m\n");
			   }
	| additive_expression '+' multiplicative_expression { $$ = create_node("+",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("a->a + m\n");
						     }

	| additive_expression '-' multiplicative_expression { $$ = create_node("-",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("a->a - m\n");
						     }	
	;

relational_expression
	: additive_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("rel_exp %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("r->a\n");
			   }

	| relational_expression '<' additive_expression { $$ = create_node("<",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("r->r < a\n");
						     }	

	| relational_expression '>' additive_expression { $$ = create_node(">",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("r->r > a\n");
						     }	

	| relational_expression T_LE_OP additive_expression { $$ = create_node("T_LE_OP",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("r->r T_LE_OP a\n");
						     }	

	| relational_expression T_GE_OP additive_expression { $$ = create_node("T_GE_OP",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("r->r T_GE_OP a\n");
						     }	
	;

equality_expression
	: relational_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("equality_exp %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("e->r\n");
			   }
	| equality_expression T_EQ_OP relational_expression { $$ = create_node("==",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("e->e == r\n");
						     }	

	| equality_expression T_NE_OP relational_expression { $$ = create_node("!=",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("e->e != r\n");
						     }	
	;

logical_and_expression
	: equality_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("logical_and_expression %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("la->e\n");
			   }

	| logical_and_expression T_AND_OP equality_expression { $$ = create_node("&&",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("la->la && e\n");
						     }	
	;

logical_or_expression
	: logical_and_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("logical_or_expression %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("lr->la\n");
			   }

	| logical_or_expression T_OR_OP logical_and_expression { $$ = create_node("||",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("lr->lr || la\n");
						     }	
	;


/*additive_expression
	: additive_expression '+' primary_expression { $$ = create_node("+",$1,$3,NULL);
						    printf("\n+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    printf("a->a+u\n");
						   }
	| primary_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     printf("add_exp %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     printf("a->u\n");
			   }
	
	;
*/

%% 

node* create_leaf (char * token, char* num){
	//printf("size of %d",sizeof(node));
	
	node* temp = (node*)malloc(sizeof(node));
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
	
	if(!yyparse()){
		printf("\nValid\n");}
	
	return 1;
}

