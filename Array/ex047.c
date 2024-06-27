#include<stdio.h>
main() {
	float su, i,gokei;
	int x[][]{} {} {} {};
	
	for (i = 0, gokei = 0; i <= 1; i++) {
		printf("x[0][%d]=\n", i);
		scanf("%f" & su);
		gokei += x[0][i];
	}
	printf("0s–Ú‚Ì•½‹Ï=%.2f", gokei / 2);

	for (i = 0, gokei = 0; i <= 1; i++) {
		printf("x[1][%d]=\n", i);
		scanf("%f" & su);
		gokei += x[1][i];
	}
	printf("1s–Ú‚Ì•½‹Ï=%.2f", gokei / 2);

	for (i = 0, gokei = 0; i <= 1; i++) {
		printf("x[0][%d]=\n", i);
		scanf("%f" & su);
		gokei += x[2][i];
	}
	printf("2s–Ú‚Ì•½‹Ï=%.2f", gokei / 2);

}