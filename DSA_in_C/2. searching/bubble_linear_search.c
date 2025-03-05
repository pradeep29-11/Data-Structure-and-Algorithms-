#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	printf("Array : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n\n");
}
void bubble_sort(int a[],int n)
{
	int temp,flag;

	for(int i=n-1;i>=0;i--)
	{
		flag=0;
		for(int j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag++;
				temp  =a[j];
				a[j]  =a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
		{
			break;
		}
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
		if(a[i]>key)
		{
			break;
		}
	}
		return -1;
}
int main()
{
	int a[50],n,key,pos;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	printf("Accepting Array : \n\n");
	accept(a,n);

	printf("Which number you want to search : ");
	scanf("%d",&key);

	printf("Before sorting Array : \n");
	display(a,n);

	bubble_sort(a,n);

	printf("After sorting Array : \n");
	display(a,n);

	pos=linear_search(a,n,key);

	if(pos==-1)
	{
		printf("%d number is not ",key);
	}
	else
	{
		printf("%d number is found at %d position ",key,pos);
	}

	return 0;
}