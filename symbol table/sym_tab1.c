#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cursym=1;
int id=0;
typedef struct data
{
	int id;
	char name[64];
	char type[10];
	int line_no;
	int ln_used[20];
	int length;
	int breadth;
	void* ptr;
}DATA;

char* keywords[35]=
{"auto","break","case","char","const","continue","default","do","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while","double","else","enum",
"extern","float","for","goto","if","printf","scanf","main"};

typedef struct symbol_table
{
	int parent;
	DATA vars[10];
}SYMTAB;
SYMTAB symtab[100];

int iskeyword(char* str){
 	int i;
	for (i = 0; i < 35; i++)
		if(strcmp(str,keywords[i])==0)
   			return 1;
	return 0;
}
    
void init_symtab()
{
	symtab[0].parent=-1;
	int i=0,j=0;
	for(i=0;i<10;i++){
		symtab[0].vars[i].id=-1;
		j=0;
		for(j=0;j<20;j++){
			symtab[0].vars[i].ln_used[j]=-1;
		}
	}
	return ;
}

int create_symboltable(int par)
{
	//call before incrementing
	symtab[cursym].parent=par;
	int i=0,j=0;
	for(i=0;i<10;i++){
		symtab[cursym].vars[i].id=-1;
		for(j=0;j<20;j++){
			symtab[cursym].vars[i].ln_used[j]=-1;
		}
	}
	cursym++;
	return cursym-1;
}

int  present(int sym,char* var_name)
{
	int i=0;
	for(i=0;i<10;i++)
		if(symtab[sym].vars[i].id!=-1 && strcmp(var_name,symtab[sym].vars[i].name)==0)
			return 1;
	return 0;
}

/*int add_to_symtab(int sym,char* var_name,char* var_type,int ln,int is_arr,int l,int b)
{
	if((iskeyword(var_name)) || present(sym,var_name))
		return -1;
	int i=0;
	for(i=0;i<10;i++)
		if(symtab[sym].vars[i].id==-1)
			break;
	id++;
	symtab[sym].vars[i].id=id;
	strcpy(symtab[sym].vars[i].name,var_name);
	strcpy(symtab[sym].vars[i].type,var_type);
	void* m;
	if (strcmp(type,"int")==0) { (int*)m =(int*)malloc(sizeof(int));}
	if (strcmp(type,"float")==0 { (float*)m =(float*)malloc(sizeof(float));}
	symtab[sym].vars[i].ptr=m;
	symtab[sym].vars[i].line_no=ln;
	return 1;
}*/
int add_to_symtab(int sym,char* var_name,char* var_type,int ln,int is_arr,int l,int b)
{
	if((iskeyword(var_name)) || present(sym,var_name))
		return -1;
	int i=0;
	for(i=0;i<10;i++)
		if(symtab[sym].vars[i].id==-1)
			break;
	id++;
	symtab[sym].vars[i].id=id;
	strcpy(symtab[sym].vars[i].name,var_name);
	strcpy(symtab[sym].vars[i].type,var_type);
	void* m1;
	if (strcmp(var_type,"int")==0) { 
		//printf("fegbv");
		if(is_arr == 0){
			m1 =malloc(sizeof(int));
		}
		else if(b==0){
			m1 = malloc(l*sizeof(int));
			//printf("pointer : %p ",m1);
		}
		else {
			m1 = malloc(l*b*sizeof(int));
			//printf("pointer : %p ",m1);
		}
		//*(int*)m1 = 9;
	}
	if (strcmp(var_type,"float")==0) { 
		if(is_arr == 0){
			m1 =malloc(sizeof(float));
		}
		else if(b==0){
			m1 = malloc(l*sizeof(float));
			//printf("pointer : %p ",m1);
		}
		else {
			m1 = malloc(l*b*sizeof(float));
			//printf("pointer : %p ",m1);
		}
	}
	if (strcmp(var_type,"char")==0) { 
		if(is_arr == 0){
			m1 =malloc(sizeof(char));
		}
		else if(b==0){
			m1 = malloc(l*sizeof(char));
			//printf("pointer : %p ",m1);
		}
		else {
			m1 = malloc(l*b*sizeof(char));
			//printf("pointer : %p ",m1);
		}
	}
	//printf("ptr : %d",(*(int*)m1));
	symtab[sym].vars[i].ptr=m1;
	//printf("ptr : %p",m1);
	symtab[sym].vars[i].line_no=ln;
	symtab[sym].vars[i].breadth=b;
	symtab[sym].vars[i].length=l;
	return 1;
}

