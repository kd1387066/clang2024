#include<stdio.h>
main()
{
	int su, su2;
	printf("®”1H");
	scanf("%d", & su);
	printf("®”2H");
	scanf("%d" ,& su2);
	if (su > su2)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su2, su, (su) - (su2));
	}
	if (su < su2)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", su, su2, (su2) - (su));
	}
}