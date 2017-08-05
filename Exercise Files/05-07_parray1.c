#include <stdio.h>

int main()
{
	char *gang[6] = {
		"Spanky",
		"Buckwheat",
		"Alfalfa",
		"Darla",
		"Pete the Pup",
		"Lingkai"
	};
	int x;

	for(x=0;x<6;x++)
		printf("%p\n",gang[x]);

	return(0);
}

