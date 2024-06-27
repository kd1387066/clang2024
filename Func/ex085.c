#include<stdio.h>
void str(char* p1, char* p2);
main()
{
	char a[256], b[256];

	printf("配列a:");
	gets(a);
	printf("配列b:");
	gets(b);
	str(a, b);
	printf("配列a：%s\n", a);

}

void str(char* p1, char* p2)
{
	int i, j;
	for (i = 0; *(p1 + i) != '\0'; i++);
	for (j = 0; *(p1 + i) =*(p2+j); i++,j++);

}