#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))
#define START NULL
struct node
{
	int data;
	struct node *next;
};
struct node *rear,*front;
void init()
{
		rear=START;
		front=START;
}
int isempty()
{
	if(front==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void addQ(int item)
{
	struct node *t;
	t=NEWNODE;
	t->data=item;
	t->next=NULL;
	printf("The number is added to Queue %d\n",item);
	if(rear==NULL)
	{
		front=t;
		rear=t;
	}
	else
	{
		rear->next=t;
		rear=rear->next;
	}
} 
int delQ()
{
	if(!isempty())
	{
		struct node *t;
		int num=front->data;
		if(front->next==NULL)
		{
			free(front);
			front,rear=NULL;
			return num;
		}
		t=front;
		front=front->next;
		free(t);
		return num;

	}
}
int peek()
{
	if(!isempty())
	{
		return front->data;
	}
}
int main()
{
	init();
	int choice,n,data;
	while(1)
	{
		printf("------------------------------\n");
		printf("1. AddQ\n");
		printf("2. delQ\n");
		printf("3. peek\n");
		printf("4. exit\n");

		printf("Enter the choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
					printf("Enter the data : ");
					scanf("%d",&n);
					addQ(n);
					printf("The data is Added Successfuly\n");
					break;
			case 2:
				if(isempty())
				{
					printf("Queue is Empty\n");
				}
				else
				{
					data=delQ();
					printf("The Deleted data : %d\n",data);

				}
				break;
			case 3:
				if(isempty())
				{
					printf("Queue is Empty\n");
				}
				else
				{
					data=peek();
				    printf("The peeked data is %d\n",data);
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Input\n");
				break;

		}
	}
	return 0;
}