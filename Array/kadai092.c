#include<stdio.h>
main() {
	int a[10],c[10],i;
	for (i = 0; i < 10; i++); {
		a[i] = (i + 1) * 10;
	}

	for (i = 0; i < 10; i++) {
		c[i] = a[i]*2;
	}
	printf("zña©çzñÉRs[\nzña=");

	for (i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}
	printf("\nzñ=");
	for (i = 0; i < 10; i++) {
		printf("%4d", c[i]);
	}
}