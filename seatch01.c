﻿#include<stdio.h>
main() {
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値を入力:");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			printf("みつかった！\n");
			break;

		}
	}
	if (i == 10) {
		printf("みつかりませんでした");
	}
	else {
		printf("%d番目に見つかった！\n", i);
	}


}