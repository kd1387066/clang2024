#include<stdio.h>
void daisyou(int a, int b, int c, int* dai, int* syou);
main() {
	int a, b, c, dai, syou;
	printf("®”‚ð3‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);
	daisyou(a, b, c, &dai, &syou);
	printf("Å‘å’l%d  Å¬’l%d", dai, syou);

}

void daisyou(int a, int b, int c, int* dai, int* syou)
{
	*dai = a;
		if (b > *dai) {
			*dai = b;

		}
		if (c > *dai) {
			*dai = c;
		}
		*syou = a;
		if (b < *syou) {
			*syou = b;
		}
		if (c < *syou) {
			*syou = c;
		}
		return;
}