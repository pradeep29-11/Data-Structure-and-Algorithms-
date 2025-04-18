#include<stdio.h>
#define SIZE 10
#define BOTTOM -1

int queue[SIZE];
int rear,front;

void init()
{
	rear=BOTTOM;
	front=BOTTOM;
}
int isEmpty()
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
int isFull()
{
	if(rear==SIZE-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void addQ(int data)
{
	if(isFull())
	{
		printf("Queue is Full !!");
	}
	else 
	{
		queue[++rear]=data;

	}
}
int delQ()
{
	if(isEmpty())
	{
		printf("Queue is Empty !!");
	}
	else 
	{
		front++;
		return queue[front];
	}
}
int main()
{
	init();
	addQ(55);
	addQ(66);

	printf("%d ",delQ());
	printf("%d ",delQ());	

	return 0;
}