#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int kazu,i;

	srand(time(0));
	rand();

	kazu = rand() % 5 + 1;

	printf("�����̂��Ȃ��̉^���́A");
	for (i = 0; i < kazu; i++) {
		printf("��");
	}
	printf("�ł��B\n");
	

	

}