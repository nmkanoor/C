#include<stdio.h>

int students;
printf("How many students? ");
scanf("%d", &students);

int count =1;
while(count <= students)
{  
	struct student
	{
 		char name[10];
 		int grades;
	};
	int main()
	{
 	struct student std;
 	printf("What is the student name: ");
 	scanf("%s",&std.name);
 	printf("What is his average ");
 	scanf("%d", &std.grades);
 	show(std);
	}
}



