#include<stdio.h>
main() {
	char  moji[80];
	int i;
	printf("文字列を入力してください：");
	scanf("%s", &moji[0]);
	i = 0;
	while (moji[i]!='\0')
	{
		moji[i]++;
		i++;
	}
		

	
	printf("暗号化文字列を表示:%s\n", &moji[0]);
}