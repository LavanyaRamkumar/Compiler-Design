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
%start declaration


%union 	{
	char* text; struct Node* node_ptr;
}

%type <text> T_CHAR T_INT T_FLOAT T_DOUBLE 
%type <node_ptr> declaration type_specifier 


%%

declaration
	: type_specifier ';' { 
						   $$ = create_node("declaration",$1,NULL,NULL);
							
						   fprintf(fptr,"%p declaration %p -1 -1\n",$$,$1);
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


%%

node* create_leaf (char * token, char* num){
	//printf("size of %d",sizeof(node));
	
	node* temp = (node*)malloc(sizeof(node));
	printf("create_leaf %p\n",temp);
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
	printf("create_node %p\n",temp);
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


