#include<stdio.h>

main() {
	char  moji[21];//������\0���邩��
	int i, k[20];

	printf("���������͂��Ă��������F");
	scanf("%s", &moji[0]);

	for (i = 0; moji[i] != '\0'; i++) {
		printf("moji[%d]�̕������L�[>",i);
		scanf("%d", &k[i]);
		moji[i] = moji[i] - k[i];
	}
	printf("�������ςݕ�����́A%s",& moji[0]);
}