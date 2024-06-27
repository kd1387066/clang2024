#include <stdio.h>
main()
{
	char* p_game[3] = { "wii", "ds", "playstation4" };
	int i;　　　　　　　　　　
	char** p;　　　　　　　　　
	p = p_game;　　　　　　　　//p_gameの管理人指定
	for (i = 0; i < 3; i++) {　//三回繰り返して
		printf("%s\n", *p++);  //見てきた部屋の中身を表示して次の部屋も見てきてねー
	}
}