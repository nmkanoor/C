#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *fptr;
	
	if (argc < 2)
	{
		fprintf(stderr, "Provide file name\n");
		return 7;
	}

	fptr = fopen("/tmp/my.html", "w");
	fprintf(fptr, "<HEAD>Hello</HEAD>\n");
	fprintf(fptr, "<BODY>My First Page</BODY>\n");
	fclose(fptr);
	return 0;
}
