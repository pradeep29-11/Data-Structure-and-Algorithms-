#include<stdio.h>
#include<stdlib.h>
#define NEWENODE (struct node*)malloc(sizeof(struct node))

struct node *top;

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
void init()
{
	top=NULL;
}
int isempty()
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int item)
{
	struct node *f,*l;

	f=NEWENODE;
	f->data=item;
	f->prev=NULL;
	f->next=NULL;
	if(top==NULL)
	{
		top=f;
		return;
	}
	else
	{
		top->next=f;
		f->prev=top;
		top=top->next;
	}
}
int poop()
{
	if(isempty())
	{
		printf("Stack is isempty\n");
	}
	else
	{
		struct node *f;
		int data=top->data;
		f=top;
		top=top->prev;
		free(f);
		if(top!=NULL)
		{
			top->next=NULL;
		}
		return data;
	}
}
int peek()
{
	if(isempty())
	{
		printf("Stack is Eempty\n");
	}
	else
	{
		return top->data;
	}
}
int main()
{
	while(1)
	{
		int choice;
		printf("---------------\n");
		printf("1. push\n");
		printf("2. poop\n");
		printf("3. peek\n");
		printf("4. exit\n");

		printf("Enter the choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:				
				printf("Enter the data : ");
				int data;
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				if(isempty())
				{
					printf("Stack is Empty\n");
				}
				else
				{
					int data=poop();
					printf("Data is : %d\n",data);
				}
				break;
			case 3:
				if(isempty())
				{
					printf("Satck is full\n");
				}
				else
				{
					int data=peek();
					printf("Data is : %d\n",data);
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Inavlid input\n");



		}
	}
	return 0;
}