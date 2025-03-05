#include<stdio.h>
#include<stdlib.h>
#define BOTTOM -1
#define size 5

int front,rear;
int queue[size];
void init()
{
	front=BOTTOM;
	rear=BOTTOM;
}
int isempty()
{
	if(front==rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull()
{
	if(rear==size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void addq(int data)
{
	if(isfull())
	{
		printf("Queue is Full\n");
	}
	else
	{
		rear++;
		queue[rear]=data;
		printf("data is added sucessfull\n",data);
	}
}
int delq()
{
	if(!isempty())
	{
		front++;
		return queue[front];
	}
}
int peek()
{
	if(!isempty())
	{
		return queue[front+1];
	}
}
int main()
{
	int choice,data;
	init();
	
	while(1)
	{
		printf("---------------------\n");
		printf("1. addq\n");
		printf("2. delq\n");
		printf("3. peek\n");
		printf("4. exit\n");

		printf("Enter the your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				if(isfull())
				{
					printf("Queue is full\n");
				}
				else
				{
					printf("Enter the data : ");
					scanf("%d",&data);
					addq(data);
				}
				break;
			case 2:
				if(isempty())
				{
					printf("Queue is empty\n");
					}
				else
				{
					int data=delq();
					printf("Data is %d\n",data);
				}
				break;
			case 3:
				if(isempty())		
				{
					printf("Queue is Empty\n");
				}

				else
				{
					int data=peek();
					printf("Data is %d",data);
				}
				break;
				case 4:
					exit(0);
					break;
				default:
				printf("Invalid input\n");


		}
	}
	return 0;
}