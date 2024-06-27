#include<stdio.h>
main() {
	int gokei, i, s;

	;
	i = 0;
	gokei = 0;
	printf("®”F");

	while (scanf("%d", &s) != EOF) {
		printf("®”F");
		gokei +=  s;
		i++;
	}
	printf("‡Œv%d •½‹Ï%.2f", gokei, (float)gokei / i);
}
