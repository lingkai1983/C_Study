#include <stdio.h>

int main()
{
	char pokey;
	char *p;

	pokey = 'L';
	p = &pokey;

	printf("The address of `pokey` is %p\n",&pokey);
	printf("The contents of `pokey` are %c\n",pokey);

	printf("The address of `pokey` is %p\n",p);
	printf("The contents of `pokey` are %c\n",*p);

	return(0);
}

