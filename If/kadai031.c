#include<stdio.h>
main()
{
	double a, b;
	printf("2つの実数地？");
	scanf("%lf%lf", &a, &b);
	if (a > b)
	{
		printf("大きいほうは%lf", a);

	}
	else
	{
		printf("大きいほうは%lf", b);
	}
}