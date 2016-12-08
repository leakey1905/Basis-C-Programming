#include "stdio.h"
#include "string.h"

int main(int argc, char * argv[])
{
	if (strstr(*(argv + 1), *(argv + 2)) == NULL)
		printf("The second string is NOT a sub-string of the first one.");
	else
		printf("The second string IS a sub-string of the frist one.");
	return 0;
}
