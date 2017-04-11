#include <stdio.h>

int w4_1_0(void) {
	int a, b;
	printf("정수 입력(2개) : ");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("큰 수 : %d\n", a);
	}
	else {
		printf("큰 수 : %d\n", b);
	}
	return 0;
}