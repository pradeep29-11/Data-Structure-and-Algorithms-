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
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n\n");
}
void bubble_sort(int a[],int n)
{
	int temp;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			 if(a[j]<a[j+1])
			 {
			 	temp=a[j];
			 	a[j]=a[j+1];
			 	a[j+1]=temp;
			 }
		}
	}
}
int main()
{
	int a[50],n;

	printf("How many number you want to sort : ");
	scanf("%d",&n);

	accept(a,n);

	printf("Before sorting : ");
	display(a,n);

	bubble_sort(a,n);
	printf("After sorting : ");
	display(a,n);
	return 0;
}