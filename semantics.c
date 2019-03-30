node* leaf (char * token, float * ptr, float num){
	
	node* temp = (node*)malloc(sizeof(node));
	temp.token = token;
	temp.num = num;
	temp.ptr = ptr;
	temp.l = NULL;
	temp.r = NULL;

}


node* create_node (char* token, node* l, node* r){
	node* temp = (node*)malloc(sizeof(node));
	temp.token = token;
	temp.num = NULL;
	temp.ptr = NULL;
	temp.l = l;
	temp.r = r;

}



$$.node_ptr = create_leaf ("num",null,$1.fval)


%union 	{
	NUM nVal;
	char sVal[64];
	char cVal;
	node* node_ptr;
}

struct node {
	char* token;
	float* ptr;
	float num ;
	node* l;
	node* r;
}




