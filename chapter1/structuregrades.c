#include <stdio.h>
#include <string.h>
 
struct Students {
   	char name[50];
   	int classnum;
};

int main( ) {
	struct Students Student1;
	printf("What is your name? ");
	scanf("%s", &Student1.name);
	printf("How many classes have you taken this semester? ");
	scanf("%d", &Student1.classnum);
	
	printf("Name: %s\n", Student1.name);
	printf("Classes: %d\n", Student1.classnum);
}  
