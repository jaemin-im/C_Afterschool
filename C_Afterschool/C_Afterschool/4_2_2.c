#include <stdio.h>

int w4_2_2(void) {
	int a, b, c, sw;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		sw = a;
		a = b;
		b = sw;
	}
	if (b < c) {
		sw = b;
		b = c;
		c = sw;
	}
	if (a < b) {
		sw = a;
		a = b;
		b = sw;
	}
	printf("%d %d %d", a, b, c);
	return 0;
} 0¤½    