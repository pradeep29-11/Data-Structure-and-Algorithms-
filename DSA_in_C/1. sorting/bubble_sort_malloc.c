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
	
}
int main()
{
	int a[50],n;

	printf("How many number you want to store : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&a[i]);
	}


	return 0;
}