#include<stdio.h>
main() {

	int tuki;
	printf("月を入力:");
	scanf("%d", &tuki);
		if (tuki == 2) {

			printf("最終日は28日です。");

	}
	else {
		if (tuki == 4 || tuki ==6 ||tuki== 9 ||tuki== 11) {

			printf("最終日は30日です。");

		}
	else {
			printf("最終日は31日です。");
		}


	}
}