#include<stdio.h>
void display(int a,int b,int *wa,int *hei);


main() {
	int a,b,wa,hei;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a,&b);
	display(a,b,&wa,&hei);
	printf("‡Œv‚Í@%dA•½‹Ï‚Í%.2f",wa, (float)hei);

}

void display(int a,int b,int *wa,int *hei)
{
	*wa = a + b;
	*hei = (a + b) / 2.0;
	return;

}