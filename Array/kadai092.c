#include<stdio.h>
main() {
	int a[10],c[10],i;
	for (i = 0; i < 10; i++); {
		a[i] = (i + 1) * 10;
	}

	for (i = 0; i < 10; i++) {
		c[i] = a[i]*2;
	}
	printf("配列aから配列ｃにコピー\n配列a=");

	for (i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}
	printf("\n配列ｃ=");
	for (i = 0; i < 10; i++) {
		printf("%4d", c[i]);
	}
}