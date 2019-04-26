#include<stdio.h>
#include<stdlib.h>
struct Node {
	char token[100];
	char* num ;
	struct Node* c1;
	struct Node* c2;
	struct Node* c3;
};
typedef struct Node node;

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

void main(){

node* r = create_leaf("return","fd");
}

