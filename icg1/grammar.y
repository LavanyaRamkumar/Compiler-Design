%{
#include<stdio.h>
#include<string.h>
#include "icg.h"
#include<stdlib.h>
int t=0;
int l=0;
int combined=0,expr=0,j=0,b=0,k=0;
int csym=0;
char add[50];
int beg=0,w=0,temp=0,cbeg=0;
int yyerror();  
int yylex();
%}

%token T_IDENTIFIER T_C_CONSTANT T_I_CONSTANT T_F_CONSTANT T_STRING_LITERAL 
%token T_INC_OP T_DEC_OP T_LE_OP T_GE_OP T_EQ_OP T_NE_OP
%token T_AND_OP T_OR_OP T_MUL_ASSIGN T_DIV_ASSIGN T_MOD_ASSIGN T_ADD_ASSIGN T_SUB_ASSIGN
 
%token T_CHAR T_INT T_FLOAT T_DOUBLE
%token T_IF T_ELSE T_WHILE T_CONTINUE T_BREAK T_RETURN
%token T_MAIN T_INCLUDE T_DEFINE T_PRINT T_HEADER
%start program
%code requires{
typedef struct Num
{
	char code[1000];
	char addr[50];
	char true[5];
	char false[5];
	char next[5];
	int begin;
}NODE;}
%union {
	NODE node;
}
%nonassoc IFX
%nonassoc T_ELSE
%type <node> additive_expression multiplicative_expression unary_expression postfix_expression primary_expression expression relational_expression equality_expression logical_and_expression logical_or_expression assignment_expression initializer var_expression declarator init_declarator initializer_list unary_operator '+' '-' '!' assignment_operator '=' T_I_CONSTANT T_C_CONSTANT T_F_CONSTANT T_IDENTIFIER statement compound_statement expression_statement selection_statement iteration_statement return_statement declaration T_PRINT T_STRING_LITERAL ';' '(' ')' '{' '}' T_RETURN while_statement T_WHILE X T_ELSE type_specifier while_statement_list while_compound_statement statement_list T_CHAR T_INT T_FLOAT T_DOUBLE T_IF jump_statement while_selection_statement T_BREAK T_CONTINUE T_MAIN function_definition init_declarator_list list_of_strings list_of_lists external_declaration T_DEFINE T_INCLUDE T_HEADER
%%

primary_expression
	: T_IDENTIFIER {strcpy($$.addr,$1.addr);strcpy($$.code,"");}

	| T_I_CONSTANT {strcpy($$.addr,$1.addr);strcpy($$.code,"");}

	| T_C_CONSTANT {strcpy($$.addr,$1.addr);strcpy($$.code,"");}

	| T_F_CONSTANT {strcpy($$.addr,$1.addr);strcpy($$.code,"");}
	| '(' /*{l++;sprintf($<node>$.next,"L%d",l);expr=l;}*/ expression ')' {strcpy($$.addr,$2.addr);strcpy($$.code,$2.code);}

	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
											int type= check_typ(csym,$1.addr);
											int te=t+1;t=t+2;
											sprintf($$.code,"t%d = %d*%s\nt%d = %s[t%d]\n",te,type,$3.addr,t,$1.addr,te);
											sprintf($$.addr,"t%d",t);
										}

	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']' {
											int t1=t+1,t2=t+2,t3=t+3,t=t+4;
											int l,b;
											int type= check_typ(csym,$1.addr);
											check_dim(csym,$1.addr,&l,&b);
											sprintf($$.code,"t%d = %d*%s\nt%d = %s+t%d\nt%d = %d*t%d\nt%d = %s[t%d]\n",t1,b,$6.addr,t2,$3.addr,t1,t3,type,t2,t,$1.addr,t3);
											sprintf($$.addr,"t%d",t);
										}
	;
	
