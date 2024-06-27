#include<stdio.h>
main()
{
	int su,i,gokei;
	printf("整数（-999で終了）？");
	scanf("%d", &su);
	i = 0;
	gokei = 0;
	while (su != -999)
	{
		gokei += su;
		printf("整数（-999で終了）？");
		scanf("%d", &su);
		
		i++;
	}
	printf("合計　＝　%d\n平均　＝　%.2f", gokei, (float)gokei / i);

}