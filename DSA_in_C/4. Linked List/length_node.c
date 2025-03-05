#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* create(int n)
{
	struct node *f,*l,*t;

	f=(struct node*)malloc(sizeof(struct node));

	printf("Enter the data : ");
	scanf("%d",&f->data);
	f->next=NULL;
	l=f;
	for(int i=2;i<=n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data : ");
		scanf("%d",&t->data);

		l->next=t;
		l=l->next;
		l->next=NULL;

	}
	return f;
}
int add_node(struct node *p)
{
	struct node *l;
	int data=0;
	for(l=p;l!=NULL;l=l->next)
	{
		data=data+l->data;
	}
	return data;
}
void display(struct node *p)
{
	struct node *f;
	for(f=p;f!=NULL;f=f->next)
	{
		printf("%d ",f->data);
	}
	printf("\n");
}
int length_node(struct node *n)
{
	struct node *p;
	int cnt=0;
	for(p=n;n!=NULL;n=n->next)
	{
		cnt++;
	}
		return cnt;
}
int main()
{
	struct node *p=NULL;
	int n=0,z;

	printf("How many node you want : ");
	scanf("%d",&n);
	p=create(n);

	printf("Linkedlist : ");
	display(p);

	n=length_node(p);
	printf("Length of the node : %d\n",n);

	z=add_node(p);
	printf("Sum of the node data : %d",z);

	return 0;
}