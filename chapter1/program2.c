#include<stdio.h>
 
int main(int argc, char *argv[]) 
{
	int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, TestSum, HWSum, QuizSum, TestSum2, HWSum2, QuizSum2,TotalSum;
	float grade;
	
	printf("What are your five exam grades? ");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	
	printf("What are your ten homework grades? ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &s6, &s7, &s8, &s9, &s10, &s11, &s12, &s13, &s14, &s15);

	printf("What are your eight quiz grades? ");
	scanf("%d %d %d %d %d %d %d %d", &s16, &s17, &s18, &s19, &s20, &s21, &s22, &s23);
	
	TestSum = (s1 + s2 +s3 +s4 +s5)/5;
	TestSum2 = TestSum*0.5;
	HWSum = (s6+ s7 + s8 + s9 + s10 + s11 + s12 + s13 + s14 + s15)/10;
	HWSum2 = HWSum*0.1;
	QuizSum = (s16 + s17 + s18 + s19 + s20 + s21 + s22 + s23)/8;
	QuizSum2 = QuizSum*0.4;
	TotalSum = TestSum2 + HWSum2 +QuizSum2;

	printf("Your percentage is %d\n", TotalSum);

	if(TotalSum>=90)
		printf("Your Grade: A\n");
	else if(TotalSum>=80)
		printf("Your Grade:B\n");
	else if(TotalSum>=70)
		printf("Your Grade:C\n");
	else if (TotalSum>=60)
		printf("Your Grade:D\n");
	else
		printf("You have Failed\n");
}
