#include <stdio.h>
#define p 22/7
int main()
{
	float radius, area;
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area= p*radius*radius;
	printf("area of the circle = %.2f\n", area);
}