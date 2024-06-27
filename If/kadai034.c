#include<stdio.h>
main()
{
	char moji;
	printf("ˆê•¶Žš“ü—ÍH");
	scanf("%c", &moji);

	if (moji >= 'a' && moji <= 'z')
	{
		printf("‚»‚Ì•¶Žš‚Í¬•¶Žš‚Å‚·");
	}
	if (moji >= 'A' && moji <= 'Z') {
		printf("‚»‚Ì•¶Žš‚Í‘å•¶Žš‚Å‚·\n");

	}
	else
	{
		printf("‚¦‚ç‚ ‚ ‚ ‚ ‚ ‚ ‚ ");
	}
}