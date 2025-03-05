#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node* create(int n)
{
	struct node *t,*f;
	int data;
	if(n==0)
	{
		return NULL;
	}
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&data);
	t->next=NULL;
	f=t;
	t->next=create(n-1);
	return f;
}
int main()
{
	struct node *head1,*head2;
	head1=create(5);
	head2=create(2)
	return 0;
}

