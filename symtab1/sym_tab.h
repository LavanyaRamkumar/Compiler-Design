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

typedef struct symbol_table
{
	int parent;
	DATA vars[10];
}SYMTAB;

char* keywords[35]=
{"auto","break","case","char","const","continue","default","do","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while","double","else","enum",
"extern","float","for","goto","if","printf","scanf","main"};
SYMTAB symtab[100];


//definitions
//void init_symtab();
//int create_symboltable(int par);
//int  present(int sym,char* var_name);
//int add_to_symtab(int sym,char* var_name,char* var_type,int ln,int is_arr,int l,int b);
//int assign(int cursym,char* var_name,char* value,int is_arr);
//void used(int sym,char* var_name,int lno);
//int check_dim(int csym,int id);
//int find_variable(int sym,char* var_name,int dim,int x,int y,float* fp);
//void display_symtab(int cur);
//int close_symtab(int cur);
//float perform_unary(float ib,char o);
//int check_typ(int sym,char* var_name);
//int check_typ_id(int sym,int vid);
//int assign_id(int sym,int vid,float val,char op,int type,int x,int y);
//int assign_string(int csym,int id,char* str,int nstr);
//void exit_sym();









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
		j=0;
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

int add_to_symtab(int sym,char* var_name,char* var_type,int ln,int is_arr,int l,int b)
{
	if((iskeyword(var_name)) || present(sym,var_name))
		return -1;
	int i=0;
	for(i=0;i<10;i++)
		if(symtab[sym].vars[i].id==-1)
			break;
	id++;
	//printf("i%d id%d\n",i,id);
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
	return id;
}

int assign(int cursym,char* var_name,char* value,int is_arr){
	int i=0;
    for(i=0;i<10;i++)
   	 if(symtab[cursym].vars[i].id!=-1 && strcmp(var_name,symtab[cursym].vars[i].name)==0)
   		 break;     
	int le = strlen(symtab[cursym].vars[i].type);
	char* type = (char*)malloc(sizeof(char)*le);
	strcpy(type,symtab[cursym].vars[i].type);
	//printf("type2 %s:", type);
		int l = symtab[cursym].vars[i].length;
	int b = symtab[cursym].vars[i].breadth;
	printf("\nlen : %d\n",l);
	printf("bre : %d\n",b);
	//printf("type2 %s:", type);
	//void* m1;//= symtab[cursym].vars[i].ptr;
	if (strcmp(type,"int")==0) {
		if(is_arr == 0){	
			
			void* m1 = symtab[cursym].vars[i].ptr;
			int val = value[0] - '0';
			*(int*)m1 = val;
			/*
			int val = (int) strtol(value, (char **)NULL, 10);
			*(int*)m1 = val;
			*/
			
		}
		else {
			
			printf("is_arr: %d\n",is_arr);
			printf("naaa");
			int* m1 = symtab[cursym].vars[i].ptr;
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
			//printf("is_arr: %d\n",is_arr);
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
			//printf("%s",va);
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
	//return (symtab[cursym].vars[i].ptr);
	return 1;
}



void used(int sym,char* var_name,int lno)
{
	int i=0,j=0,t=sym;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && strcmp(symtab[t].vars[i].name,var_name)==0){
				j=0;
				for(j=0;j<20;j++){
					if(symtab[t].vars[i].ln_used[j]==-1){
						symtab[t].vars[i].ln_used[j]=lno;
						return;
					}
				}
			}
		}
		t=symtab[t].parent;
	}
	return;
}

int check_dim(int csym,int id)
{
	int t=csym,i=0,d=0;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && symtab[t].vars[i].id==id)
			{
				if(symtab[t].vars[i].length==0 && symtab[t].vars[i].breadth==0) return 0;	
				if(symtab[t].vars[i].length>0 && symtab[t].vars[i].breadth==0) return 1;
				if(symtab[t].vars[i].length>0 && symtab[t].vars[i].breadth>0) return 2;
			}
		}	
		t=symtab[t].parent;
	}
}

