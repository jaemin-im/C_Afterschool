#include <stdio.h>

int w5_1_1(void) {
	int num, i, j = 3;
	printf("양의 정수 입력 : \n");
	scanf("%d", &num);
	i = num;
	while (i > 0) {
		printf("%d ", j);
		j += 3;
		i--;
	}
	printf("\n");
	return 0;
}