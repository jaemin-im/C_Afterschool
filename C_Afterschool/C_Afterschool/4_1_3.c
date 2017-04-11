#include <stdio.h>

int w4_1_3(void) {
	int num;
	scanf("%d", &num);
	if (num % 3 == 0 && num % 5 == 0) {
		printf("3의 배수이면서 5의 배수입니다.\n");
	}
	return 0;
}