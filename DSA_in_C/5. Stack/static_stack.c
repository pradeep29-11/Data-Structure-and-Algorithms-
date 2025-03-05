#include<stdio.h>
#include<Stdlib.h>
#define BOTTOM -1
#define size 3

int stack[size];
int top;
void init()
{
	top=BOTTOM;
}
int isempty()
{
	if(top==BOTTOM)
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
	if(top==size)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int data)
{
	if(isfull())
	{
		printf("Stack is full\n");

	}
	else
	{
		top++;
		stack[top]=data;
	}
}
int poop()
{
	if(isempty())
	{
		printf("Stack is Empty\n");
	}
	else
	{
		int data=stack[top];
		top--;
		return data;
	}
}
int peek()
{
	if(isempty())
	{
		printf("Stack is Empty\n");
	}
	else
	{
		int data=stack[top];
		return data;
	}
}
int main()
{
	init();

	while(1)
	{
		int choice;
		printf("--------------\n");
		printf("1. push\n");
		printf("2. poop\n");
		printf("3. peek\n");
		printf("4.Exit\n");

		printf("Enter the choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				if(isfull())
				{
					printf("Stack is full\n");
				}
				else
				{
					int data;
					printf("Enter the data : ");
					scanf("%d",&data);
					push(data);
				}
				break;
			case 2:
				if(isempty())
				{
					printf("Stack is Empty\n");
				}
				else
				{
					int data;
					data=poop();
					printf("data is :%d\n",data);
				}
				break;
			case 3:
				if(isempty())
				{
					printf("Stack is full\n");
				}
				else
				{
					int data;
					data=peek();
					printf("The data is : %d\n",data);
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Input\n");
		}
	}


	return 0;
}	