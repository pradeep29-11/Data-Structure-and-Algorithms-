#include<stdio.h>

void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

int linear_search(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[50],n,key,pos;

	printf("Enter the number : ");
	scanf("%d",&n);

	accept(a,n);

	printf("Enter the search element : ");
	scanf("%d",&key);

	printf("array : ");
	display(a,n);

	pos=linear_search(a,n,key);

	if(pos!=-1)
	{
		printf("The %d found at position %d\n",key,pos);
	}
	else
	{
		printf("The element is not found %d",key);
	}

	return 0;
}