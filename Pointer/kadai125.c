#include<stdio.h>
main() {
	int a[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;




	pd = a;
	printf("�|�C���^���Œ�ŕ\��\n�z��a[]=");
	for (i = 0; *(pd + i) != -999; i++) {
		printf("%d,", *(pd + i));
	}


	printf("\n�|�C���^��ύX�����ĕ\��");
	printf("\n�z��@data[]=");
	
	for(pd=a;*(pd)!=-999;pd++)
	{
		printf("%d,", *pd);
		
		
	}
		
	
}
	