#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc(sizeof(struct node));
struct node
{
	int data;
	struct node *next;
};
struct node* create(int n)
{
	struct node *f,*l,*p;

	f=NEWNODE;
	printf("Enter the data : ");
	scanf("%d",&f->data);
	f->next=NULL;
	l=f;

	for(int i=2;i<=n;i++)
	{
		p=NEWNODE;
		printf("Enter the data : ");
		scanf("%d",&p->data);

		l->next=p;
		l=l->next;
		l->next=NULL;
	}
		return f;
}
struct node*  new_node(struct node *p)
{
	struct node *l;
	l=NEWNODE;
	printf("Enter the data : ");
	scanf("%d",&l->data);
	l->next=p;
	p=l;
		return p;
}
struct node* add_last_node(struct node *p)
{
	struct node *l,*q;

	for(l=p;l->next!=NULL;l=l->next);
	q=NEWNODE;
	printf("Enter the data : ");
	scanf("%d",&q->data);

	l->next=q;
	q->next=NULL;

	return p;
}
struct node* display(struct node *p)
{
	struct node *t;
	for(t=p;t!=NULL;t=t->next)
	{
		printf("%d ",t->data);
	}
	printf("\n");
}
struct node* first_free(struct node *p)
{
	struct node *l;
	l=p;
	p=p->next;
	l->next=NULL;
	free(l);
	return p;
}
struct node* last_free(struct node *x)
{
	struct node *l,*p;
	for(l=x;l->next!=NULL;l=l->next)
	{
		p=l;
	}
	free(l);
	p->next=NULL;
	return x;
	
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
	struct node *p=NULL;
	int n;

	printf("How amny node you want : ");
	scanf("%d",&n);

	p=create(n);

	printf("LinkedList : ");
	display(p);

	p=new_node(p);
	printf("New Likedlist : ");
	display(p);

	p=first_free(p);

	printf("After the delete First node : ");
	display(p);

	p=add_last_node(p);
	printf("Addting Node to last : ");
	display(p);

	p=last_free(p);
	printf("After deletting a last node : ");
	display(p);
	
	free(p);
	return 0;
}