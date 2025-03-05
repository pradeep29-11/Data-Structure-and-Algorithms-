#include<stdio.h>

void accept(int a[row][column],int row int ,column)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Enter the data : ");
			scanf("%d",&a[i][j])
		}
	}
}

void add(int matrix1[row][column],int matrix2[row][column],int ans[row][column],row,column)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			ans[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}

}
void display(int ans[row][column],int row,int column)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	int row,column,matrix1[50][50],matrix2[50][50],ans[50][50];

	printf("How many row you want : ");
	scanf("%d",&row);

	printf("How many column you want : ");
	scanf("%d",&column);

	accept(matrix1,row,column);
	accept(matrix2,row,column);

	add(matrix1,matrix2,ans,row,column);

	printf("Addition of Matrix : \n");
	add(ans,row,column);
	return 0;
}