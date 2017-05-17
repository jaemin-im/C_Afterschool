#include <stdio.h>

void w8_1_0() {
	int num[10];
	int max = 0;
	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 10; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}
	printf("%d\n", max);
}