#include<stdio.h>
main()
{
	char moji;
	printf("�ꕶ�����́H");
	scanf("%c", &moji);

	if (moji >= 'a' && moji <= 'z')
	{
		printf("���̕����͏������ł�");
	}
	if (moji >= 'A' && moji <= 'Z') {
		printf("���̕����͑啶���ł�\n");

	}
	else
	{
		printf("���炠������������");
	}
}