#include<stdio.h>
int strcnt(char* p);
main() {
	char a[256];
	int moji;
	printf("������́H");
	gets(a);
	moji = strcnt(a);
	printf("���͂��ꂽ������̕�������%d�����ł��B\n", moji);
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	
	return(cnt);
}