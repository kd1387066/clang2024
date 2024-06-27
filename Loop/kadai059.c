#include<stdio.h>
main()
{
	int x, y,i;
	x = 1;
	y = 1;
	printf("    1  2  3  4  5  6  7  8  9\n");
	printf("-----------------------------\n");
	for (i = 1; i <= 9; i++) {
		printf("%d |", y);
		

		for (x = 1; x <= 9; x++)
		{
			printf("%2d ", x * y);
			if (x % 9 == 0)
			{
				x == 1;
				y += 1;
				
				printf("\n");
			}
		}
	}
}