#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	char  moji[21];//末尾に\0入るから
	int i,k[20],n;

	srand(time(0));

	printf("文字列を入力してください：");
	scanf("%s", &moji[0]);
	
	for (i = 0; moji[i] != '\0'; i++) {

		k[i] = rand() % 6;
		moji[i] = moji[i] + k[i];


	}
	printf("暗号化文字列を表示:%s\n", &moji[0]);

	printf("暗号化キーは、");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}


}