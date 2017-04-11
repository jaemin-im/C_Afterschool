#include <stdio.h>

int w4_2_0(void) {
	int a, b, c, max;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) max = a;
		else max = c;
	}
	else {
		if (b > c) max = b;
		else max = c;
	}
	printf("가장 큰 수는 %d입니다.\n", max);
	return 0;
}