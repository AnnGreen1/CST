//#include <stdio.h>
int month(int a);
int main()
{
	int a = 0;
	month(a);
	return 0;
}
int month(int a)
{
	printf("tip:只能输入1-12的整数");
	scanf("%d", &a);
	if (3 <= a && a <= 5)
	{
		printf("春季");
	}

	else if (6 <= a && a <= 8)
	{
		printf("夏季");
	}
	else if (9 <= a && a <= 11)
	{
		printf("秋季");
	}
	else
	{
		printf("冬季");
	}
	return a;
}
