#include<stdio.h>
main() {
	char data[15] = "Language";
	char s;
	char* p_data;
	p_data = data;
	int i;
	printf("data[ ]=%s\n", p_data);
	printf("���������́H");
	scanf("%c", &s);
	i = 1;
	while (*p_data) {
		if (s == *p_data) {

			//����������
			printf("%d", i);


		}
		p_data++; //���̃f�[�^��
		i++;
	}
}