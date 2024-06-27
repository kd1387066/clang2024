#include<stdio.h>
main() {

	char moji[]="Apple";
	int i;


	printf("ˆê•¶Žš‚¸‚Â•\Ž¦\n");
	i = 0;
	while (moji[i] != '\0') {

		printf("%c", moji[i]);
		i++;

	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &moji[0]);





}