#include<stdio.h>
main() {
	int a[] = { 11,22,33,44,55,66 };
	int* p_a;

	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;

	int gokei,i;
	float sum;

	p_a = a;
	for (gokei=0,i = 0; i<6; i++) {
		gokei += *p_a;
		p_a++;
	}
	printf("zña   v=%d   ½Ï=%f\n", gokei, gokei / 6.0);

	p_b = b;

	for (sum = 0, i=0; i<4; i++) {
		sum += *p_b;
		p_b++;
	}
	printf("zñb   v=%.3f   ½Ï=%.3f\n", sum, sum / 4.0);
		
	
}