#include<stdio.h>
void sisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main() {
	int a, b, wa, sa, sk, syo ;
	printf("数値1?:");
	scanf("%d", &a);
	printf("数値2?:");
	scanf("%d", &b);
	
	puts("数値1と数値2の四則演算");
	sisoku(a, b, &wa, &sa, &sk, &syo );
	printf("wa=%d sa=%d seki=%d syo=%d\n", wa, sa, sk, syo );

}


void sisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;

}