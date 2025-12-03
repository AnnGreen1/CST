#include <stdio.h>
int fun1(int m, int n) {
	int count = 0;
	if (m < n) {
		int temp = n;
		n = m;
		m = temp;
	}
	int i = n;
	do {
		if (i % 2 == 0) {
			count++;
		}
		i++;
	} while (i <= m);
	printf("%d\n", count);
}
int fun2(int m, int n) {
	int count = 0;
	if (m < n) {
		int temp = n;
		n = m;
		m = temp;
	}
	int i = n;
	while (i <= m) {
		if (i % 2 == 0) {
			count++;
		}
		i++;
	}
	printf("%d\n", count);
}
int fun3(int m, int n) {
	int count = 0;
	if (m < n) {
		int temp = n;
		n = m;
		m = temp;
	}
	for (int i = n; i <= m; i++) {
		if (i % 2 == 0) {
			count++;
		}
	}
	printf("%d", count);

}
int main() {
	printf("请输入两个整数：");
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	fun1(a, b);
	fun2(a, b);
	fun3(a, b);
}