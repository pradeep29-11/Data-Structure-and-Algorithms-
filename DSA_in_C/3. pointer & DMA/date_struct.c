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

	printf("Enter the day : ");
	scanf("%d",&d.day);

	printf("Enter the month : ");
	scanf("%d",&d.month);

	printf("Enter the year : ");
	scanf("%d",&d.year);

	printf("%d-%d-%d",d.day,d.month,d.year);

	return 0;
}