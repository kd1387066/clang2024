#include<stdio.h>
void irekae(int* a, int* b, int c);
main() {

	int a, b, c;
	a = 10;
	b = 20;
	c = 0;
	printf("�֐����s�O�̒l�F\na=%d   b=%d\n", a, b);
	irekae(&a, &b, c);
	printf("�֐����s��̒l�F\na=%d   b=%d\n", a, b);

}


void irekae(int* a, int* b, int c)
{
	c = *a;
	*a = *b;
	*b = c;
	return;
}