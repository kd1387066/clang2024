#include<stdio.h>
int saidai( int* p, int number);
int saisyo( int* p, int number);
main() {
	int data[8] = { 6,10,8,2,9,5,1,7 };

	printf("最大値=%d\n", saidai(data, 8));
	printf("最小値=%d\n", saisyo(data, 8));
	
}

int saidai(int* p, int number)
{
	int dai;
	int i;
	i = 0;
	dai = *p;
	p++;
	while (i < 7)
	{
		if (dai < *p)
		{
			dai = *p;
		}
		p++;
		i++;
	}
	return dai;
}

int saisyo( int* p, int number)
{
	int syo;
	int i;
	i = 0;
	syo = *p;
	p++;
	while (i < 7)
	{
		if (syo > *p)
		{
			syo = *p;
		}
		p++;
		i++;
	}
	return syo;
}