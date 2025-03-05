#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[50][50],temp[50][50],row,column,z,b,k,i,j;

	printf("How many rows you want to store : ");
	scanf("%d",&row);

	printf("How many column you want to store : ");
	scanf("%d",&column);

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Enter the number : ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	z=0;
	b=0;
	k=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(a[i][j]==0)
			{
				z++;
			}
			else
			{
				b++;
			}

		}
		
	}
	if(z<b)
		{
			printf("The given matrix is not sparse matrix !!");
			exit(0);
		}
		else
		{
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
					printf("%d  ",temp[i][j]);
				}
				printf("\n");
			}

		}

	
	return 0;
}