var_expression
	: T_IDENTIFIER {strcpy($$.addr,$1.addr);strcpy($$.code,"");}

	| T_IDENTIFIER '[' T_I_CONSTANT ']' {
											int type= check_typ(csym,$1.addr);
											t=t+1;
											sprintf($$.code,"t%d = %d * %s\n",t,type,$3.addr);
											sprintf($$.addr,"%s[t%d]",$1.addr,t);
										}

	| T_IDENTIFIER '[' T_I_CONSTANT ']''[' T_I_CONSTANT ']'	{
											int t1=t+1,t2=t+2,t=t+3;
											int l,b;
											int type= check_typ(csym,$1.addr);
											check_dim(csym,$1.addr,&l,&b);
											sprintf($$.code,"t%d = %d * %s\nt%d = %s+t%d\nt%d = %d * t%d\n",t1,b,$6.addr,t2,$3.addr,t1,t,type,t2);
											sprintf($$.addr,"%s[t%d]",$1.addr,t);
										}
	;
	
postfix_expression
	: primary_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}

	| postfix_expression T_INC_OP {t++;int te=t;t++;
									sprintf($$.code,"t%d = %s\n%st%d = %s + 1\n%s = t%d\n",te,$1.addr,$1.code,t,$1.addr,$1.addr,t);
									sprintf($$.addr,"t%d",te);}

	| postfix_expression T_DEC_OP {t++;int te=t;t++;
									sprintf($$.code,"t%d = %s\n%st%d = %s - 1\n%s = t%d\n",te,$1.addr,$1.code,t,$1.addr,$1.addr,t);
									sprintf($$.addr,"t%d",te);}
	;

unary_expression
	: postfix_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| T_INC_OP unary_expression {t++;sprintf($$.code,"%st%d = %s + 1\n%s = t%d\n",$2.code,t,$2.addr,$2.addr,t);strcpy($$.addr,$2.addr);}

	| T_DEC_OP unary_expression {t++;sprintf($$.code,"%st%d = %s - 1\n%s = t%d\n",$2.code,t,$2.addr,$2.addr,t);strcpy($$.addr,$2.addr);}
	| unary_operator unary_expression {t++;sprintf($$.addr,"t%d",t);
   						sprintf($$.code,"%s%s = %s %s\n",$2.code,$$.addr,$1.code,$2.addr);}
	;

unary_operator
	: '+' {strcpy($$.code,"plus");}
	| '-' {strcpy($$.code,"minus");}
	| '!' {strcpy($$.code,"not");}
	;

multiplicative_expression
	: unary_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| multiplicative_expression '*' unary_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s * %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| multiplicative_expression '/' unary_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s / %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| multiplicative_expression '%' unary_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s %% %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	;

additive_expression
	: multiplicative_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| additive_expression '+' multiplicative_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s + %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| additive_expression '-' multiplicative_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s - %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	;

relational_expression
	: additive_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| relational_expression '<' additive_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s < %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| relational_expression '>' additive_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s > %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| relational_expression T_LE_OP additive_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s <= %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| relational_expression T_GE_OP additive_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s >= %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	;

equality_expression
	: relational_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| equality_expression T_EQ_OP relational_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s == %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	| equality_expression T_NE_OP relational_expression {t++;sprintf($$.addr,"t%d",t);
   			sprintf($$.code,"%s%s%s = %s != %s\n",$1.code,$3.code,$$.addr,$1.addr,$3.addr);}
	;

logical_and_expression
	: equality_expression { 
							strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);
						}
	| logical_and_expression T_AND_OP equality_expression {
					//printf("$1:%s %s",$1.addr,$3.addr);
					/*if(expr!=0){sprintf($$.code,"%sifFalse %s goto L%d\n%s",$1.code,$1.addr,expr,$3.code);strcpy($$.addr,$3.addr);sprintf($$.next,"L%d",expr);expr=0;}*/
					if($<node>0.begin!=0){temp=t;sprintf($$.code,"%sifFalse %s goto END%d\n%s",$1.code,$1.addr,$<node>0.begin,$3.code);}
   					sprintf($$.code,"%sifFalse %s goto %s\n%s",$1.code,$1.addr,$<node>0.next,$3.code);
   					strcpy($$.addr,$3.addr);
   					if(strcmp($<node>0.next,"")==0){
   						/*printf("here");*/
   						sprintf($$.code,"%sifFalse %s goto L%d\n%s",$1.code,$1.addr,l,$3.code);}
   						if($<node>0.begin!=0){temp=t;sprintf($$.code,"%sifFalse %s goto END%d\n%s",$1.code,$1.addr,$<node>0.begin,$3.code);}
   					}
	;

