#include<stdio.h>
main()
{
	int su;
	su = 1;
	do {
		
		printf("%d  ", su);
		su++;
		if (su == 11)
		{
			printf("\n");
		}
	} while (su <= 20);
}