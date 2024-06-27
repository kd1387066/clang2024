#include<stdio.h>

enum BigState
{
	Base = 0,					//通常状態
	Poison = 1 << 1,			//どく状態
	Sleep = 1 << 2,				//ねむり状態
	Paralysis = 1 << 3,			//まひ状態
	Burn = 1 << 4,				//やけど状態
	AtkUp = 1 << 5,				//アタックアップ
	AtkDown = 1 << 6			//アタックダウン

};

typedef unsigned int UINT;

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);


main() {
	UINT MyState = Base;

	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	CrearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s) {
	printf("****現在の状態****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}

	if (s & Sleep) {
		printf("眠り\n");
	}

	if (s & Paralysis) {
		printf("麻痺\n");
	}

	if (s & Burn) {
		printf("やけど\n");
	}

	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}

	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}

	if (s == Base)
	{
		printf("状態異常なし\n");
	}
	printf("\n******************");

}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{

		DisplayStatus(*s);
		printf("どの状態を付与しますか？\n");
		printf("1:毒　2:睡眠　3:麻痺　4:やけど　5:攻撃↑　6:攻撃↓　0:終了＞");
		scanf("%d", &a);


		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
				*s |= Poison;
				break;

		case 2:
				*s |= Sleep;
				break;

		case 3:
				*s |= Paralysis;
				break;

		case 4:
				*s |= Burn;
				break;

		case 5:
				*s |= AtkUp;
				break;

		case 6:
				*s |= AtkDown;
			break;
			
		}
	}
}


void CrearFlag(UINT* s)
{
	int a;
	while (1)
	{


		DisplayStatus(*s);
		printf("どの状態を解除しますか？\n");
		printf("1:毒　2:睡眠　3:麻痺　4:やけど　5:攻撃↑　6:攻撃↓　0:終了＞");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;

		case 2:
			*s &= ~Sleep;
			break;

		case 3:
			*s &= ~Paralysis;
			break;

		case 4:
			*s &= ~Burn;
			break;

		case 5:
			*s &= ~AtkUp;
			break;

		case 6:
			*s &= ~AtkDown;
			break;

		case 7:
			*s = Base;
			break;
			
		}
	}
}