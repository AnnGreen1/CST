#include <stdio.h>
void main()
{
	int num;
	num = aveage();
}
int average() {
	int a, b, c, d;
	printf("请输入三个整数");
		scanf("%d,%d,%d", a, b, c);
		d = (a + b + c) / 3;
		return d;
}
