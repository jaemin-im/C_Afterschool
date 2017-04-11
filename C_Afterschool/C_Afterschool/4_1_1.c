#include <stdio.h>

int w4_1_1(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("%d\n", a - b);
	}
	else {
		printf("%d\n", b - a);
	}
	return 0;
}