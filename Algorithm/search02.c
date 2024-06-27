#include<stdio.h>
main() {
	int s,i;
	int d[11]={ 10,5,30,77,16,3,47,29,37,33,55 };
	printf("探索値sを入力：");
	scanf("%d", &s);
	d[10] = s;
	for (d[10] = s, i = 0; s != d[i]; i++) {
	}
		if (i == 10) {
			printf("見つからなかった\n");
		}
	
		else {
			printf("探索値%dを、d[%d]で発見！\n", s, i);
		}

	



}