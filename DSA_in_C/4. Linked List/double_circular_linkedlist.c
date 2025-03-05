#include<Stdio.h>
#include<Stdlib.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))
struct node 
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node * create(int n)
{
	struct node *f,*l,*t;
	f=NEWNODE;
	printf("Enter the data: ");
	scanf("%d",&f->data);
	f->next=NULL;
	f->prev=NULL;
	l=f;

	for(int i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("Enter the data : ");
		scanf("%d",&t->data);
		l->next=t;
		t->prev=l;
		l=l->next;
	}
	t->next=f;
	f->prev=t;

	return f;

}
void display(struct node *f)
{
	struct node *l;
	l=f;
	do
	{
		printf(" %d ",l->data);
		l=l->next;
	}while(l!=f);
}

int main()
{
	struct node *head;
	int n;

	printf("How many nodes yow want : ");
	scanf("%d",&n);

	head=create(n);

	printf("LINKEDLIST : ");
	display(head);

	return 0;
}