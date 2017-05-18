#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	for(int i=0; i < argc; i++)
		{
			fprintf(stdout,"%s\n", argv[i]);
		}
}
