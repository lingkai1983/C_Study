#include <stdio.h>

void soup();

int main()
{
	printf("For breakfast I had ");
	soup();
	printf("For lunch I had ");
	soup();
	printf("For dinner I had ");
	soup();

	return(0);
}

void soup(void)
{
	puts("Pea green soup!");
}


