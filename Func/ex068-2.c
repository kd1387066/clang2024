#include<stdio.h>
main() {
	char str[256];

	while (gets(str) != NULL)
	{
		puts(str);//（）の中の文字列をそのまま出力して改行文字（￥ｎ）を末尾に追加する
	}
}