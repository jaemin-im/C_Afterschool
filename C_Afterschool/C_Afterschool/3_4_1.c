#include <stdio.h>

int w3_4_1(void)
{
	int year;
	scanf("%d", &year);
	printf("%d", ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));
	return 0;
}