#include<stdio.h>
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	printf("Array element : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
int main()
{
	int a[50],n;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	accept(a,n);
	display(a,n);
	return 0;
}
