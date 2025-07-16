#include <stdio.h>
int main()
{
	int x;
	int y;
	int result;
	
	printf(" enter the number of x:");
	scanf("%d", & x);

    printf(" enter the number of y:");	
    scanf("%d", & y);
	
	result = (x + y )* (x + y);
	
	printf("the result is : %d",result);
	
}