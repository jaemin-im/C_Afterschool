#include <stdio.h>

void w8_1_1() {
	int max = -1000;
	int min = 1000;
	int i;
	int arr[10];
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		else {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	}
	printf("짝수 중 가장 큰 값 : %d\n홀수 중 가장 작은 값 : %d\n", max, min);
}