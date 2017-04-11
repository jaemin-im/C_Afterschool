#include <stdio.h>

int w5_1_0(void) {
	int num;
	int i = 0;
	printf("양의 정수 입력 : \n");
	scanf("%d", &num);
	while (i < num) {
		printf("Hello\n");
		i++;
	}
	return 0;
}