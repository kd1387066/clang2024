#include<stdio.h>
#define NIN 5

struct day
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[NIN] = { {"A",2000,2,11,"A"},{"B",1999,12,31,"O"}, { "C",1999,2,25,"AB" }, {"D",2000,3,1,"A"},{"E",1999,5,10,"B"} };
	int i;
	for (i = 0; i < NIN; i++)
	{
		if (data[i].date.tuki == 2) {
			printf("%s -- %d”N%dŒŽ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^ - %sŒ^\n", data[i].name, data[i].date.nen, data[i].date.tuki, data[i].date.hi, data[i].blood);
		}
	}
}
