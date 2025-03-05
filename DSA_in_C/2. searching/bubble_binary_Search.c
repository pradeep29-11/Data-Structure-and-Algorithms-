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
void bubble_Sort(int a[],int n)
{
	int temp;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int binary_search(int a[],int n,int key)
{
	int lw,up,mid;
	lw=0;
	up=n-1;

	while(lw<=up)
	{
		mid=(lw+up)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			lw=mid+1;
		}
		else
		{
			up=mid-1;
		}
	}
		return -1;

}
int main()
{
	int a[50],n,key,pos;

	printf("How number you want to store : ");
	scanf("%d",&n);

	printf("Accepting element : \n");
	accept(a,n);

	printf("Before sorting : \n");
	display(a,n);

	bubble_Sort(a,n);
	printf("After sorting : \n");
	display(a,n);

	printf("Which number you want to search : ");
	scanf("%d",&key);

	pos=binary_search(a,n,key);
	if(pos==-1)
	{
		printf("%d is not found in array ",key);
	}
	else
	{
		printf("%d is found at %d position ",key,pos);
	}
	return 0;
}