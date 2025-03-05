#include<stdio.h>
void accept(int x[],int y)
{
	for(int i=0;i<y;i++)
	{
		printf("Enter the array element : ");
		scanf("%d",&x[i]);
	}
}
void display(int a[],int n)
{
	printf("Array element : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n\n");
}
void global_sort(int a[],int n)
{

	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[50], n;

	printf("How many element you wamnt store : ");
	scanf("%d",&n);

	accept(a,n);
	printf("Before sorting Array : ");

	display(a,n);
	global_sort(a,n);
	printf("After sorting Array : ");
	display(a,n);
	return 0;
}