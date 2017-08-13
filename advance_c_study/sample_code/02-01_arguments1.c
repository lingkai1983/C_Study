#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("There were %d command line arguments\n",argc);
	printf("The first argument is %s\n", argv[0]);

	return(0);
}

