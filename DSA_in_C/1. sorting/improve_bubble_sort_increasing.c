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
	printf("Array : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n\n");
}
void bubble_sort(int a[],int n)
{
	for(int i=n-1;i>0;i--)
	{
		int flag=0;
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}
int main()
{
	int a[50],n;

	printf("How many number you wamnt to store : ");
	scanf("%d",&n);

	accept(a,n);
	printf("Before sorting Array : ");
	display(a,n);

	bubble_sort(a,n);

	printf("After sorting Array : ");
	display(a,n);
	return 0;
}