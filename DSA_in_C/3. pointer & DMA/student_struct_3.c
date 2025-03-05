#include<stdio.h>
struct student
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	struct student s={16,"Aniket jumde",9.5};

	printf("Data : %d %s %.2f ",s.rno,s.name,s.per);
	return 0;
}