#include<stdio.h>
main() {
	int* p_a;
	int a = 100;
	
	int* p_b;
	int b = 200;

	int c;

	p_a = &a;
	p_b = &b;

	printf("���s�O�Fa=%d   b=%d", a, b);

	c = *p_a;
	*p_a = *p_b;
	*p_b = c;


	printf("\n���s��Fa=%d   b=%d", a, b);
}
	

