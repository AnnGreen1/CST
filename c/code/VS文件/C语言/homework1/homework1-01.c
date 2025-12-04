#include <stdio.h>
int fun1(int n) {
	int sn = 1;
	int i = 1;
	do {
		sn = sn*i;
		i++;
	} while (i <= n);
	printf("%d\n", sn);
	return 0;
}
int fun2(int n) {
	int sum = 1;
	int i = 1;
	while (i <= n) {
		sum = sum*i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
int fun3(int n){
	int sn = 1;
	for (int i = 1; i <= n; i++) {
		sn = sn*i;
	}
	printf("%d", sn);
	
}
int main() {
	int a;
	printf("请输入一个整数:");
	scanf("%d", &a);
	fun1(a);
	fun2(a);
	fun3(a);
}
