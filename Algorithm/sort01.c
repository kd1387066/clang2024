#include<stdio.h>
#define a 5
main() {
	int d[a] = { 30,7,25,16,10 };
	int i, w, j;
	printf("�\�[�g�O\n");
	for (i = 0; i < a; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	for (i = 0; i < a - 1; i++) {
		for (j = i + 1; j < a; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j]; //����ւ�����
				d[j] = w;
			}
		}
	}
	printf("\n�\�[�g��\n");
	for (i = 0; i < a; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	

}