#include<stdio.h>
main() {
	float box[3],gokei;
	int i;
	for (gokei = 0, i = 0; i < 3; i++) {
      printf("���������:");
	  scanf("%f", &box[i]);
	  gokei += box[i];
	}
	printf("���v��%.2f�ł��B\n���ς�%.2f�ł��B", gokei, gokei / 3);
	
	



}