int assign(int cursym,char* var_name,char* value, int is_arr){
	int i=0;
    for(i=0;i<10;i++)
   	 if(symtab[cursym].vars[i].id!=-1 && strcmp(var_name,symtab[cursym].vars[i].name)==0)
   		 break;     
	int le = strlen(symtab[cursym].vars[i].type);
	char* type = (char*)malloc(sizeof(char)*le);
	strcpy(type,symtab[cursym].vars[i].type);
	//int l = symtab[cursym].vars[i].length;
	//int b = symtab[cursym].vars[i].breadth;
	//printf("\nlen : %d\n",l);
	//printf("bre : %d\n",b);
	//printf("type2 %s:", type);
	//void* m1;//= symtab[cursym].vars[i].ptr;
	if (strcmp(type,"int")==0) {
		if(is_arr == 0){	
			
			void* m1 = symtab[cursym].vars[i].ptr;
			int val = value[0] - '0';
			*(int*)m1 = val;
			
		}
		else {
			
			printf("is_arr: %d\n",is_arr);
			printf("naaa");
			int* m1 = symtab[cursym].vars[i].ptr;
			int vlen = strlen(value);
			char* va = malloc(sizeof(char)*vlen);
			strcpy(va,value);
			char* token = strtok(va, ",");
			while (token != NULL) {
				
				
				//printf("char : %c ",v);
				int val = (int) strtol(token, (char **)NULL, 10);
				//printf("int : %d ",val);
				token = strtok(NULL, ","); 
				*m1 = val;
				m1+=1;
			}
			//int* m2 = symtab[cursym].vars[i].ptr;
			//for (int i = 0;i<l*b;i++)	printf("arr : %d ",m2[i]);		
			free(type);
			free(va);
				
		}
			
	}
	if (strcmp(type,"float")==0){ 
		if(is_arr == 0){	
			void* m1 = symtab[cursym].vars[i].ptr;
			*(float*)m1 = (float)strtod(value,NULL);
		}
		else {
			printf("is_arr: %d\n",is_arr);
			float* m1 = symtab[cursym].vars[i].ptr;
			//printf("point: %p ",m1);
			//*m1 = 5;
			//m1+=1;
			//printf("point1: %p ",m1);
			//*m1 = 2;
			int vlen = strlen(value);
			char* va = malloc(sizeof(char)*vlen);
			strcpy(va,value);
			char* token = strtok(va, ",");
			while (token != NULL) {
				
				
				//printf("char : %c ",v);
				float val = (float) strtod(token,NULL);
				token = strtok(NULL, ","); 
				*m1 = val;
				m1+=1;
			}
			//int* m2 = symtab[cursym].vars[i].ptr;
			//for (int i = 0;i<l*b;i++)	printf("arr : %d ",m2[i]);		
			free(type);
			free(va);
	
		}
	}
	if (strcmp(type,"char")==0){
		//printf(" char : %p",symtab[cursym].vars[i].ptr);
		if(is_arr == 0){	
			char* m1 = symtab[cursym].vars[i].ptr;
			//printf("char : %c",value[0]);
			*m1 = value[0];
		}
		else  {
			printf("is_arr: %d\n",is_arr);
			char* m1 = symtab[cursym].vars[i].ptr;
			//printf("ptr:%p",m1);
			//printf("point: %p ",m1);
			//*m1 = 5;
			//m1+=1;
			//printf("point1: %p ",m1);
			//*m1 = 2;
			int vlen = strlen(value);
			char* va = malloc(sizeof(char)*vlen);
			strcpy(va,value);
			printf("%s",va);
			char* token = strtok(va, ",");
			while (token != NULL) {
				
				//printf("token :%s",token);
				//printf("char : %c ",token[1]);
				/**m1 = 'c';
				m1+=1;
				*m1 = 'b';*/
				//strcpy(*m1,token);
				for (int k=0;k<strlen(token);k++){
					*m1 = token[k];
					m1+=1;
				}
	
				token = strtok(NULL, ","); 
				
				
			}
			//int* m2 = symtab[cursym].vars[i].ptr;
			//for (int i = 0;i<l*b;i++)	printf("arr : %d ",m2[i]);		
			free(type);
			free(va);
	
		}
		
	}
	return (symtab[cursym].vars[i].ptr);
}


