#include<stdio.h>
main() {
	int su;
	printf("文字を入れて:");
	scanf("%d", &su);

	if(10<=su&&su<=49){
		switch (su/10)
		{
		case (1):
			printf("１０点台です");
			break;

		case (2):
			printf("２０点台です");
			break;

		case (3):
			printf("３０点台です");
			break;

		case (4):
			printf("４０点台です");
			break;



		}


	}
	else {
		printf("eraaa---");
	}
}