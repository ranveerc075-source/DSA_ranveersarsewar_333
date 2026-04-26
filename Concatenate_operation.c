struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
NODE temp;
	temp =(NODE)malloc(sizeof(struct node));

	if(temp == NULL){
		printf("Memory not allocated\n");
		return NULL;
	}

	temp->data = x;
	temp->next = NULL;

	return temp;
}

NODE addNode(NODE first, int x) {
NODE temp = createNode(x);

	if(first == NULL)
	{
		return temp;
	}
	NODE p = first;
	while(p->next != NULL)
		{
			p = p->next;
		}
	
	p->next = temp;
	
	return first;
}

NODE concatenate(NODE t1, NODE t2) {
if(t1 == NULL)
	return t2;

	if(t2 == NULL)
		return t1;

	NODE p = t1;
	while(p->next != NULL)
		{
			p = p->next;
		}
	p->next = t2;
	return t1;
}

void displayList(NODE first) {
NODE temp = first;

	while(temp != NULL)
		{
			printf("%d --> ", temp->data);
			temp = temp->next;
		}
	printf("NULL\n");
}