#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);

	if (moji>= 'a'&& moji<='z')
	{
		printf("���̕����͏������ł�");
	}
	else
	{
		printf("���̕����͏������ȊO�̕����ł�");
	}
}