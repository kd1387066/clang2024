#include<stdio.h>
main() {
	char  moji[80];
	int i;
	printf("���������͂��Ă��������F");
	scanf("%s", &moji[0]);
	i = 0;
	while (moji[i] != '\0')
	{
		moji[i]--;
		i++;
	}



	printf("�������������\��:%s\n", &moji[0]);
}