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
	printf("\n");
}
void heaping(int a[],int n,int up)
{
	int p,left,right,t;
	int start=n/2-1;
	for(int i=start;i>=0;i--)
	{
		p=i;
		left=2*i+1;
		right=2*i+2;
		if(left<=up && right<=up)
		{
			if(a[left]<a[right])
			{
				if(a[p]<a[right])
				{
					t=a[p];
					a[p]=a[right];
					a[right]=t;
				}
				
			}
			else
			{
				if(a[p]<a[left])
				{
					t=a[p];
					a[p]=a[left];
					a[left]=t;
				}
			}

		}
		else if(left<=up)
		{
			if(a[p]<a[left])
			{
				t=a[p];
				a[p]=a[left];
				a[left]=t;
			}	
		}
	}
}
void heap_sort(int a[],int n)
{
	int t;
	
	for(int up=n-1;up>=0;up--)
	{
		heaping(a,n,up);
		t=a[0];
		a[0]=a[up];
		a[up]=t;
	}
}
int main()
{
	int n,a[50];

	printf("How many number : ");
	scanf("%d",&n);

	accept(a,n);

	printf("Before sort : ");
	display(a,n);

	heap_sort(a,n);

	printf("Before sort : ");
	display(a,n);

	return 0;
}