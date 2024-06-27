#include<stdio.h>
main()
{
	int kazu,i,j;
	printf("”‚ÍH");
	scanf("%d", &kazu);


	for (i=0 ; i<kazu; i++) {

		for (j = 0; j < kazu-i-1; j++) {

			printf(" ");

		}
		for (j = 0; j < i+1; j++) {

			printf("*");

		}
	
		printf("\n");
	
	}


}