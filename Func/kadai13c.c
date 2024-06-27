#include<stdio.h>
void irekae(int* a, int* b, int c);
main() {

	int a, b, c;
	a = 10;
	b = 20;
	c = 0;
	printf("関数実行前の値：\na=%d   b=%d\n", a, b);
	irekae(&a, &b, c);
	printf("関数実行後の値：\na=%d   b=%d\n", a, b);

}


void irekae(int* a, int* b, int c)
{
	c = *a;
	*a = *b;
	*b = c;
	return;
}