#include<stdio.h>
main() {
	int a[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;




	pd = a;
	printf("ポインタを固定で表示\n配列a[]=");
	for (i = 0; *(pd + i) != -999; i++) {
		printf("%d,", *(pd + i));
	}


	printf("\nポインタを変更させて表示");
	printf("\n配列　data[]=");
	
	for(pd=a;*(pd)!=-999;pd++)
	{
		printf("%d,", *pd);
		
		
	}
		
	
}
	