#include<stdio.h>
main() {
	int i, j, kazu;



	printf("”‚ÍH");
	scanf("%d", &kazu);

	i = 0;

	do {

		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < kazu - i);
		
		j = 0;


		do {
			printf("*");
			j++;
		} while (j < i + 1);


		printf("\n");
		i++;
	} while (i < kazu);
}