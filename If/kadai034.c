#include<stdio.h>
main()
{
	char moji;
	printf("一文字入力？");
	scanf("%c", &moji);

	if (moji >= 'a' && moji <= 'z')
	{
		printf("その文字は小文字です");
	}
	if (moji >= 'A' && moji <= 'Z') {
		printf("その文字は大文字です\n");

	}
	else
	{
		printf("えらあああああああ");
	}
}