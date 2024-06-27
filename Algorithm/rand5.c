#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int kazu, i;

	srand(time(0));
	rand();

		

		for (i = 1; i <= 100; i++) {
         kazu = rand() % 300 + 1;
			printf("%4d", kazu);
			if (i % 10 == 0) {
				printf("\n\n");
			}
		}
	
}