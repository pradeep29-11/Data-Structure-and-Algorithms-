#include<stdio.h>
#define SIZE 10

int G[SIZE][SIZE];
int noe;
int nov;

void accept()
{
	int i,j;
	printf("How many Vertex you want : ");
	scanf("%d",&nov);

	printf("How many Edges you want : ");
	scanf("%d",&noe);

	for(int k=0;k<noe;k++)
	{
		printf("Enter the Edge (vi,vj) : ");
		scanf("%d %d",&i,&j);

		G[i][j]=1;
		G[j][i]=1;
	}
}
void display()
{
	for(int i=0;i<nov;i++)
	{
		for(int j=0;j<nov;j++)
		{
			printf("%d ",G[i][j]);
		}
		printf("\n");
	}
}
int sum_of_colum(int j)
{
	int sum=0;
	for(int i=0;i<nov;i++)
	{
		sum=sum+G[i][j];
	}
	return sum;
}
void total_degree()
{
	int total_degree=0;
	for(int v=0;v<nov;v++)
	{
		total_degree=sum_of_colum(v);
		printf("V%d Total Degree=%d\n",v,total_degree);
	}
}
int main()
{
	accept();
	display();
	total_degree();

	return 0;
}