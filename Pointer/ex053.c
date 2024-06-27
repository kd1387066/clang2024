#include<stdio.h>
main() {
	int * p_a;
	int a = 100;

	int * p_b;
	int b = 200;

	int *c;

	p_a = &a;
	p_b = &b;

	printf("実行前：*p_a=%d   *p_b=%d", a, b);

	c = p_a;
	p_a = p_b;
	p_b = c;




	printf("\n実行後：*p_a=%d  *p_b =%d", *p_a, *p_b);
}