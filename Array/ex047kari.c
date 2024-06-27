#include<stdio.h>
main() {
	int i, j ;
	float x[3][2],gokei;
	for (i = 0; i < 3; i++) {
		
		for (j = 0, gokei = 0; j < 2; j++) {
			printf("x[%d][%d]\n", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", i,gokei / 2);
	}

}