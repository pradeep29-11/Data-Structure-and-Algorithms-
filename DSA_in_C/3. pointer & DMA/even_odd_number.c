#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* create(int n)
{
	struct node *p,*f,*t;

	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&p->data);
	f=p;
	f->next=NULL;
	for(int i=2;i<=n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data : ");
		scanf("%d",&t->data);
		f->next=t;
		f=f->next;
		f->next=NULL;
	}
		return p;
}
int even_odd(struct node *p)
{
	struct node *f;
	int ecnt,ocnt;
	ecnt=0;
	ocnt=0;
	printf("Even number : ");
	for(f=p;f!=NULL;f=f->next)
	{
		if(f->data%2==0)
		{
			printf("%d ",f->data);
		}
	}
	return ecnt;
}
struct node* free_node(struct node *p)
{
	struct node *l;
	      while(p!=NULL)
	      {
	      	l=p;
	      	p=p->next;
	      	free(l);
	      }
	      return p;
}
int main()
{
	struct node *p;
	int n;

	printf("how many node you want : ");
	scanf("%d",&n);

	p=create(n);

	//printf("LinkedList : ");
	even_odd(p);

	return 0;
}