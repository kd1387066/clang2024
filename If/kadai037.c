#include<stdio.h>
main()
{
	int su;

	printf("0����100�܂ł̐���:");
	scanf("%d", &su);

	if (su >= 90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}

	if (su >= 80 && su < 90)
	{
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}

	if (su >= 50 && su < 80)
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}

	if (su >= 30 && su < 50)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}

	else
	{

	printf("���̐��l�̔��茋�ʂ́u1�v�ł�");

	}
	
}