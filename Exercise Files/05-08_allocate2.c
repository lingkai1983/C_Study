#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
	char *sto;
	char userInput;

	sto = (char *) malloc(sizeof(char)*SIZE);

	if( sto == NULL)
	{
		puts("Memory error");
		return(1);
	}
	else
	{
		printf("%d bytes of memory allocated at %p\n",SIZE,sto);
		printf("type something interest:");
	    fgets(sto,SIZE,stdin);
		printf("The content is: %s",sto);
	}

	return(0);
}

