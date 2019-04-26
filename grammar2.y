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
	:T_I_CONSTANT { $$ = create_leaf("num",$1);
		        fprintf(fptr,"%p const -1 -1 -1\n",$$,$1);
			printf("const");

		       }

	;

var_expression
	: T_IDENTIFIER { $$ = create_leaf("id",$1);
		        fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);
			}

	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
		
					     }

	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']'	{
								  }
	;
	
multiplicative_expression
	: primary_expression { $$ = $1;
				printf("mul");

			   }
	| multiplicative_expression '*' primary_expression { $$ = create_node("*",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("m->m*p\n");
						     }
	| multiplicative_expression '/' primary_expression { $$ = create_node("/",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("m->m/p\n");
						     }
	| multiplicative_expression '%' primary_expression { $$ = create_node("%",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("m->m mod p\n");
						     }
	
	;

additive_expression
	: multiplicative_expression { $$ = $1;
			    
			   }
	| additive_expression '+' multiplicative_expression { $$ = create_node("+",$1,$3,NULL);
						    fprintf(fptr,"%p + %p %p -1\n",$$,$1,$3);
						    printf("%p + %p %p -1",$$,$1,$3);
					            
						    
						    //printf("a->a + m\n");
						     }

	| additive_expression '-' multiplicative_expression { $$ = create_node("-",$1,$3,NULL);
						    fprintf(fptr,"%p - %p %p -1\n",$$,$1,$3);
						    printf("%p - %p %p -1",$$,$1,$3);
					            ;
						    //printf("a->a - m\n");
						     }	
	;

relational_expression
	: additive_expression { $$ = $1;
			   
			   }

	| relational_expression '<' additive_expression { $$ = create_node("<",$1,$3,NULL);
						    fprintf(fptr,"%p < %p %p -1",$$,$1,$3);
						    printf("%p < %p %p -1",$$,$1,$3);
					            
						    //printf("r->r < a\n");
						     }	

	| relational_expression '>' additive_expression { $$ = create_node(">",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("r->r > a\n");
						     }	

	| relational_expression T_LE_OP additive_expression { $$ = create_node("T_LE_OP",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("r->r T_LE_OP a\n");
						     }	

	| relational_expression T_GE_OP additive_expression { $$ = create_node("T_GE_OP",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("r->r T_GE_OP a\n");
						     }	
	;

equality_expression
	: relational_expression { $$ = $1;
			   
			   }
	| equality_expression T_EQ_OP relational_expression { $$ = create_node("==",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						   // printf("e->e == r\n");
						     }	

	| equality_expression T_NE_OP relational_expression { $$ = create_node("!=",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						   // printf("e->e != r\n");
						     }	
	;

logical_and_expression
	: equality_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			    // printf("logical_and_expression %p ",$$);
			     //printf("unary_exp %p\n",$1);
			    // printf("la->e\n");
			   }

	| logical_and_expression T_AND_OP equality_expression { $$ = create_node("&&",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						    //printf("la->la && e\n");
						     }	
	;

logical_or_expression
	: logical_and_expression { $$ = $1;
			     //$$ = create_node("u",$1,NULL);
			     //printf("logical_or_expression %p ",$$);
			     //printf("unary_exp %p\n",$1);
			     //printf("lr->la\n");
			   }

	| logical_or_expression T_OR_OP logical_and_expression { $$ = create_node("||",$1,$3,NULL);
						    printf("+ %p ",$$);
						    printf("%p ",$1);
					            printf("%p",$3);
						   // printf("lr->lr || la\n");
						     }	
	;

assignment_expression
	//: logical_or_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	: var_expression assignment_operator logical_or_expression 
		{
						    $$ = create_node("=",$1,$3,NULL);
						    fprintf(fptr,"%p = %p %p -1\n",$$,$1,$3);
						    printf("%p = %p %p -1",$$,$1,$3);
					            
		//STOPPED HERE
		
		/*else {
			$$.node_ptr = create_node($$, $1.node_ptr, $2.node_ptr);
			node* l = create_leaf("id",$1.var?	*/			
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
	| logical_or_expression { $$ = $1;}
	| expression ',' assignment_expression
	;

declaration
	: type_specifier init_declarator_list ';' {$1 = create_leaf("type",$1);
						   printf("%p type -1 -1 -1 \n",$1); 
						   fprintf(fptr,"%p type -1 -1 -1 \n",$1); 
						   $$ = create_node("declaration",$1,$2,NULL);
							
						   fprintf(fptr,"%p declaration %p %p -1",$$,$1,$2);
						   printf("%p declaration %p %p -1",$$,$1,$2);
						   }
	;


init_declarator_list
	: init_declarator  { $$ = $1;}
	| init_declarator_list ',' init_declarator { $$ = create_node("list",$1,$3,NULL);
						   fprintf(fptr,"%p list %p %p -1\n",$$,$1,$3);
						   printf("%p list %p %p -1\n",$$,$1,$3);
						    }
	;

init_declarator
	: declarator { $$ = $1;}
	| declarator '=' initializer {
	}
	| declarator '='  T_STRING_LITERAL 
		{	
			
		}
	| declarator '=' '{' list_of_strings '}'
	
	| declarator '='  '{' initializer_list '}' { }
		
	| declarator '=' '{' list_of_lists '}' { }
	;
	
initializer
	: logical_or_expression { }
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


declarator
	: T_IDENTIFIER {$$ = create_leaf("num",$1);
		      	//printf("%p id -1 -1 -1\n",$$);
			fprintf(fptr,"%p id -1 -1 -1\n",$$);}
	;

type_specifier
	: T_CHAR
	| T_INT
	| T_FLOAT
	| T_DOUBLE
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

	| T_DEFINE T_IDENTIFIER primary_expression
	| external_declaration T_DEFINE T_IDENTIFIER primary_expression			
	| external_declaration declaration
	;

function_definition
	: type_specifier T_MAIN '(' ')' compound_statement
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
	fptr = fopen("sample.txt", "w");
	if(!yyparse()){
		printf("\nValid\n");
}
	
	return 1;
}

