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
		printf("Enter the Edge (vi vj) : ");
		scanf("%d %d",&i,&j);

		G[i][j]=1;
	}
}
void display()
{
	printf("\n Adjacency Matrix\n");
	printf("---------------------------\n");
	for(int i=0;i<nov;i++)
	{
		for(int j=0;j<nov;j++)
		{
			printf("%d ",G[i][j]);
		}
		printf("\n");
	}
}
int sum_of_row(int i)
{
	int sum=0;
	for(int j=0;j<nov;j++)
	{
		sum=sum+G[i][j];
	}
	return sum;
}
int sum_of_column(int j)
{
	int sum=0;
	for(int i=0;i<nov;i++)
	{
		sum=sum+G[i][j];
	}
	return sum;
}
void display_degree()
{
	int in,out,total_degree;
	printf("\n Tatal Degree of Each Vertex\n");
	for(int v=0;v<nov;v++)
	{
		out=sum _of_row(v);
		in=sum_of_column(v);
		total_degree=in+out;
		printf("V%d: Indegree=%d Outdegree=%d Totaldegree=%d\n",v,in,out,total_degree);
	}
}
int main()
{
	accept();
	display();
	display_degree();
	return 0;
}