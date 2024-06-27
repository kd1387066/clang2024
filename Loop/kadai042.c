#include<stdio.h>
main()
{
	int gokei, su;
	
		gokei = 0;
		su = 0;
		printf("%d", su);
		scanf("%d", &su);
	while (gokei <= 300) {
		gokei += su;
		printf("%d+",su);
		scanf("%d", &su);

		

	}
	printf("=%d",gokei);


}