#include <stdio.h>
int main() {
	float a[10];
	printf("请输入十个数字:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%f", &a[i]);
	}
	float sum = 0;
	for (int j = 0; j < 10; j++) {
		sum = sum + a[j];
	}
	int count = 0;
	float x = sum / 10;
	for (int z = 0; z < 10; z++) {
		if (a[z] > x) {
			count++;
		}
	}
	printf("%d", count);
}