int find_variable(int sym,char* var_name,int dim,int x,int y,float* fp)
{
	int t=sym,i=0;
	if(x < 0 || y < 0)	return -1;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && strcmp(var_name,symtab[t].vars[i].name)==0)
			{
				if(x > symtab[t].vars[i].length || y >symtab[t].vars[i].breadth)	return -1;
				if(check_dim(sym,symtab[t].vars[i].id)!=dim) return -1;
				if(dim==0){
					if(strcmp("int",symtab[t].vars[i].type)==0){
						*fp=*(int*)symtab[t].vars[i].ptr;}
					else if(strcmp("char",symtab[t].vars[i].type)==0){
						*fp=*(char*)symtab[t].vars[i].ptr;
						}
					else if(strcmp("float",symtab[t].vars[i].type)==0){
						*fp=*(float*)symtab[t].vars[i].ptr;}
				}
				if(dim==1){
					if(strcmp("int",symtab[t].vars[i].type)==0){
						*fp=((int*)symtab[t].vars[i].ptr)[x];}
					else if(strcmp("char",symtab[t].vars[i].type)==0){
						*fp=((char*)symtab[t].vars[i].ptr)[x];
						}
					else if(strcmp("float",symtab[t].vars[i].type)==0){
						*fp=((float*)symtab[t].vars[i].ptr)[x];}
				}
				if(dim==2){
					//printf("here");
					if(strcmp("int",symtab[t].vars[i].type)==0){
						*fp=((int*)symtab[t].vars[i].ptr)[x*symtab[t].vars[i].breadth+y];}
					else if(strcmp("char",symtab[t].vars[i].type)==0){//printf("here");
						*fp=((char*)symtab[t].vars[i].ptr)[x*symtab[t].vars[i].breadth+y];
						//printf("here%c",(int)*fp);
						}
					else if(strcmp("float",symtab[t].vars[i].type)==0){
						*fp=((float*)symtab[t].vars[i].ptr)[x*symtab[t].vars[i].breadth+y];}
				}
				return symtab[t].vars[i].id;//return id of var	
			}
		}		
		t=symtab[t].parent;
	}
	//printf("here");
	return -1;//undeclared variable
	
}

