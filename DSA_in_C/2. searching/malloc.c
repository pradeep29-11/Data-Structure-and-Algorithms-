#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int *p;

	printf("How amny number ypu want to store : ");
	scanf("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	if(n<=0)
	{
		printf("Inavlis input !");
		exit(0);
	}
	if(p==NULL)
	{
		printf("Insufficant memory !");
		exit(0);
	}

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&p[i]);
	}
	printf("Array : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}

	free(p);
	return 0;
}