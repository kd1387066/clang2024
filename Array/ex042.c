#include<stdio.h>
main() {

	char moji[]="Apple";
	int i;


	printf("�ꕶ�����\��\n");
	i = 0;
	while (moji[i] != '\0') {

		printf("%c", moji[i]);
		i++;

	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &moji[0]);





}