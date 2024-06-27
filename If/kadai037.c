#include<stdio.h>
main()
{
	int su;

	printf("0から100までの整数:");
	scanf("%d", &su);

	if (su >= 90)
	{
		printf("その数値の判定結果は「5」です");
	}

	if (su >= 80 && su < 90)
	{
		printf("その数値の判定結果は「4」です");
	}

	if (su >= 50 && su < 80)
	{
		printf("その数値の判定結果は「3」です");
	}

	if (su >= 30 && su < 50)
	{
		printf("その数値の判定結果は「2」です");
	}

	else
	{

	printf("その数値の判定結果は「1」です");

	}
	
}