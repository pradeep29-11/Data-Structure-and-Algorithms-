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

void heaping(int a[],int n,int l)
{
	int start=n/2-1;
	int lc,rc,p,temp;
	for(int i=start;i>=0;i--)
	{
		p=i;
		lc=2*i+1;
		rc=2*i+2;

		if(lc<=l && rc<=l)
		{
			if(a[lc]>a[rc])
			{
				if(a[lc]>a[p])
				{
					temp=a[p];
					a[p]=a[lc];
					a[lc]=temp;
				}
			}
			else
			{
				if(a[rc]>a[p])
				{
					temp=a[p];
					a[p]=a[rc];
					a[rc]=temp;
				}
			}

		}
		else if(lc<=l)
		{
			if(a[lc]>a[p])
				{
					temp=a[p];
					a[p]=a[lc];
					a[lc]=temp;
				}

		}
	}
}
void heap_sort(int a[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		heaping(a,n,i);
		int temp=a[0];
		a[0]=a[i];
		a[i]=temp;
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

    heap_sort(a,n);
	
	printf("\nAfter sorting : ");
	display(a,n);

	return 0;
}