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
int position(int a[],int lw,int up)
{
	int pivot,i,j,temp;
}
void quick_sort(int a[],int lw,int up)
{
	int j;
	if(lw<up)
	{
		j=position(a,lw,up);
		quick_sort(a,lw,j-1);
		quick_Sort(a,j+1,up);
	}
}
int main()
{
	int a[50],int n;

	printf("How many number you want to sort : ");
	scanf("%d",&n);

	printf("Accepting array : \n");
	accept(a,n);

	printf("Before sorting array : \n");
	display(a,n);

	quick_sort(a,0,n-1);

	printf("After sorting array : \n");
	display(a,n);
	return 0;
}