#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{

	struct node *p,*q,*r;

	p=(struct node*)malloc(sizeof(struct node));
	q=(struct node*)malloc(sizeof(struct node));
	r=(struct node*)malloc(sizeof(struct node));

	p->data=10;
	q->data=11;
	r->data=12;

	p->next=q;
	p->next->next=r;
	p->next->next->next=NULL;

	printf("Data : %d %d %d ",p->data,p->next->data,p->next->next->data);

	return 0;
}
