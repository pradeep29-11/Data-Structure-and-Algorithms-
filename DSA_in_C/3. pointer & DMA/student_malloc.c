#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int rno;
	char name[50];
	float per;
};
int main()
{
	struct student *p;

	p=(struct student*)malloc(sizeof(struct student));

	if(p==NULL)
	{
		printf("Insufficant memory !!");
		exit(0);
	}
	p->rno=15;
	strcpy(p->name,"Pradeep jadhav");
	p->per=90.50;

	printf("Data : %d %s %.2f ",p->rno,p->name,p->per);

	return 0;
}