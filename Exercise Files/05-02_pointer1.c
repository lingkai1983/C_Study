#include <stdio.h>

int main()
{
	int pokey;
	int *p;

	p = &pokey;

	printf("The address of `pokey` is %p\n",&pokey);
    printf("p is pointing to address of pokey, which is %p\n",p);

	return(0);
}

