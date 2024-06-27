#include<stdio.h>
main() {
	char data[15] = "Language";
	char s;
	char* p_data;
	p_data = data;
	int i;
	printf("data[ ]=%s\n", p_data);
	printf("検索文字は？");
	scanf("%c", &s);
	i = 1;
	while (*p_data) {
		if (s == *p_data) {

			//見つかった時
			printf("%d", i);


		}
		p_data++; //次のデータへ
		i++;
	}
}