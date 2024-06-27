#include<stdio.h>
main()
{
	int suji;
	printf("整数を入力:");
	scanf("%d", &suji);
	if (suji >= 0) {
		printf("入力値はプラスです。\n");

	}

	else {

		printf("入力値はマイナスです。\n");

	}
}