logical_or_expression
	: logical_and_expression {
			strcpy($$.addr,$1.addr);
			strcpy($$.code,$1.code);
			//strcpy($$.next,$1.next);
			}
	| logical_or_expression T_OR_OP {strcpy($<node>$.next,$<node>0.next);} logical_and_expression {temp=t;
   			sprintf($$.code,"%sif %s goto %s\n%s",$1.code,$1.addr,$<node>0.true,$4.code);strcpy($$.addr,$4.addr);combined=1;//strcpy($$.addr,$1.addr);
   			if(strcmp($<node>0.true,"")==0){sprintf($$.code,"%sif %s goto L%d\n%s",$1.code,$1.addr,expr,$4.code);sprintf($<node>0.true,"L%d",expr);expr=0;}}
	;

assignment_expression
	: var_expression '=' logical_or_expression {sprintf($$.code,"%s%s%s = %s\n",$1.code,$3.code,$1.addr,$3.addr);/*printf("%s",$$.code);*/}
	| var_expression assignment_operator logical_or_expression {sprintf($$.code,"%s%s%s = %s %s %s\n",$1.code,$3.code,$1.addr,$1.addr,$2.addr,$3.addr);}
	;

assignment_operator
	: T_MUL_ASSIGN {strcpy($$.addr,"*");}
	| T_DIV_ASSIGN {strcpy($$.addr,"/");}
	| T_MOD_ASSIGN {strcpy($$.addr,"%");}
	| T_ADD_ASSIGN {strcpy($$.addr,"+");}
	| T_SUB_ASSIGN {strcpy($$.addr,"-");}
	;

