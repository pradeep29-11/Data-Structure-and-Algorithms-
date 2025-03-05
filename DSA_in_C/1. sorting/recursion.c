#include<Stdio.h>
void display(int n)
{
	if(n>=0)
	{
		printf("Hello !!\n");
		display(n-1);
	}
}
int main()
{
	int n;

	printf("How many time you want to print : ");
	scanf("%d",&n);

	display(n);
	return 0;
}