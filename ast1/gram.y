%{
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


%type <node_ptr> additive_expression multiplicative_expression unary_expression postfix_expression primary_expression relational_expression equality_expression logical_and_expression logical_or_expression assignment_expression initializer var_expression declarator init_declarator initializer_list  init_declarator_list declaration type_specifier list_of_strings list_of_lists statement while_statement compound_statement while_statement_list statement_list expression_statement  while_compound_statement selection_statement while_selection_statement iteration_statement jump_statement return_statement external_declaration function_definition expression T_RETURN program T_INCLUDE T_HEADER T_DEFINE T_PRINT '(' T_STRING_LITERAL ')' ';' '{' '}'  
%type <text> unary_operator '+' '-' '!' assignment_operator '='
%type <text> T_CHAR T_INT T_FLOAT T_DOUBLE

%%
primary_expression
	: T_IDENTIFIER { $$ = create_leaf("num",$1);
		        fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);
			//printf("const");
			}
	| T_I_CONSTANT { $$ = create_leaf("int",$1);
		        fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);
			}
	| T_C_CONSTANT { $$ = create_leaf("char",$1);
		        fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);
			}
	| T_F_CONSTANT { $$ = create_leaf("float",$1);
		        fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);
			}
	| '(' expression ')' { $$ = $2;
			      }
	| T_IDENTIFIER '[' T_I_CONSTANT ']' { $$ = create_leaf("1D",$1);
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",$$,$1,$3);
					}
	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']' { $$ = create_leaf("1D",$1);
		        		      			  fprintf(fptr,"%p %s[%d][%d] -1 -1 -1\n",$$,$1,$3,$6);
					
					}
	;
	



var_expression
	: T_IDENTIFIER { $$ = create_leaf("id",$1);
		        fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);
			}

	| T_IDENTIFIER '[' T_I_CONSTANT ']' { $$ = create_leaf("1D",$1);
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",$$,$1,$3);
		
	}
	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']'	{ $$ = create_leaf("1D",$1);
		        		      			  fprintf(fptr,"%p %s[%s][%s] -1 -1 -1\n",$$,$1,$3,$6);
	}
	;
	
postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression T_INC_OP { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* new = create_leaf("var",$1);
					fprintf(fptr,"%p %s -1 -1 -1\n",new,$1);
					node* p = create_node("+",$1,o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,$1,o);
					$$ = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",$$,new,p); }
					
	| postfix_expression T_DEC_OP { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* new = create_leaf("var",$1);
					fprintf(fptr,"%p %s -1 -1 -1\n",new,$1);
					node* p = create_node("+",$1,o,NULL);
					fprintf(fptr,"%p - %p %p -1\n",p,$1,o);
					$$ = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",$$,new,p); }
	;

unary_expression
	: postfix_expression { $$ = $1; }
	| T_INC_OP unary_expression { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					
					node* new = create_leaf("var",$2);
					fprintf(fptr,"%p %s -1 -1 -1\n",new,$2);
					node* p = create_node("+",$2,o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,$2,o);
					$$ = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",$$,new,p);}
	| T_DEC_OP unary_expression { node* o = create_leaf("one","1");
					fprintf(fptr,"%p 1 -1 -1 -1\n",o);
					node* new = create_leaf("var",$2);
					fprintf(fptr,"%p %s -1 -1 -1\n",new,$2);
					node* p = create_node("-",$2,o,NULL);
					fprintf(fptr,"%p + %p %p -1\n",p,$2,o);
					$$ = create_node("=",new,p,NULL);
					fprintf(fptr,"%p = %p %p -1\n",$$,new,p); }
	| unary_operator unary_expression { $$ = create_node("un_exp",$1,$2,NULL);
					fprintf(fptr,"%p un_exp %p %p -1\n",$$,$1,$2);}
	;

unary_operator
	: '+' { $$ = create_leaf("+","");
		fprintf(fptr,"%p + -1 -1 -1\n",$$);}
	| '-' { $$ = create_leaf("-","");
		fprintf(fptr,"%p - -1 -1 -1\n",$$); }
	| '!' { $$ = create_leaf("!","");
		fprintf(fptr,"%p ! -1 -1 -1\n",$$);}
	;

multiplicative_expression
	: unary_expression { $$ = $1;
			    }
	| multiplicative_expression '*' unary_expression {$$ = create_node("*",$1,$3,NULL);
						    fprintf(fptr,"%p * %p %p -1\n",$$,$1,$3);
						    //printf("mul");
							  }
	| multiplicative_expression '/' unary_expression { $$ = create_node("/",$1,$3,NULL);
						    fprintf(fptr,"%p / %p %p -1\n",$$,$1,$3);}

	| multiplicative_expression '%' unary_expression { $$ = create_node("%",$1,$3,NULL);
						    fprintf(fptr,"%p mod %p %p -1\n",$$,$1,$3);}
	;

additive_expression
	: multiplicative_expression { $$ = $1;}
	| additive_expression '+' multiplicative_expression { $$ = create_node("+",$1,$3,NULL);
						    fprintf(fptr,"%p + %p %p -1\n",$$,$1,$3);}
	| additive_expression '-' multiplicative_expression { $$ = create_node("-",$1,$3,NULL);
						    fprintf(fptr,"%p - %p %p -1\n",$$,$1,$3); }
	;

relational_expression
	: additive_expression { $$ = $1; }
	| relational_expression '<' additive_expression { $$ = create_node("<",$1,$3,NULL);
						    fprintf(fptr,"%p < %p %p -1\n",$$,$1,$3);}
	| relational_expression '>' additive_expression { $$ = create_node(">",$1,$3,NULL);
						    fprintf(fptr,"%p > %p %p -1\n",$$,$1,$3); }
	| relational_expression T_LE_OP additive_expression { $$ = create_node("<=",$1,$3,NULL);
						    fprintf(fptr,"%p <= %p %p -1\n",$$,$1,$3); }
	| relational_expression T_GE_OP additive_expression { $$ = create_node(">=",$1,$3,NULL);
						    fprintf(fptr,"%p >= %p %p -1\n",$$,$1,$3);}
	;

equality_expression
	: relational_expression { $$ = $1;}
	| equality_expression T_EQ_OP relational_expression { $$ = create_node("==",$1,$3,NULL);
						    fprintf(fptr,"%p == %p %p -1\n",$$,$1,$3);}
	| equality_expression T_NE_OP relational_expression { $$ = create_node("!=",$1,$3,NULL);
						    fprintf(fptr,"%p != %p %p -1\n",$$,$1,$3); }
	;

logical_and_expression
	: equality_expression { $$ = $1; }
	| logical_and_expression T_AND_OP equality_expression { $$ = create_node("&&",$1,$3,NULL);
						    fprintf(fptr,"%p && %p %p -1\n",$$,$1,$3);}
	;

logical_or_expression
	: logical_and_expression { $$ = $1;}
	| logical_or_expression T_OR_OP logical_and_expression { $$ = create_node("||",$1,$3,NULL);
						    fprintf(fptr,"%p || %p %p -1\n",$$,$1,$3);}
	;

assignment_expression
	//: logical_or_expression {$$.fVal=$1.fVal;$$.idVal=$1.idVal;}
	: var_expression assignment_operator logical_or_expression 
		{ $$ = create_node("=",$1,$3,NULL);
						    fprintf(fptr,"%p = %p %p -1\n",$$,$1,$3);
	
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
	: assignment_expression {$$ = $1;}
	| logical_or_expression { $$ = $1;} 
	| expression ',' assignment_expression 
	;

declaration
	: type_specifier init_declarator_list ';' { 
						   $$ = create_node("declaration",$1,$2,NULL);
							
						   fprintf(fptr,"%p declaration %p %p -1\n",$$,$1,$2);
						   //printf("%p declaration %p %p -1",$$,$1,$2); 
						   }
	;

type_specifier
	: T_CHAR {$$ = create_leaf("char",$1);
		  fprintf(fptr,"%p char -1 -1 -1 \n",$$); }
	| T_INT {$$ = create_leaf("int",$1);
		  fprintf(fptr,"%p int -1 -1 -1 \n",$$); }
	| T_FLOAT {$$ = create_leaf("float",$1);
		  fprintf(fptr,"%p float -1 -1 -1 \n",$$); }
	| T_DOUBLE {$$ = create_leaf("double",$1);
		  fprintf(fptr,"%p double -1 -1 -1 \n",$$); }
	;



init_declarator_list
	: init_declarator { $$ = $1;}
	| init_declarator_list ',' init_declarator { $$ = create_node("list",$1,$3,NULL);
						   fprintf(fptr,"%p list %p %p -1\n",$$,$1,$3);
						   //printf("%p list %p %p -1\n",$$,$1,$3);
						    }
	;

init_declarator
	: declarator { $$ = $1; }
	| declarator '=' initializer { $$ = create_node("=",$1,$3,NULL);
				       fprintf(fptr,"%p = %p %p -1\n",$$,$1,$3); 
				      }
	| declarator '='  T_STRING_LITERAL 
		{	node* r =  create_leaf("string",$3);
			fprintf(fptr,"%p %s -1 -1 -1\n",r,$3);
		  $$ = create_node("=",$1,$3,NULL);
	          fprintf(fptr,"%p = %p %p -1\n",$$,$1,r);
		}
	| declarator '=' '{' list_of_strings '}' { $$ = create_node("=",$1,$4,NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",$$,$1,$4);
						}
	
	| declarator '='  '{' initializer_list '}' { $$ = create_node("=",$1,$4,NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",$$,$1,$4); }
		
	| declarator '=' '{' list_of_lists '}' { $$ = create_node("=",$1,$4,NULL);
	          				   fprintf(fptr,"%p = %p %p -1\n",$$,$1,$4); }
	;
	
initializer
	: logical_or_expression { $$ = $1; }
	;

initializer_list
	: initializer { $$ = $1; }
	| initializer_list ',' initializer { $$ = create_node("init_list",$1,$3,NULL);
	          		             fprintf(fptr,"%p init_list %p %p -1\n",$$,$1,$3); }
	;

list_of_strings
	: T_STRING_LITERAL { $$ =  create_leaf("string",$1);
						fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1); }
	| list_of_strings ',' T_STRING_LITERAL { node* r =  create_leaf("string",$3);
						fprintf(fptr,"%p %s -1 -1 -1\n",r,$3);
						$$ = create_node("string_list",$1,r,NULL);
	          		             fprintf(fptr,"%p string_list %p %p -1\n",$$,$1,r); }
	;	

list_of_lists
	: '{' initializer_list '}' { $$ = $2; }
	| list_of_lists ',' '{' initializer_list '}' { $$ = create_node("diff_list",$1,$4,NULL);
	          		             fprintf(fptr,"%p diff_list %p %p -1\n",$$,$1,$4); }
	;


declarator
	: T_IDENTIFIER { $$ = create_leaf("num",$1);
		      	//printf("%p id -1 -1 -1\n",$$);
			fprintf(fptr,"%p %s -1 -1 -1\n",$$,$1);}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' { $$ = create_leaf("1D",$1);
		        		      fprintf(fptr,"%p %s[%s] -1 -1 -1\n",$$,$1,$3); }
	| T_IDENTIFIER '[' T_I_CONSTANT ']' '[' T_I_CONSTANT ']'{ $$ = create_leaf("1D",$1);
		        		      			  fprintf(fptr,"%p %s[%s][%s] -1 -1 -1\n",$$,$1,$3,$6); }
	;




statement
	: compound_statement { $$ = $1; }
	| expression_statement { $$ = $1; }
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| return_statement { $$ = $1; }
	| declaration { $$ = $1; }
	| T_PRINT '(' T_STRING_LITERAL ')' ';' 
	;

while_statement
	: while_compound_statement { $$ = $1; }
	| expression_statement { $$ = $1; }
	| while_selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| jump_statement { $$ = $1; }
	| declaration { $$ = $1; }
	| T_PRINT '(' T_STRING_LITERAL ')' ';'
	;


compound_statement
	: '{' '}' 
	| '{' statement_list '}' { $$ = $2; }
	;

while_statement_list
	: while_statement { $$ = $1; }
	| while_statement_list while_statement { $$ = create_node("while_list",$1,$2,NULL);
	          		             fprintf(fptr,"%p while_list %p %p -1\n",$$,$1,$2); }
	;

statement_list
	: statement { $$ = $1; }
	| statement_list statement { $$ = create_node("stmt_list",$1,$2,NULL);
	          		             fprintf(fptr,"%p stmt_list %p %p -1\n",$$,$1,$2); }
	;

expression_statement
	: ';'
	| expression ';' { $$ = $1; }
	;
	
while_compound_statement
	: '{' '}'
	| '{' while_statement_list '}' { $$ = $2; }
	;
	
selection_statement
	: T_IF '(' logical_or_expression ')'  statement %prec IFX  { $$ = create_node("if",$3,$5,NULL);
	          		             fprintf(fptr,"%p if %p %p -1\n",$$,$3,$5); }

	| T_IF '(' logical_or_expression ')'  statement  T_ELSE statement { $$ = create_node("if",$3,$5,$7);
	          		             fprintf(fptr,"%p if %p %p %p\n",$$,$3,$5,$7); }
	;

while_selection_statement
	: T_IF '(' logical_or_expression ')'  while_statement %prec IFX { $$ = create_node("if",$3,$5,NULL);
	          		             fprintf(fptr,"%p if %p %p -1\n",$$,$3,$5); }

	| T_IF '(' logical_or_expression ')'  while_statement  T_ELSE while_statement { $$ = create_node("if",$3,$5,$7);
	          		             fprintf(fptr,"%p if %p %p %p\n",$$,$3,$5,$7); }
	;

iteration_statement
	: T_WHILE '(' logical_or_expression ')' while_statement { $$ = create_node("while",$3,$5,NULL);
	          		             			  fprintf(fptr,"%p while %p %p -1\n",$$,$3,$5); }
	;

jump_statement
	: T_CONTINUE ';' {$$ = create_leaf("continue","");
		  fprintf(fptr,"%p continue -1 -1 -1 \n",$$); }

	| T_BREAK ';' {$$ = create_leaf("break","");
		  fprintf(fptr,"%p break -1 -1 -1 \n",$$); }

	| T_RETURN ';' {$$ = create_leaf("return","");
		  fprintf(fptr,"%p return -1 -1 -1 \n",$$); }

	| T_RETURN logical_or_expression ';' {  $1 = create_leaf("return","ret");
						fprintf(fptr,"%p return -1 -1 -1 \n",$1);
						$$ = create_node("jump",$1,$2,NULL);
	          		             	fprintf(fptr,"%p jump %p %p -1\n",$$,$1,$2); }
	;
	
return_statement
	: T_RETURN ';' {$$ = create_leaf("return",NULL);
		  fprintf(fptr,"%p return -1 -1 -1 \n",$$); }

	| T_RETURN logical_or_expression ';' {  $1 = create_leaf("return","");
						fprintf(fptr,"%p return -1 -1 -1 \n",$1);
						$$ = create_node("jump1",$1,$2,NULL);
	          		             	fprintf(fptr,"%p jump1 %p %p -1\n",$$,$1,$2); }
	;

program
	: external_declaration function_definition { $$ = create_node("PROGRAM",$1,$2,NULL);
	          		             	fprintf(fptr,"%p PROGRAM %p %p -1\n",$$,$1,$2); YYACCEPT;}
	| function_definition {$$=$1;YYACCEPT;}
	;

external_declaration
	: declaration { $$ = $1; //fprintf(fptr,"only decl\n");
				}
	| T_INCLUDE T_HEADER { $1 = create_leaf("#include","");
				fprintf(fptr,"%p #include -1 -1 -1 \n",$1);
				$2 = create_leaf("header","");
				fprintf(fptr,"%p header -1 -1 -1 \n",$2);
				$$ = create_node("ext",$1,$2,NULL);
	          		fprintf(fptr,"%p ext %p %p -1\n",$$,$1,$2); 
				//fprintf(fptr,"inclunhead\n");
				}
	| external_declaration T_INCLUDE T_HEADER { $2 = create_leaf("#include","");
				fprintf(fptr,"%p #include1 -1 -1 -1 \n",$2);
				$3 = create_leaf("header","");
				fprintf(fptr,"%p header1 -1 -1 -1 \n",$3);
				$$ = create_node("ext",$1,$2,$3);
	          		fprintf(fptr,"%p ext %p %p %p\n",$$,$1,$2,$3);
				//fprintf(fptr,"ext inclunhead\n");
				 } 
	| T_DEFINE T_IDENTIFIER primary_expression { node* r = create_leaf("id",$2);
				fprintf(fptr,"%p %s -1 -1 -1 \n",r,$2);
				
				$$ = create_node("#def",r,$3,NULL);
	          		fprintf(fptr,"%p #def %p %p -1\n",$$,r,$3);
				//fprintf(fptr,"def only\n");
				 }
	| external_declaration T_DEFINE T_IDENTIFIER primary_expression { node* r = create_leaf("id",$3);
				fprintf(fptr,"%p %s -1 -1 -1 \n",r,$3);
				 node* r1= create_node("#def",r,$4,NULL);
	          		fprintf(fptr,"%p #def %p %p -1\n",r1,r,$4);
				$$ = create_node("ext",$1,r1,NULL);
	          		fprintf(fptr,"%p ext %p %p -1\n",$$,$1,r1);
				//fprintf(fptr,"ext def\n");
				}
	| external_declaration declaration { $$ = create_node("ext",$1,$2,NULL);
	          		             	fprintf(fptr,"%p ext %p %p -1\n",$$,$1,$2);
						//fprintf(fptr,"ext decl\n");
						}
	;

function_definition
	: type_specifier T_MAIN '(' ')' compound_statement { $$ = create_node("main()",$1,$5,NULL);
	          		             	fprintf(fptr,"%p main() %p %p -1\n",$$,$1,$5);}
	;


%%

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

