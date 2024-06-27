#include<stdio.h>
void moji1(char *p,char *p2);

main() {
	char moji[256];
	char moji2[256];
	
	printf("•¶š—ñH:");
	gets(moji);

	moji1(moji, moji2);
	printf("moji1:%s\n", moji);
	printf("moji2:%s\n", moji2);
}


void moji1(char *p,char*p2)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	
	//printf("%d", cnt);
	
	p = p - 1;
	cnt = cnt - 1;

	while (cnt>=0)
	{
		*p2 = *p;

		*p--;
		*p2++;
		cnt--;
	}

	*p2 = '\0';

	return;
}
