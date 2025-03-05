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

void merg(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	int temp[50];
	i=lb;
	j=mid+1;
	k=0;

	while(i<=mid && j<=ub)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;	
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=ub)
	{
		temp[k]=a[j];
		k++;
		j++;
	}


	for (int i = lb, k = 0; i <= ub; i++, k++)
	{
		a[i]=temp[k];
	}
}

void merg_sort(int a[],int lb,int up)
{
	int mid;
	if(lb<up)
	{
		mid=(lb+up)/2;
		merg_sort(a,lb,mid);
		merg_sort(a,mid+1,up);
		merg(a,lb,mid,up);
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
	
    merg_sort(a,0,n-1);
	
	printf("After sorting : ");
	display(a,n);
	
	return 0;
}