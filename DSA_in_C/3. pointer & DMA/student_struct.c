#include<stdio.h>
struct student
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	struct student s;

	printf("Enter the Roll no of the student : ");
	scanf("%d",&s.rno);

	printf("Enter the Name of the student : ");
	scanf("%s",s.name);

	printf("Enter the Percentage of the student : ");
	scanf("%f",&s.per);

	printf("Data : %d %s %.2f ",s.rno,s.name,s.per);

	return 0;
}