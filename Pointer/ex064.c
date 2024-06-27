#include <stdio.h>
main()
{
	char* p_ride[3] = { "car", "bus", "shinkansen" };
	int i;
	for (i = 0; i < 3; i++) {
		while (*p_ride) {
			putchar(*p_ride++); //put char‚Íˆê•¶Žš•\Ž¦‚Æ‚¢‚¤ˆÓ–¡
		}
	}
}