#include <stdio.h>
int age(int a);
int main() {
	int a;
	age(a);
	return 0;
}
int age(int a)
{
	scanf("%d", &a);
	if (a >= 18)
	{
		printf("成年");
	}
	else {
		printf("未成年");
	}
	return 0;
}