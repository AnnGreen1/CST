#include <stdio.h>
int fun1(int a[10]) {
	int min = a[0];
	int j;
	for ( j = 0; j< 10; j++) {
		if (min < a[j]) {
			min = a[j];
		}
	}
	printf("最大值为%d", min);
	int max = a[0];
	for (j = 0; j< 10; j++) {
		if (max > a[j]) {
			max = a[j];
		}
	}
	printf("最小值为%d", max);
}
int main() {
	printf("请输入十个整数：（温馨提示：输完一个整数后换行）\n");
	int a[10];
	int j = 0;
		while (j < 10) {
			scanf("%d", &a[j]);
			j++;
	}
	fun1(a);
}