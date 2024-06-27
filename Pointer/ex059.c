#include<stdio.h>
main() {
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2; //管理人の指名
	p_data = data;   //担当する部屋
	p_data2 = data2;
	printf("data[ ]=%s\n", p_data);
	while (*p_data2++ = *p_data++); //文字列のコピー
	p_data2 = data2;
	printf("data2[ ]=%s\n", p_data2);
	while (*p_data2) {
		putchar(*p_data2++); //put charは一文字表示という意味
	}
	putchar('\n');
}