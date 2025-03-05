#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))
struct node
{
	int data;
	struct node *next;
};
struct node * create(int n)
{
	struct node *l,*f,*t;
	f=NEWNODE;
	printf("Enter the data : ");
	scanf("%d",&f->data);
	//f->next=NULL;
	t=f;

	for(int i=2;i<=n;i++)
	{
		l=NEWNODE;
		printf("Enter the data : ");
		scanf("%d",&l->data);
		l->next=NULL;
		t->next=l;
		t=t->next;
	}
	t->next=f;

	return f;

}
void display(struct node *f )
{
	struct node *t;
	t=f;
	do
	{
		printf(" %d ",t->data);
		t=t->next;
	}while(t!=f);
	printf("\n");
} 
struct node * add_first(struct node *f)
{
	struct node * t;
	t=NEWNODE;
	printf("Enter the first node data : ");
	scanf("%d",&t->data);

	t->next=f;
	f=t;

	return f;
}
struct node * add_last(struct node *f)
{
	struct node *t,*l;
	t=NEWNODE;
	printf("Enter the last node data : ");
	scanf("%d",&t->data);
	t->next=NULL;

	for(l=f;l->next!=NULL;l->next);
	l->next=t;

		return f;
}
struct node * earseall(struct node *f)
{
	struct node *t;
	t=f;
	f=f->next;
	t->next=NULL;
	while(f!=NULL)
	{
		t=f;
		f=f->next;
		free(t);
	}
	return f;
}
int main()
{
	struct node *head;
	int n;

	printf("How many nodes you want : ");
	scanf("%d",&n);

	head=create(n);

	printf("LIKEDLIST : ");
	display(head);

	printf("Add to First node : \n");
	head=add_last(head);

	printf("LIKEDLIST : ");
	display(head);

	earseall(head);

	return 0;
}