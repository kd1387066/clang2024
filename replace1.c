#include<stdio.h>
main() {
	int a, b, c;
	a = 5;
	b = 3;
	printf("入れ替え前:a=%d、b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("入れ替え後:a=%d、b=%d\n", a, b);
}