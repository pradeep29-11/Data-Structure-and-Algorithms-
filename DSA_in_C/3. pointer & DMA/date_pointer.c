#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
int main()
{
	struct date d;
	struct date *p;
	p=&d;
	printf("Enter the day : ");
	scanf("%d",&p->day);

	printf("Enter the month : ");
	scanf("%d",&p->month);

	printf("Enter the year : ");
	scanf("%d",&p->year);

	printf("Date : %d-%d-%d",p->day,p->month,p->year);

	return 0;
}