#include<stdio.h>
main()
{
	char moji;

	printf("���������:");
	scanf("%c", &moji);
	if ((moji >= 'A' && moji <= 'Z')||(moji >= 'a' && moji <= 'z')) {
		printf("�A���t�@�x�b�g�ł��B\n");

	}
	else {
		if (moji >= '1' && moji <= '9') {


			printf("�����ł��B\n");
		}


		else {
			printf("���̑��̕���");
		}

	}
}