#include<stdio.h>
main() {
	int  i;
	char moji;
	printf("¬•¶šH");
	scanf("%c", &moji);

	for (i = moji; i <= 'z'; i++)
	{
		printf("%c  ", i - 0x20);

	}
}