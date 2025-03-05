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
	printf("Array : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n\n");
}
void insertion_sort(int a[],int n)
{
	int key,j;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<key)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=key;
	}
}
int main()
{
	int a[50],n;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	accept(a,n);

	printf("Before sorting : ");
	display(a,n);

	insertion_sort(a,n);

	printf("After sorting : ");
	display(a,n);

	return 0;
}