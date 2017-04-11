#include <stdio.h>

int w2_d(void)
{
	float a;
	a = 1.234;
	printf("%f %8.5f %+8.3f %+08.3f %-8.3f", a, a, a, a, a);
	return 0;
}