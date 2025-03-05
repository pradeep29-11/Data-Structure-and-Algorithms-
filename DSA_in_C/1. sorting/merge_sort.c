#include<stdio.h>
void accept(int a[], int n)
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
void merge(int a[],int lb,int mid,int ub)
{
	int temp[50],i,j,k;
	i=lb;
	j=mid+1;
	k=0;
	while(i<=mid && j<=ub)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=ub)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	k=0;
	for(int i=lb;i<=ub;i++,k++)
	{
		a[i]=temp[k];

	}

}
void merge_sort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}

}
int main()
{
	int a[50],n;
	
	printf("How many number you want to sort : ");
	scanf("%d",&n);

	printf("Accepting array : ");
	accept(a,n);

	printf("Before sorting : ");
	display(a,n);

	merge_sort(a,0,n-1);

	printf("After sorting : ");
	display(a,n);

	return 0;
}
