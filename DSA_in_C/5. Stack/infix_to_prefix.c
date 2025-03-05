#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
#define BOTTOM -1
int stack[SIZE];
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
void push(char ch)
{
	if(!isFull())
	{
		top++;
		stack[top]=ch;
	}
}
char peek()
{
	if(!isEmpty())
	{
		return stack[top];
	}
}
char pop()
{
	if(!isEmpty())
	{
		char ch=stack[top];
		top--;
		return ch;
	}
}
struct PTAB
{
	char opr;
	int priority;
};
int operator=5;
struct PTAB optab[]={{'$',3},{'*',2},{'/',2},{'+',1},{'-',1}};

int getpriority(char ch)
{
	for(int i=0;i<operator;i++)
	{
		if(ch==optab[i].opr)
		{
			return optab[i].priority;
		}
	}
	return -1;
}
int main()
{
	char exp[100];
	printf("Enter the Expresion : ");
	scanf("%s",exp);

	for(int i=0;exp[i]!='\0';i++)
	{
		if(getpriority(exp[i])== -1)
		{
			printf("%c",exp[i]);
		}
		else
		{
			while(!isEmpty())
			{
				if(getpriority(peek())>=getpriority(exp[i]))
				{
					printf("%c",pop());
				}
				else
				{
					break;
				}
			}
			push(exp[i]);
		}
	}
	while(!isEmpty())
	{
		printf("%c ",pop());
	}
	return 0;
}