void used(int sym,char* var_name,int ln)
{
	int i=0;
	for(i=0;i<10;i++)
		if(symtab[sym].vars[i].id!=-1 && strcmp(var_name,symtab[sym].vars[i].name)==0)
			break;
	int j=0;
	for(j=0;j<20;j++)
		if(symtab[sym].vars[i].ln_used[j]==-1)
			break;
	symtab[sym].vars[i].ln_used[j]=ln;
	return;
}

int find_variable(int sym,char* var_name)
{
	int t=sym,i=0;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++)
			if(symtab[t].vars[i].id!=-1 && strcmp(var_name,symtab[t].vars[i].name)==0)
				return t;//actually should return the value but now the symtable num
		t=symtab[sym].parent;
	}
	return -1;//undeclared variable
	
}

void display_symtab(int cur)
{
	int i=0,j=0,k=0;
	for(i=0;i<cur;i++)
	{
		printf("ST %d:\n",i);
		printf("parent: %d\n",symtab[i].parent);
		printf("Variables stored:\n");

		printf("id\tname\ttype\tln no.\tval\tused at\n");
		j=0;
		while(symtab[i].vars[j].id!=-1)
		{	int le = strlen(symtab[i].vars[j].type);
			char* type = (char*)malloc(sizeof(char)*le);
			strcpy(type,symtab[i].vars[j].type);
			if (strcmp(type,"int")==0) {
			if(symtab[i].vars[j].length==0 && symtab[i].vars[j].breadth==0)
			
			printf("%d\t%s\t%s\t%d\t%d\t",symtab[i].vars[j].id,symtab[i].vars[j].name,symtab[i].vars[j].type,symtab[i].vars[j].line_no,(*(int*)symtab[i].vars[j].ptr));
			
			if (strcmp(type,"float")==0){ 
			printf("%d\t%s\t%s\t%d\t%f\t",symtab[i].vars[j].id,symtab[i].vars[j].name,symtab[i].vars[j].type,symtab[i].vars[j].line_no,(*(float*)symtab[i].vars[j].ptr));
			}

			k=0;
			while(symtab[i].vars[j].ln_used[k]!=-1)
			{
				printf("%d ",symtab[i].vars[j].ln_used[k]);
				k++;
			}
			printf("\n");
			j++;
		}
		printf("\n");
	}
}
//close sym tab go back to parent
int close_symtab(int cur)
{
	return symtab[cur].parent;
}
int main()
{
	init_symtab();
	add_to_symtab(0,"var1","char",2,0,0,0);
	char* a = assign(0,"var1",(char*)"h",0);
	printf("a elem: %c\n",*a);
	
	create_symboltable(0);
	add_to_symtab(1,"var2","char",3,2,3,2);
	char* a1 = assign(1,"var2",(char*)"hii,afv",2);
	//printf("a: %d\n",a[0]);
	printf("a1_elem1: %c\n",a1[0]);
	printf("a1_elem2: %c\n",a1[1]);
	printf("a1_elem3: %c\n",a1[2]);
	printf("a1_elem3: %c\n",a1[3]);
	printf("a1_elem3: %c\n\n",a1[4]);
	//printf("a: %p ",a);

	/*create_symboltable(0);
	add_to_symtab(2,"var3","int",4,0,0,0);
	assign(2,"var3",(char*)"4");
	 //add_to_symtab(2,"var3","char",5,0,0,0);
	 //add_to_symtab(2,"int","char",5);
	printf("%d\n", find_variable(2,"var1"));
	used(2,"var3",5);
	used(2,"var3",7);
	int p=close_symtab(2);
	add_to_symtab(p,"var100","float",7,0,0,0);
	assign(p,"var100",(char*)"7");*/
	display_symtab(2);
	return 0;
}
