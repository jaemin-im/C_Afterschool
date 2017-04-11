#include <stdio.h>

int w3_2_1(void)
{
	int num;
	scanf("%d", &num);
	printf("%d\n", ~num + 1);
	return 0;
}