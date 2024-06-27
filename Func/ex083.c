#include<stdio.h>
int strcnt(char* p);
main() {
	char a[256];
	int moji;
	printf("•¶š—ñ‚ÍH");
	gets(a);
	moji = strcnt(a);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·B\n", moji);
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	
	return(cnt);
}