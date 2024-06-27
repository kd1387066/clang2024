#include<stdio.h>
main()
{
	int  su;
	printf("整数？");
	scanf("%d", &su);

	if (su>0)
	{
		printf("プラスです");
	}
	if (su==0) {
		printf("0です");

	}
	if(su<0)
	{
		printf("マイナスです");
	}
}