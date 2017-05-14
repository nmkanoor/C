#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int rad;
	float PI = 3.14, area, ci;
	
	printf("Enter radius of circle: ");
	scanf("%d", &rad);

	area = PI * rad * rad;
	printf("Area of circle: %f\n", area);
	
	ci = 2 * PI * rad;
	printf("Circumference : %f\n", ci);

	return (0);
}
