#include<stdio.h>
#include <stdlib.h>
#define MAX_LEN 100
 
int main(int argc, char *argv[]) 
{
	char ClassName[MAX_LEN];
	int exam_grades[5];
	int hw_grades[10];
	int quiz_grades[8];
	int TestSumAvg; 
	int HWSumAvg; 
	int QuizSumAvg;
	int TestSum2;
	int HWSum2;
	int QuizSum2;
	int TotalSum;
	float grade;
	int classnum;

	printf("How many classes did you take? ");
	scanf("%d", &classnum);
	
	int count = 1;
	while(count<= classnum)
	{
		printf("Which class are we calculating the final grade for? ");
		scanf("%s", ClassName);
		printf("What are your five exam grades? ");
		scanf("%d %d %d %d %d", &exam_grades[0], &exam_grades[1], &exam_grades[2], &exam_grades[3], &exam_grades[4]);
        	int TestSum = 0;
        	for(int i = 0; i < 5; i++)
		{
           		TestSum = TestSum + exam_grades[i];
        	}
		printf("What are your ten homework grades? ");
		scanf("%d %d %d %d %d %d %d %d %d %d", &hw_grades[0], &hw_grades[1], &hw_grades[2], &hw_grades[3], &hw_grades[4], &hw_grades[5], &hw_grades[6], &hw_grades[7], &hw_grades[8], &hw_grades[9]);

        	int HWSum = 0;
        	for(int i = 0; i < 10; i++)
		{
           		HWSum = HWSum + hw_grades[i];
        	}
	
		printf("What are your eight quiz grades? ");
		scanf("%d %d %d %d %d %d %d %d", &quiz_grades[0], &quiz_grades[1], &quiz_grades[2], &quiz_grades[3], &quiz_grades[4], &quiz_grades[5], &quiz_grades[6], &quiz_grades[7]);
		
        	int QuizSum = 0;
        	for(int i = 0; i < 8; i++)
		{
           		QuizSum = QuizSum + quiz_grades[i];
        	}
	

		TestSumAvg = TestSum/5;
		TestSum2 = TestSumAvg*0.5;
		HWSumAvg = HWSum/10;
		HWSum2 = HWSumAvg*0.1;
		QuizSumAvg = QuizSum/8;
		QuizSum2 = QuizSumAvg*0.4;
		TotalSum = TestSum2 + HWSum2 +QuizSum2;

		printf("Your percentage in %s is %d\n", ClassName, TotalSum);

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
		count ++;
	}
}	

	 


