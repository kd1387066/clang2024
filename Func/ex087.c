#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[])
{
	int sum;
	if (argc == 3) {                                              //�����̐���ex087�܂�3�Ȃ���s
		sum = atoi(argv[1]) + atoi(argv[2]);                      //atoi�Ő���������𐔒l�iint�^�j�ɕϊ�����sum�Ɋi�[
		printf("%s+%s = %d\n", argv[1], argv[2], sum);            
	}
	else {
		printf("2�̈����i�����j��ݒ肵�Ď��s���Ă�������\n");
	}
}