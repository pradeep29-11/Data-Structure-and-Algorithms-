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
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void bubble_sort(int a[],int n)
{
	int temp;
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
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

int binary__search(int a[],int n,int key)
{
	int lb,ub,mid;
	lb=0;
	ub=n-1;

	while(lb<=ub)
	{
		mid=(lb+ub)/2;

		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]<key)
		{
			lb=mid+1;
		}
		else
		{
			ub=mid-1;
		}
	}
	return -1;
}
int main()
{
	int a[50],n,key,pos;

	printf("Enter the number : ");
	scanf("%d",&n);

	accept(a,n);

	printf("Enter the search element : ");
	scanf("%d",&key);

	printf("array : ");
	display(a,n);

	bubble_sort(a,n);

	printf("\nSorted array : ");
	display(a,n);

	pos=binary__search(a,n,key);

	if(pos!=-1)
	{
		printf("\nThe %d found at position %d\n",key,pos);
	}
	else
	{
		printf("\nThe element is not found %d",key);
	}

	return 0;
}