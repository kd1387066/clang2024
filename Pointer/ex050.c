#include<stdio.h>
main() {
	int a = 100; /*�ϐ��̐錾*/
	int *p_a;       /*�|�C���^�̐錾*/
	p_a = &a;		/*�A�h���X�̃Z�b�g*/

	printf("a=%d ", a);
	printf("&a=%d\n", &a);
	printf("p_a=%d\n", p_a);
	printf("*p_a=%d\n", *p_a);
	printf("&p_a=%d\n", &p_a);

}