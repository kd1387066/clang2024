#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num, cnt;
	srand(time(0)); //�����̏�����
	rand(); //rand()�̋�ǂ�
	//1~100�܂ł̐��������_���Ɍ���
	ans = rand() % 100 + 1;
	//�Q�[���^�C�g���̕\��
	printf("�����ăQ�[��\n");
	printf("1~100�܂ł̐������Ȃ��񐔂œ��Ă�Q�[��\n\n");
	cnt = 0; //���͉񐔂�0�N���A
	while (1) {
		//���͏���
		printf("��(1~100)�����:");
		scanf("%d", &num);
		cnt++; //���͉񐔂̃J�E���g�A�b�v
		//���菈��(else if�ɂ�鑽����̗��K)
		// �����ȏ��ł́uelse if�v�͂܂��o�ĂȂ�
		if (ans > num) {
			printf("%d���傫���ł�\n\n", num);
		}
		else if (ans < num) {
			printf("%d��菬�����ł�\n\n", num);
		}
		else {
			printf("������! %d��œ��Ă܂���\n", cnt);
			break;
		}
	}
}

	

	




