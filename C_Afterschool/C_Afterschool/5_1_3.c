#include <stdio.h>

int w5_1_3(void) {
	double num, temp, sum=0;
	double result = 0;
	printf("정수의 개수를 입력하십시오 : \n");
	scanf("%lf", &num);
	int i = num;
	while (i > 0) {
		scanf("%lf", &temp);
		sum += temp;
		i--;
	}
	result = sum / num;
	printf("%lf\n", result);
	return 0;
}