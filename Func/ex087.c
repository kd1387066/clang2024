#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int sum;
	if (argc == 3) {                                              //引数の数がex087含め3つなら実行
		sum = atoi(argv[1]) + atoi(argv[2]);                      //atoiで数字文字列を数値（int型）に変換してsumに格納
		printf("%s+%s = %d\n", argv[1], argv[2], sum);            
	}
	else {
		printf("2つの引数（整数）を設定して実行してください\n");
	}
}