void display_symtab(int cur)
{
	int i=0,j=0,k=0;
	FILE *fptr = fopen("../IO/symtab.txt", "w"); 
	fprintf(fptr,"ST\tparent\tid\tname\ttype\tln no.\tused at %55s val\n"," ");
	for(i=0;i<cur;i++)
	{
		//printf("ST %d:\n",i);
		//printf("parent: %d\n",symtab[i].parent);
		//printf("Variables stored:\n");
		j=0;
		while(symtab[i].vars[j].id!=-1)
		{	int le = strlen(symtab[i].vars[j].type);
			char* type = (char*)malloc(sizeof(char)*le);
			strcpy(type,symtab[i].vars[j].type);
			fprintf(fptr,"%d\t%d\t%d\t%s\t%s\t%d\t",i,symtab[i].parent,symtab[i].vars[j].id,symtab[i].vars[j].name,symtab[i].vars[j].type,symtab[i].vars[j].line_no);
			k=0;
			fprintf(fptr,"[");
			while(symtab[i].vars[j].ln_used[k]!=-1)
			{
				//printf("printf");
				fprintf(fptr,"%d ",symtab[i].vars[j].ln_used[k]);
				k++;
			}
			while(k<20){
				fprintf(fptr,"   ");k++;
			}
			fprintf(fptr,"]\t");
			if (strcmp(type,"int")==0) {
				//printf("l%d b%d",symtab[i].vars[j].length,symtab[i].vars[j].breadth);
				if(symtab[i].vars[j].length==0 && symtab[i].vars[j].breadth==0){
					fprintf(fptr,"%d ",(*(int*)symtab[i].vars[j].ptr));
				}
				else if (symtab[i].vars[j].breadth==0)
				{
					for(int p=0;p<symtab[i].vars[j].length;p++)
						fprintf(fptr,"%d ",((int *)symtab[i].vars[j].ptr)[p]);
				}
				else
				{
					for(int p=0;p<symtab[i].vars[j].length;p++){
						for(int q=0;q<symtab[i].vars[j].breadth;q++){
							fprintf(fptr,"%d ",((int *)symtab[i].vars[j].ptr)[p*symtab[i].vars[j].breadth+q]);
						}
						fprintf(fptr,"\t");	
					}
				}
			}
			if (strcmp(type,"float")==0) {
				if(symtab[i].vars[j].length==0 && symtab[i].vars[j].breadth==0){
					fprintf(fptr,"%f ",(*(float*)symtab[i].vars[j].ptr));
				}
				else if (symtab[i].vars[j].breadth==0)
				{
					for(int p=0;p<symtab[i].vars[j].length;p++)
						fprintf(fptr,"%f ",((float *)symtab[i].vars[j].ptr)[p]);
				}
				else
				{
					for(int p=0;p<symtab[i].vars[j].length;p++){
						for(int q=0;q<symtab[i].vars[j].breadth;q++){
							fprintf(fptr,"%f ",((float *)symtab[i].vars[j].ptr)[p*symtab[i].vars[j].breadth+q]);
						}
						fprintf(fptr,"\t");	
					}
				}
			}
			if (strcmp(type,"char")==0) {
				if(symtab[i].vars[j].length==0 && symtab[i].vars[j].breadth==0){
					fprintf(fptr,"%c ",(*(char*)symtab[i].vars[j].ptr));
				}
				else if (symtab[i].vars[j].breadth==0)
				{
					for(int p=0;p<symtab[i].vars[j].length;p++)
						fprintf(fptr,"%c ",((char *)symtab[i].vars[j].ptr)[p]);
				}
				else
				{
					for(int p=0;p<symtab[i].vars[j].length;p++){
						for(int q=0;q<symtab[i].vars[j].breadth;q++){
							fprintf(fptr,"%c",((char *)symtab[i].vars[j].ptr)[p*symtab[i].vars[j].breadth+q]);
						}
						fprintf(fptr,"\t");	
					}
				}
			}
			fprintf(fptr,"\n");
			j++;
			if(j==10) break;
		}
		fprintf(fptr,"\n");
	}
	fclose(fptr); 
}
//close sym tab go back to parent
int close_symtab(int cur)
{
	return symtab[cur].parent;
}

float perform_unary(float ib,char o)
{
	if(o=='+')
	{
		return ib;
	}
	if(o=='-')
	{
		return -ib;
	}
	if(o=='!')
	{
		return  !ib;
	}
	return ib;
}

int check_typ(int sym,char* var_name)
{
	int t=sym,i=0;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && strcmp(var_name,symtab[t].vars[i].name)==0)
			{
				if(strcmp(symtab[t].vars[i].type,"int")==0)	return 1;
				if(strcmp(symtab[t].vars[i].type,"float")==0)	return 2;
				if(strcmp(symtab[t].vars[i].type,"char")==0)	return 3;
		}
		}	
		t=symtab[t].parent;
	}
	//printf("here");
	return -1;//undeclared variable
	
}

int check_typ_id(int sym,int vid)
{
	int t=sym,i=0;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && symtab[t].vars[i].id==vid)
			{
				if(strcmp(symtab[t].vars[i].type,"int")==0)	return 1;
				if(strcmp(symtab[t].vars[i].type,"float")==0)	return 2;
				if(strcmp(symtab[t].vars[i].type,"char")==0)	return 3;
		}
		}	
		t=symtab[t].parent;
	}
	//printf("here");
	return -1;//undeclared variable
}

