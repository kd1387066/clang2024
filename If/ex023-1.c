#include<stdio.h>
main()
{

	int j, h, b;
	printf("秒数を入力:");
	scanf("%d", &b);
	
	if (b >= 0) {

		if (b <= 5000) {
			j = b / 3600;
			b = b % 3600;
			h = b / 60;
			b = b % 60;

			printf("%d時間%d分%d秒\n", j, h, b);
		}

		else {
			printf("Error(エラー)\n");

		}
	}
	else{
		printf("マイナスはエラーです。");
	}
	 
}