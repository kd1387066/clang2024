#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int dice;

	srand(time(0));
	rand();

	dice = rand() % 50 + 10;

	printf("��������������%d�ł�\n", dice);

}