#include<stdio.h>
#include<stdlib.h>
#define BOTTOM -1
#define size 5
int top;
char stack[size];
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
	if(top==size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(char *data)
{
	if(isfull())
	{
		printf("Stack is full");
	}
	else
	{
		top++;
		stack[top]=*data;
	}
}

char pop()
{
	if(!isempty())
	{
		char data=stack[top];
		top--;
		return data;
	}
}
char peek()
{
	if(isempty())
	{
		printf("Stack is full");
	}
	else
	{
		char data=stack[top];
		return data;
	}
}
int main()
{
	int choice;
	init();

	while(1)
	{
		printf("---------------------\n");
		printf("1. push\n");
		printf("2. poop\n");
		printf("3. peek\n");
		printf("4. exit\n");

		printf("Enter the option : ");
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
						getchar();
						printf("Enter the data : ");
						char data[50];
						gets(data);

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
							char data=pop();     
							printf("Data is %c\n",data);
						}
						break;
				case 3:
					if(isempty())
					{
						printf("Stack is Empty \n");
					}
					else
					{
						char data=peek();
						printf("Data is %c\n",data);

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