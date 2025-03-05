#include<stdio.h>
#include<stdlib.h>
#define NEWENODE (struct node *)malloc(sizeof(struct node))
struct node 
{
	int data;
	struct node *next;
};
struct node * create(int n)
{
	struct node *f,*l,*t;
	f=NEWENODE;
	printf("Enter the data : ");
	scanf("%d",&f->data);
	f->next=NULL;
	t=f;
	for(int i=2;i<=n;i++)
	{
		l=NEWENODE;
		printf("Enter the data : ");
		scanf("%d",&l->data);
		l->next=NULL;
		t->next=l;
		t=t->next;
	}
	return f;
}
void display(struct node *f)
{
	struct node *l;
	for(l=f;l!=NULL;l=l->next)
	{
		printf(" %d ",l->data);
	}
	printf("\n");
}
struct node * add_node(struct node *f,int n)
{
	struct node *l,*t;
	t=NEWENODE;
	printf("Enter the data : ");
	scanf("%d",&t->data);
	if(n==1)
	{
		t->next=f;
		f=t;
		return f;
	}
	l=f;
	for(int i=1;i<=n-2;i++)
	{
		l=l->next;
	}
	if(l==NULL)
	{
		printf("Inavlid position\n");
		free(t);
		return f;
	}

	t->next=l->next;
	l->next=t;
	return f;
}
int main()
{
	struct node *head;
	int choice,n;
	printf("How many nodes you want : ");
	scanf("%d",&n);
	head=create(n);

	while(1)
	{
		printf("-------------------\n");
		printf("1. display\n");
		printf("2. Add node\n");
		printf("3. Free node\n");
		printf("4. exit\n");

		printf("Enter the choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("LINKEDLIST : ");
				display(head);
				break;
			case 2:
				printf("Which position you want to add node : ");
				int a;
				scanf("%d",&a);
				head=add_node(head,a);
				break;
			case 3:
				break;
			case 4:
				exit(0);
			default:
				printf("Inavlid Input\n");

		}
	}
	return 0;
}