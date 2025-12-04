#include <stdio.h>
int age(int a);
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	age(a);
	month(b);
	day(c);
	homework04(x);
	return 0;
}
int age(int a)
{
	scanf_s("%d", &a);
	if (a >= 18)
	{
		printf("成年");
	}
	else {
		printf("未成年");
	}
	return 0;
}