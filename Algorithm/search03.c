#include<stdio.h>
main() {
	int s, low,high,mid;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("�T���ls����́F");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low<=high){
	

	 
		mid = (low + high) / 2;
		if (d[mid] == s) {
			break;
		}
		if (s > d[mid]){
			low = mid + 1;

		}
		else {
			high = mid - 1;
		}

	}
	if (low > high) {
		printf("������Ȃ�����( �G�́G)\n");
	}
	else {
		printf("�T���l%d����[%d]�Ŕ����I(߁�߁j\n",s,mid);
	}
	





}