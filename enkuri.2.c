#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char  moji[21];//������\0���邩��
	int i,k[20],n;

	srand(time(0));

	printf("���������͂��Ă��������F");
	scanf("%s", &moji[0]);
	
	for (i = 0; moji[i] != '\0'; i++) {

		k[i] = rand() % 6;
		moji[i] = moji[i] + k[i];


	}
	printf("�Í����������\��:%s\n", &moji[0]);

	printf("�Í����L�[�́A");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}


}