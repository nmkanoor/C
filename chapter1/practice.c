#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char name[10];
	int x[10];
	fprintf(stdout, "name size: %d\n", sizeof(name));
	fprintf(stdout, "int size: %d\n", sizeof(x));
	fprintf(stderr, "stderr name size: %d\n", sizeof(name));
	fprintf(stderr, "stderr int size: %d\n", sizeof(x));
	return 0;
}
