#include<stdio.h>
 
int main(int argc, char *argv[]) 
{
	int s1, s2, s3, s4, s5, sum, total = 500;
	float grade;
	
	printf("What are your five exam grades? ");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	
	sum = s1 + s2 +s3 +s4 +s5;
	printf("Your total is %d/500\n", sum);
	grade = (sum*100)/total;
	printf("Your percentage is %f\n", grade);

	if(grade>=90)
		printf("Your Grade: A\n");
	else if(grade>=80)
		printf("Your Grade:B\n");
	else if(grade>=70)
		printf("Your Grade:C\n");
	else if (grade>=60)
		printf("Your Grade:D\n");
	else
		printf("You have Failed\n");
}
