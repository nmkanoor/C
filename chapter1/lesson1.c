#include <stdio.h> 
#include <stdlib.h>
#define MAX_LEN 100

int main(int argc, char *argv[])
{
	char name[MAX_LEN];
	int age;

	printf("What is your name? ");
	scanf("%s", name);
	printf("Your name is %s\n", name);
	printf("What is your age? ");
	scanf("%d", &age);
	printf("Your age is %d\n", age);
	return 0;
}
