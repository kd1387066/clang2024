#include<stdio.h>

enum BigState
{
	Base = 0,					//�ʏ���
	Poison = 1 << 1,			//�ǂ����
	Sleep = 1 << 2,				//�˂ނ���
	Paralysis = 1 << 3,			//�܂Џ��
	Burn = 1 << 4,				//�₯�Ǐ��
	AtkUp = 1 << 5,				//�A�^�b�N�A�b�v
	AtkDown = 1 << 6			//�A�^�b�N�_�E��

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
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}

	if (s & Sleep) {
		printf("����\n");
	}

	if (s & Paralysis) {
		printf("���\n");
	}

	if (s & Burn) {
		printf("�₯��\n");
	}

	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}

	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}

	if (s == Base)
	{
		printf("��Ԉُ�Ȃ�\n");
	}
	printf("\n******************");

}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{

		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ�t�^���܂����H\n");
		printf("1:�Ł@2:�����@3:��Ⴡ@4:�₯�ǁ@5:�U�����@6:�U�����@0:�I����");
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
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�Ł@2:�����@3:��Ⴡ@4:�₯�ǁ@5:�U�����@6:�U�����@0:�I����");
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