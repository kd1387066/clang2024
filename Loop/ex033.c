#include<stdio.h>
main() {

	int data, sum, cnt;
	float ave;

	sum = 0;
	cnt = 0;

	printf("数は？");
	scanf("%d", &data);

	for (  ;  data!= -999; ) {

		sum += data;

		cnt++;



		printf("数は？");
		scanf("%d", &data);
	}


	ave = (float)sum / cnt;
	printf("合計=%d  平均=%.2f", sum, (float)sum / cnt);
}