#include <stdio.h>
main()
{
	char* p_game[3] = { "wii", "ds", "playstation4" };
	int i;�@�@�@�@�@�@�@�@�@�@
	char** p;�@�@�@�@�@�@�@�@�@
	p = p_game;�@�@�@�@�@�@�@�@//p_game�̊Ǘ��l�w��
	for (i = 0; i < 3; i++) {�@//�O��J��Ԃ���
		printf("%s\n", *p++);  //���Ă��������̒��g��\�����Ď��̕��������Ă��Ăˁ[
	}
}