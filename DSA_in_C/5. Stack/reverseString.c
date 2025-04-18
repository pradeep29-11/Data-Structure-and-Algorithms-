#include<stdio.h>
#define SIZE 10
#define BOTTOM -1
char stack[SIZE];
int top;

void init()
{
	top=BOTTOM;
}
int isEmpty()
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
int isFull()
{
	if(top==SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(char data)
{
	if(isFull())
	{
		printf("Stcak is Full !!");
	}
	else 
	{
		top++;
		stack[top]=data;
	}
}
char pop()
{
	if(isEmpty())
	{
		printf("Stack is Empty !!");
	}
	else 
	{
		char data=stack[top];
		top--;
		return data;
	}
}
int main()
{
	char str[50];

	printf("Enter the String : ");
	gets(str);

	for(int i=0;str[i]!='\0';i++)
	{
		push(str[i]);
	}
	printf("Reverse String : ");

	while(!isEmpty())
	{
		printf("%c",pop()); 
	}
	return 0;
}  