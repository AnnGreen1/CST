#include <stdio.h>
int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a[20];
	int p;
	printf("（温馨提示：小于等于9)请输入一个整数：");
	scanf("%d", &p);
	for (int i = 0; i <= p; i++) {
		a[10 + i] = i;
	}
	for (int j = 0; j < 10; j++) {
		a[j] = array[j];
	}
	for (int z = 0; z <=10+p;z++){
		printf("%d", a[z]);
	}
	return 0;
}

	