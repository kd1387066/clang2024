#include<stdio.h>
main() {
	float box[3],gokei;
	int i;
	for (gokei = 0, i = 0; i < 3; i++) {
      printf("実数を入力:");
	  scanf("%f", &box[i]);
	  gokei += box[i];
	}
	printf("合計は%.2fです。\n平均は%.2fです。", gokei, gokei / 3);
	
	



}