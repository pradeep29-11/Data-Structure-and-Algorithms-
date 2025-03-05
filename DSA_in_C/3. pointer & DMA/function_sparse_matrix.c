#include<stdio.h>
#include<stdlib.h>
void accept(int a[][],int row,int column)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Enter the number : ");
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[][],int row,int column)
{
	int a,b,i,j;
	a=0;
	b=0;
	for(int i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
}
void matrix(int a[][],int row,int column,int temp[][])
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(a[i][j]==0)
			{
				a++;
			}
			else
			{
				b++;
			}
		}
	}
	if(a>b)
	{
		printf("The given matrix is not sparse matrix ");
		exit(0);
	}
	else
	{
		int k;
		k=0;
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<column;j++)
			{
				if(a[i][j]!=0)
					{
						temp[k][0]=i;
						temp[k][1]=j;
						temp[k][2]=a[i][j];
						k++;
					
					}
			}
		}
		printf("Row colum value \n");
			for(int i=0;i<k;i++)
			{
				for(int j=0;j<3;j++)
				{
					printf("%d   ",temp[i][j]);
				}
				printf("\n");
			}
	}
}
int main()
{
	int a[50][50],temp[50][50],row,column;

	printf("How many row you want : ");
	scanf("%d",&row);

	printf("How many column you want : ");
	scanf("%d",&column);

	accept(a,row,column);

	display(a,row,column);

	matrix(a,row,column,temp);

	return 0;
}