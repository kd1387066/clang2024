#include<stdio.h>
main() {

	int data, sum, cnt;
	float ave;

	sum = 0;
	cnt = 0;

	printf("���́H");
	scanf("%d", &data);

	for (  ;  data!= -999; ) {

		sum += data;

		cnt++;



		printf("���́H");
		scanf("%d", &data);
	}


	ave = (float)sum / cnt;
	printf("���v=%d  ����=%.2f", sum, (float)sum / cnt);
}