#include<stdio.h>
main() {
	int * p_a;
	int a = 50;
	p_a = &a;
	int* p_b;
	int b = 10;
	p_b = &b;

	p_a = &a;
	p_b = &b;

	printf("%d+%d=%d", a,b,a+b);
}