#include<stdio.h>
main() {

	int data, sum, cnt;
	float ave;

	sum = 0;
	cnt = 0;

	printf("”‚ÍH");
	scanf("%d", &data);

	for (  ;  data!= -999; ) {

		sum += data;

		cnt++;



		printf("”‚ÍH");
		scanf("%d", &data);
	}


	ave = (float)sum / cnt;
	printf("‡Œv=%d  •½‹Ï=%.2f", sum, (float)sum / cnt);
}