//#include <stdio.h>
int month(int b);
//int main()
//{
//	int b = 0;
//	month(a);
//	return 0;
//}
int month(int b)
{
	printf("tip:只能输入1-12的整数");
	scanf_s("%d", &b);
	if (3 <= b && b <= 5)
	{
		printf("春季");
	}

	else if (6 <= b && b <= 8)
	{
		printf("夏季");
	}
	else if (9 <= b && b <= 11)
	{
		printf("秋季");
	}
	else
	{
		printf("冬季");
	}
	return b;
}