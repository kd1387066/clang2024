#include<stdio.h>
main() {
	int a, b, c;
	a = 5;
	b = 3;
	printf("����ւ��O:a=%d�Ab=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("����ւ���:a=%d�Ab=%d\n", a, b);
}