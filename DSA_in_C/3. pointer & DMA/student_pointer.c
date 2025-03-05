#include<stdio.h>
#include<string.h>
struct student 
{
	int rno;
	string name;
	float per;
};
int main()
{
		struct student s;
		struct student *p;

		p=&s;

		printf("Enter the Roll no of the student : ");
		scanf("%d",p->rno);

		printf("Enter the name of the student : ");
		scanf("%s",p->name);

		printf("Enter the percentage of the student : ");
		scanf("%f",p->per);

		printf("Data : %d %s %.2f ",p->rno,p->name,p->per);
		
	return 0;
}