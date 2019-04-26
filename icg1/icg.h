#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cursym=1;
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
SYMTAB symtab[100];

void init_symtab()
{
	SYMTAB* ptr_to_st;
	FILE *fd=fopen("../bin.bin","rb+");
	fseek(fd,0,SEEK_SET);
	int i = 0;
	for (i=0;i<100;i++)
	{
		ptr_to_st=&(symtab[i]);
		fread(ptr_to_st,sizeof(symtab[i]),1,fd);
	}
	fclose(fd);
	return;
}

int check_dim(int csym,char* name,int* l,int* b)
{
	int t=csym,i=0,d=0;
	while(t!=-1)
	{
		i=0;
		for(i=0;i<10;i++){
			if(symtab[t].vars[i].id!=-1 && strcmp(symtab[t].vars[i].name,name)==0)
			{
				*l=symtab[t].vars[i].length;
				*b=symtab[t].vars[i].breadth;
				if(symtab[t].vars[i].length==0 && symtab[t].vars[i].breadth==0) return 0;	
				if(symtab[t].vars[i].length>0 && symtab[t].vars[i].breadth==0) return 1;
				if(symtab[t].vars[i].length>0 && symtab[t].vars[i].breadth>0) return 2;
			}
		}	
		t=symtab[t].parent;
	}
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
				if(strcmp(symtab[t].vars[i].type,"int")==0)	return 4;
				if(strcmp(symtab[t].vars[i].type,"float")==0)	return 8;
				if(strcmp(symtab[t].vars[i].type,"char")==0)	return 1;
		}
		}	
		t=symtab[t].parent;
	}
	//printf("here");
	return -1;//undeclared variable
	
}

char* ptype (int x)
{
	switch(x){
		case 1: return "char";
		case 4: return "int";
		case 8: return "float";
		default : return "idk";
	}
}

