#include<stdio.h>
main()
{
	int suji;
	printf("西暦を入力:");
	scanf("%d", &suji);
	if (suji > 1988) {
		printf("平成生まれです。\n");

	}

	else {

		printf("昭和生まれです。\n");

	}
}