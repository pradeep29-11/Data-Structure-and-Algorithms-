#include<stdio.h>

#define SIZE 10

int g[SIZE][SIZE];
int nov;
int noe;
int visited[SIZE];

void accept()
{
	int k,m;

	printf("How many Vertices : ");
	scanf("%d",&nov);

	printf("How many Edges : ");
	scanf("%d",&noe);

	for(int i=0;i<noe;i++)
	{
		printf("Enter the Edges : ");
		scanf("%d %d",&k,&m);

		g[k][m]=1;
		g[m][k]=1;
	}
}
void dfs(int start)
{
	int stack[SIZE],top=-1;

	for(int i=0;i<nov;i++)
	{
		visited[i]=0;

		stack[++top]=start;

		while(top!=-1)
		{
			int current = stack[top--];

			if(!visited[current])
			{
				printf("%d ",current);
				visited[current]=1;

				for(int i=nov-1;i>=0;i--)
				{
					if(g[current][i]==1 && !visited[i])
					{
						stack[++top]=i;
					}
				}
			}
		}
	}
}
void display()
{
	for(int i=0;i<nov;i++)
	{
		for(int j=0;j<nov;j++)
		{
			printf("%d ",g[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int start;
	accept();
	display();
	printf("\n\n");
	printf("Enter the Start Vertex : ");
	scanf("%d",&start);

	dfs(start);
}