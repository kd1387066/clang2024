#include<stdio.h>
main() {

	char moji[]="Apple";
	int i;


	printf("一文字ずつ表示\n");
	i = 0;
	while (moji[i] != '\0') {

		printf("%c", moji[i]);
		i++;

	}
	printf("\n文字列で表示\n");
	printf("%s\n", &moji[0]);





}