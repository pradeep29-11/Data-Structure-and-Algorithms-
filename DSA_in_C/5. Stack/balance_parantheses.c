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
	
	return top==BOTTOM;
}
int isFull()
{
	return top==SIZE-1;
}
void push(char ch)
{
	if(!isFull())
	{
		top++;
		stack[top]=ch;
	}
}
char poop()
{
	if(!isEmpty())
	{
		char ch=stack[top];
		top--;
		return ch;
	}
}
char peek()
{
	if(!isEmpty())
	{
		return stack[top];
	}
} 

int  balance(char ch[])
{
	for(int i=0;ch[i];i++)
	{
		if(ch[i]=='(' || ch[i]=='[' || ch[i]=='{')
		{
			push(ch[i]);
		}
		else if(ch[i]==')' || ch[i]==']' || ch[i]=='}')
		{
			if(isEmpty())
			{
				return 0;
			}
		}
		char exp=poop();
		
		if((ch[i]==')' && exp!='(') || (ch[i]==']' && exp!='[') || (ch[i]=='}' && exp!='{'))
		{
			return 0;
		}
		
	}
	return isEmpty();
}
int main()
{
	char ch[]="{[]()}";

	
	if(balance(ch))
	{
		printf("balance\n");
	}
	else
	{
		printf("Not balance\n");
	}


	return 0;
}