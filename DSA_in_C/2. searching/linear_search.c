#include<stdio.h>
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
int linear_search(int a[] ,int n,int key)
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

	printf("How many number you want to store : ");
	scanf("%d",&n);

	printf("Accepting Array : \n");
	accept(a,n);

	printf("Which number you want search : ");
	scanf("%d",&key);

	display(a,n);

	pos=linear_search(a,n,key);

	if(pos==-1)
	{
		printf("%d is not found !!",key);
	}
	else
	{
		printf("%d is found at %d position ",key,pos);
	}
	return 0;
}