int assign_id(int sym,int vid,float val,char op,int type,int x,int y)
{
	//printf("assigning %d %f",vid,val);
	int t=sym,i=0,temp;
	while(t!=-1)
	{	if(x < 0 || y < 0)	return -1;
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && symtab[t].vars[i].id==vid)
			{	int b = symtab[t].vars[i].breadth;
				int l = symtab[t].vars[i].length;
				void* m1 = symtab[t].vars[i].ptr;
				if(op==1){
				if(b == 0){	
					b = 1;
					temp=y;
					y=x;
					x=temp;	
				}
				//
				if(l>0)
					if(x >= l || y >=b)	return -1;
				//int* m1 = symtab[t].vars[i].ptr;
				//printf("l %d %d*%d + b %d %d = %d  %d\n",l,x,b,b,y,x*b+y,(x >= l || y >=b) );
					if(type==1){
						int* a1=(int*)m1;
						a1[x*b+y]=(int)val;
					}
					if(type==2){
						//printf("here");
						float* a1=(float*)m1;
						a1[x*b+y]=(float)val;
					}
					if(type==3){
						char* a1=(char*)m1;
						a1[x*b+y]=(char)val;
					}
				}
				if(op=='*'){
					if(type==1)
						*(int*)m1*=(int)val;
					if(type==2)
						*(float*)m1*=val;
					if(type==3)
						*(char*)m1*=(char)val;
				}
				if(op=='+'){
					if(type==1)
						*(int*)m1+=(int)val;
					if(type==2)
						*(float*)m1+=val;
					if(type==3)
						*(char*)m1+=(char)val;
				}
				if(op=='-'){
					if(type==1)
						*(int*)m1-=(int)val;
					if(type==2)
						*(float*)m1-=val;
					if(type==3)
						*(char*)m1-=(char)val;
				}
				if(op=='/'){
					if(val==0)	return -1;
					if(type==1)
						*(int*)m1/=(int)val;
					if(type==2)
						*(float*)m1/=val;
					if(type==3)
						*(char*)m1/=(char)val;
				}
				if(op=='%'){
					if(val==0)	return -1;
					if(type==1)
						*(int*)m1%=(int)val;
					if(type==2)
						return -1;
					if(type==3)
						*(char*)m1%=(char)val;
				}
				//printf("satya");
				return 1;
			}
		}	
		t=symtab[t].parent;
	}
	//printf("satya");
	return 1;
}

int assign_string(int csym,int id,char* str,int nstr)
{
	int t=csym,i=0,d=0;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && symtab[t].vars[i].id==id)
			{
				if(strcmp(symtab[t].vars[i].type,"int")==0)	return -1;
				if(strcmp(symtab[t].vars[i].type,"float")==0)	return -1;
				if(symtab[t].vars[i].length>0 && symtab[t].vars[i].breadth==0) d=1;
				if(symtab[t].vars[i].length>0 && symtab[t].vars[i].breadth>0) d=2;
				break;
			}
		}	
		t=symtab[t].parent;
	}
	int h=1;
	for(h=1;h<strlen(str)-1;h++)
	{
		//printf("assign(%d,%d,%c,1,3,%d,%d)",csym,id,(char)str[h],nstr,h-1);
		//printf("index: %d %c",h-1,str[h]);
		if(assign_id(csym,id,(float)str[h],1,3,nstr,h-1)==-1){return -1;}
	}
	//printf("index: %d \\0",h-1);
	if(assign_id(csym,id,(float)'\0',1,3,nstr,h-1)==-1){return -1;}
	//\0
	//printf("here");
	return d;
}

void exit_sym()
{
	FILE *fd;SYMTAB* ptr_to_st;
	fd=fopen("../bin.bin","wb+");
	fseek(fd,0,SEEK_SET);
	int i = 0;
	for (i=0;i<100;i++)
	{
		ptr_to_st=&(symtab[i]);
		fwrite(ptr_to_st,sizeof(symtab[i]),1,fd);
	}
	fclose(fd);
	return;
}
