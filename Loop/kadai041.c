#include<stdio.h>
main()
{
	int su,i,gokei;
	printf("�����i-999�ŏI���j�H");
	scanf("%d", &su);
	i = 0;
	gokei = 0;
	while (su != -999)
	{
		gokei += su;
		printf("�����i-999�ŏI���j�H");
		scanf("%d", &su);
		
		i++;
	}
	printf("���v�@���@%d\n���ρ@���@%.2f", gokei, (float)gokei / i);

}