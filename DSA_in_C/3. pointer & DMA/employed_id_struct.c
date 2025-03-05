#include<stdio.h>
struct employed
{
	int id;
	char name[50];
	float salary;
};
int main()
{
	struct employed c;

	printf("Enter the Id of the employed : ");
	scanf("%d",&c.id);

	printf("Enter the name of the employed : ");
	scanf("%s",&c.name);

	printf("Enter the salary of the employed : ");
	scanf("%f",&c.salary);

	printf("Data : %d %s %.2f ",c.id,c.name,c.salary);


	return 0;
}