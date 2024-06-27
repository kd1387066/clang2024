#include<stdio.h>
main() {
	float box[3],gokei;
	int i;
	for (gokei = 0, i = 0; i < 3; i++) {
      printf("ŽÀ”‚ð“ü—Í:");
	  scanf("%f", &box[i]);
	  gokei += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·B\n•½‹Ï‚Í%.2f‚Å‚·B", gokei, gokei / 3);
	
	



}