#include <stdio.h>

int w5_2_0(void) {
	int total = 0, num = 0;
	do
	{
		total += num;
		num++;
	} while (num <= 10);

	printf("гу╟Х : %d\n", total);
	return 0;
}