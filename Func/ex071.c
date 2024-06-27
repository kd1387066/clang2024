#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b,int c);
main() {
	int a, b,c, kotae,heki;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b,&c);
	kotae = gokei(a, b,c);
	heki = heikin(a, b, c);
	printf("‡Œv‚Í%d‚Å‚·B •½‹Ï‚Í%.2f‚Å‚·B\n", kotae,(float)heki);
}

int gokei(int a, int b,int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}

float heikin(int a, int b, int c)
{
	int heiki;
	heiki = (a + b + c) / 3;
	return(heiki);
}
