#include<stdio.h>
void daisyou(int a, int b, int c, int* dai, int* syou);
main() {
	int a, b, c, dai, syou;
	printf("整数を3つ入力：");
	scanf("%d%d%d", &a, &b, &c);
	daisyou(a, b, c, &dai, &syou);
	printf("最大値＝%d  最小値＝%d", dai, syou);

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