#include<stdio.h>
int main()
{
	int radius;
	float area;

	printf("Enter the radius of the circle : ");
	scanf("%d",&radius);

	area=3.14*radius*radius;

	printf("Area of the circle : %f",area);
	return 0;
}