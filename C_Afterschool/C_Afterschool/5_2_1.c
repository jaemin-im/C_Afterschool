#include <stdio.h>

int w5_2_1(void) {
	int sum=0, num;
	do
	{
		printf("정수 입력 (0 to quit) : ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	printf("합계 : %d\n", sum);
	return 0;
}