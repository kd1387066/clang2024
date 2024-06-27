#include<stdio.h>

main() {
	char  moji[21];//末尾に\0入るから
	int i, k[20];

	printf("文字列を入力してください：");
	scanf("%s", &moji[0]);

	for (i = 0; moji[i] != '\0'; i++) {
		printf("moji[%d]の複合化キー>",i);
		scanf("%d", &k[i]);
		moji[i] = moji[i] - k[i];
	}
	printf("複号化済み文字列は、%s",& moji[0]);
}