expression
	: assignment_expression { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| logical_or_expression { strcpy($$.addr,$1.addr);sprintf($$.code,"%s",$1.code);}
	| expression ',' assignment_expression { strcpy($$.addr,$3.addr);strcpy($$.code,$3.code);}
	;

declaration
	: type_specifier init_declarator_list ';' {strcpy($$.code,$2.code);}
	;
init_declarator_list
	: init_declarator {j+=b;strcpy($$.code,$1.code);strcpy($$.addr,$1.addr);}
	| init_declarator_list ',' init_declarator {sprintf($$.code,"%s%s",$1.code,$3.code);strcpy($$.addr,$3.addr);}
	;

init_declarator
	: declarator {strcpy($$.code,$1.code);}
	| declarator '=' initializer {sprintf($$.code,"%s%s%s = %s\n",$3.code,$1.code,$1.addr,$3.addr);}
	| declarator '='  T_STRING_LITERAL {
										char a[100]="";
										for(int i=1;i<strlen($3.addr)-1;i++)
										{
											sprintf(a,"%s[%d] = '%c'\n",$1.addr,i-1,$3.addr[i]);
											strcat($$.code,a);
										}
										sprintf(a,"%s[%d] = '\\0'\n",$1.addr,(int)strlen($3.addr)-1);
										strcat($$.code,a);
										}
	| declarator '=' '{' {int l;check_dim(csym,$1.addr,&l,&b);strcpy(add,$1.addr);} list_of_strings '}' {j=0;b=0;strcpy($$.code,$5.code);}
	| declarator '='  '{' {int l;check_dim(csym,$1.addr,&l,&b);strcpy(add,$1.addr);} initializer_list '}' 	{j=0;b=0;strcpy($$.code,$5.code);}	
	| declarator '=' '{' {int l;check_dim(csym,$1.addr,&l,&b);strcpy(add,$1.addr);} list_of_lists '}' {j=0;b=0;k=0;strcpy($$.code,$5.code);}	
	;
	
initializer
	: logical_or_expression {strcpy($$.code,$1.code);strcpy($$.addr,$1.addr);}
	;

initializer_list
	: initializer {int type= check_typ(csym,add);
					t=t+1;
					sprintf($$.code,"t%d = %d*%d\n%s[t%d] = %s\n",t,type,j,add,t,$1.addr);
					//strcat($$.code,"%s[%d]=%s\n",add,j,$1.addr);
					j+=1;} 
	| initializer_list ',' initializer {int type= check_typ(csym,add);
					t=t+1;
					sprintf($$.code,"%st%d = %d*%d\n%s[t%d] = %s\n",$1.code,t,type,j,add,t,$3.addr);
					j+=1;}
	;

list_of_strings
	: T_STRING_LITERAL {char a[100]="";
						
										for(int i=1;i<strlen($1.addr)-1;i++)
										{
											sprintf(a,"%s[%d] = '%c'\n",add,j+i-1,$1.addr[i]);
											strcat($$.code,a);
										}
										sprintf(a,"%s[%d] = '\\0'\n",add,(int)strlen($1.addr)-1+j);
										strcat($$.code,a);
										j+=b;
										}
	| list_of_strings ',' T_STRING_LITERAL {char a[100]="";
										//strcat($$.code,$1.code);
										for(int i=1;i<strlen($3.addr)-1;i++)
										{
											sprintf(a,"%s[%d] = '%c'\n",add,j+i-1,$3.addr[i]);
											strcat($$.code,a);
										}
										sprintf(a,"%s[%d] = '\\0'\n",add,(int)strlen($3.addr)-1+j);
										strcat($$.code,a);
										j+=b;
										}
	;	

list_of_lists
	: '{' initializer_list '}' {t++;k+=b;j=k;sprintf($$.code,"%s",$2.code);}
	| list_of_lists ',' '{' initializer_list '}' {k+=b;j=k;sprintf($$.code,"%s%s",$1.code,$4.code);}
	;

type_specifier
	: T_CHAR
	| T_INT
	| T_FLOAT
	| T_DOUBLE
	;

declarator
	: T_IDENTIFIER {sprintf($$.code,"%s %s\n",ptype(check_typ(csym,$1.addr)),$1.addr);strcpy($$.addr,$1.addr);}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' {sprintf($$.code,"%s %s[%s]\n",ptype(check_typ(csym,$1.addr)),$1.addr,$3.addr);strcpy($$.addr,$1.addr);}
	| T_IDENTIFIER '[' T_I_CONSTANT ']' '[' T_I_CONSTANT ']' {t++;sprintf($$.code,"t%d = %s*%s\n%s %s[t%d]\n",t,$3.addr,$6.addr,ptype(check_typ(csym,$1.addr)),$1.addr,t);strcpy($$.addr,$1.addr);}
	;

statement
	: compound_statement { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| expression_statement { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| selection_statement {strcpy($$.code,$1.code);}
	| iteration_statement {strcpy($$.code,$1.code);}
	| return_statement {strcpy($$.code,$1.code);}
	| declaration {strcpy($$.code,$1.code);}
	| T_PRINT '(' T_STRING_LITERAL ')' ';' {sprintf($$.code,"print %s\n",$3.addr);}
	;

while_statement
	: while_compound_statement { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| expression_statement { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| while_selection_statement {strcpy($$.code,$1.code);}
	| iteration_statement {strcpy($$.code,$1.code);}
	| jump_statement {strcpy($$.code,$1.code);}
	| declaration {strcpy($$.code,$1.code);}
	| T_PRINT '(' T_STRING_LITERAL ')' ';' {sprintf($$.code,"print %s\n",$3.addr);}
	;


compound_statement
	: '{' '}' 
	| '{' statement_list '}' { strcpy($$.addr,$2.addr);strcpy($$.code,$2.code);}
	;

while_statement_list
	: while_statement { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| while_statement_list while_statement { strcpy($$.addr,$2.addr);sprintf($$.code,"%s%s",$1.code,$2.code);}
	;

statement_list
	: statement { strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	| statement_list statement { strcpy($$.addr,$2.addr);sprintf($$.code,"%s%s",$1.code,$2.code);}
	;

expression_statement
	: ';'
	| expression ';'{ strcpy($$.addr,$1.addr);strcpy($$.code,$1.code);}
	;
	
while_compound_statement
	: '{' '}'
	| '{' while_statement_list '}' { strcpy($$.addr,$2.addr);strcpy($$.code,$2.code);}
	;

X : T_IF '(' {l++;sprintf($<node>$.true,"L%d",l);expr=l;l++;sprintf($<node>$.next,"L%d",l);$<node>$.begin=0;} logical_or_expression ')' {
						if(combined==1) sprintf($$.code,"%sifFalse t%d goto %s\n%s : \n",$4.code,t,$<node>3.next,$<node>3.true);
						else sprintf($$.code,"%sifFalse t%d goto %s\n",$4.code,t,$<node>3.next);
						strcpy($$.next,$<node>3.next);
						combined=0;
						};

selection_statement
	: X statement {sprintf($$.code,"%s%s%s:\n",$1.code,$2.code,$$.next);} %prec IFX 
	| X statement T_ELSE statement {l++;sprintf($$.code,"%s%sgoto L%d\n%s:\n%sL%d:\n",$1.code,$2.code,l,$$.next,$4.code,l);}
	;

while_selection_statement
	: X while_statement {sprintf($$.code,"%s%s%s:\n",$1.code,$2.code,$$.next);} %prec IFX 
	| X while_statement T_ELSE while_statement {l++;sprintf($$.code,"%s%sgoto L%d\n%s:\n%sL%d:\n",$1.code,$2.code,l,$$.next,$4.code,l);}
	;

iteration_statement
	: T_WHILE '(' {beg++;cbeg++;$<node>$.begin=beg;w=1;sprintf($<node>$.next,"END%d",beg);l++;sprintf($<node>$.true,"L%d",l);} logical_or_expression ')' while_statement {cbeg--;
			if(combined==1) sprintf($$.code,"BEGIN%d :\n%sifFalse %s goto END%d\n%s : \n%sgoto BEGIN%d\nEND%d :\n",$<node>3.begin,$4.code,$4.addr,$<node>3.begin,$<node>3.true,$6.code,$<node>3.begin,$<node>3.begin);
			else sprintf($$.code,"BEGIN%d : \n%sifFalse %s goto END%d\n%s : \n%sgoto BEGIN%d\nEND%d :\n ",$<node>3.begin,$4.code,$4.addr,$<node>3.begin,$<node>3.true,$6.code,$<node>3.begin,$<node>3.begin);
			strcpy($$.next,$<node>3.next);
			combined=0;w=0;
			
			//printf("\n\n%s\n\n",$<node>3.true);
			}
	;

jump_statement
	: T_CONTINUE ';' {sprintf($$.code,"goto BEGIN%d\n",cbeg);}
	| T_BREAK ';' {sprintf($$.code,"goto END%d\n",cbeg);}
	| T_RETURN ';' {sprintf($$.code,"return\n");}
	| T_RETURN logical_or_expression ';'  {sprintf($$.code,"%sreturn %s\n",$2.code,$2.addr);}
	;
	
return_statement
	: T_RETURN logical_or_expression ';'  {sprintf($$.code,"%sreturn %s\n",$2.code,$2.addr);}
	| T_RETURN ';'  {sprintf($$.code,"return\n");}
	;

program
	: external_declaration function_definition {YYACCEPT;}
	| function_definition {YYACCEPT;}
	;

external_declaration
	: declaration {printf("%s",$1.code);}
	| T_INCLUDE T_HEADER
	| external_declaration T_INCLUDE T_HEADER
	| T_DEFINE T_IDENTIFIER primary_expression {printf("int %s\n%s = %s\n",$2.addr,$2.addr,$3.addr);}
	| external_declaration T_DEFINE T_IDENTIFIER primary_expression	{printf("int %s\n%s = %s\n",$3.addr,$3.addr,$4.addr);}		
	| external_declaration declaration {printf("%s",$2.code);}
	;

function_definition
	: T_INT T_MAIN '(' ')' {strcpy($<node>$.next,"next");} compound_statement {printf("main:\n%snext :",$6.code);
							if((int)strlen($6.code)>(int)sizeof($6.code))
								printf("\n\nBuffer exceeded");}
	;

%%
int yyerror()
{
	printf("\nNot Valid\n");
	exit(0);
	return 1;
}
int main()
{
	init_symtab();
	if(!yyparse()){
		//printf("\nValid\n");
		}
	return 1;
}
