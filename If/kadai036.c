#include<stdio.h>
main()
{
	int su, su2;
	printf("整数1？");
	scanf("%d", & su);
	printf("整数2？");
	scanf("%d" ,& su2);
	if (su > su2)
	{
		printf("%dのほうが%dより%d小さい", su2, su, (su) - (su2));
	}
	if (su < su2)
	{
		printf("%dのほうが%dより%d小さい", su, su2, (su2) - (su));
	}
}