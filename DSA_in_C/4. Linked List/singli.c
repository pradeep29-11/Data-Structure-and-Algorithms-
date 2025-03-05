#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* accept(int p)
{
	struct node *l,*r,*t;
	r=(struct node*)malloc(sizeof(struct node));

	printf("Enter the data : ");
	scanf("%d",&r->data);
	l=r;
	l->next=NULL;

	for(int i=2;i<=p;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));

		printf("Enter the data : ");
		scanf("%d",&t->data);

		l->next=t;
		l=t;
		l->next=NULL;		
	}
	return r;
}
void display(struct node *f)
{
	struct node *t;

	for(t=f; t!=NULL; t=t->next)
	{
		printf("%d ", t->data);
	}
}struct node * freen(struct node *p)
{
	struct node *t;
	while(p!=NULL)
	{
		t=p;
		p=p->next;
		free(t);
	}
}
int main()
{
	struct node *p,*head;
	int n;

	printf("How many nodes : ");
	scanf("%d",&n);

	p = accept(n);

	printf("LinkedList : ");
	display(p);

	head=freen(p);
	return 0;
}