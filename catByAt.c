#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS_


void Error(char* msg)
/* print error massage and then exit program */
{
	fprintf(stderr, "Error:%s\n", msg);
	exit(1);
	return;
}

int main(int argc, char* argv[])
{
	argc = 2;
	argv[1] = "Israel1990@gmail@com";
	
	if (argc > 3 || argc <= 1 )
	{
		Error("Bad number of parameters\n");
	}

	char delim[] = "@";
	int arrayLenth = strlen(argv[1]);
	char* ptr = strtok(argv[1], delim);

	while (ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
	
	return 0;
}