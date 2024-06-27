#include<stdio.h>
#define a 5
main() {
	int d[a] = { 30,7,25,16,10 };
	int i, w, j;
	printf("ソート前\n");
	for (i = 0; i < a; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	for (i = 0; i < a - 1; i++) {
		for (j = i + 1; j < a; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j]; //入れ替え処理
				d[j] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < a; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	

}