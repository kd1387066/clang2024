#include<stdio.h>
void display(int a,int b,int *wa,int *hei);


main() {
	int a,b,wa,hei;
	printf("整数を2つ入力:");
	scanf("%d%d", &a,&b);
	display(a,b,&wa,&hei);
	printf("合計は　%d、平均は%.2f",wa, (float)hei);

}

void display(int a,int b,int *wa,int *hei)
{
	*wa = a + b;
	*hei = (a + b) / 2.0;
	return;

}