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
		printf("%d ",a[i]);
	}
}

void insertion_sort(int a[],int n)
{
	int t,j;
	for(int i=0;i<n;i++)
	{
		t=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(t<a[j])
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=t;
	}
}
int main()
{
	int a[50],n;

	printf("How many element you want : ");
	scanf("%d",&n);

	accept(a,n);

	printf("Before sorting : ");
	display(a,n);

    insertion_sort(a,n);
	
	printf("\nAfter sorting : ");
	display(a,n);
	return 0;
}