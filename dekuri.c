#include<stdio.h>
main() {
	char  moji[80];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", &moji[0]);
	i = 0;
	while (moji[i] != '\0')
	{
		moji[i]--;
		i++;
	}



	printf("•¡†‰»•¶š—ñ‚ğ•\¦:%s\n", &moji[0]);
}