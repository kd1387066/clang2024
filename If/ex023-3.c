#include <stdio.h>
main()
{
	int a, b, enn;
	printf("���Z�q�����:"); //1:+ 2:- 3:* 4:/
	scanf("%d", &enn);

	printf("2�̐��������:");
	scanf("%d%d", &a, &b);

	if (enn==1) {
		printf("%d\n", a + b);
	}
	else {
		if (enn==2) {
			printf("%d\n", a - b);


		}

		else {
			if (enn==3) {
				printf("%d\n", a * b);


			}
			else {
				if (enn==4) {
					printf("%d\n", a / b);


				}
			}
		}
	}
}



