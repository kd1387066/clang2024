#include<stdio.h>
main() {
	int su;
	printf("����������:");
	scanf("%d", &su);

	if(10<=su&&su<=49){
		switch (su/10)
		{
		case (1):
			printf("�P�O�_��ł�");
			break;

		case (2):
			printf("�Q�O�_��ł�");
			break;

		case (3):
			printf("�R�O�_��ł�");
			break;

		case (4):
			printf("�S�O�_��ł�");
			break;



		}


	}
	else {
		printf("eraaa---");
	}
}