#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	struct student s;

	s.rno=15;
	strcpy(s.name,"pradeep jadhav");
	s.per=90.5;

	printf("Data : %d %s %.2f ",s.rno,s.name,s.per);

	return 0;
}