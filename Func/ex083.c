#include<stdio.h>
int strcnt(char* p);
main() {
	char a[256];
	int moji;
	printf("文字列は？");
	gets(a);
	moji = strcnt(a);
	printf("入力された文字列の文字数は%d文字です。\n", moji);
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	
	return(cnt);
}