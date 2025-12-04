//#include <stdio.h>



//**********************************************************************************************
//int age(int a);
//int main(){
//	int a;
//	age（b);
//	return 0;
//}
//int age(int a)
//{
//	scanf("%d", &a);
//	if (a >= 18)
//	{
//		printf("成年");
//	}
//	else {
//		printf("未成年");
//	}
//	return 0;
//}
//*****************************************************************************************************


/*
int day(int a);
int main()
{
	int a;
	day(a);
	return 0;
}
int day(int a)
{
	printf("请输入日期，提示，只能输入1-7");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("非休息日");
		break;
	case 2:
		printf("非休息日");
		break;
	case 3:
		printf("非休息日");
		break;
	case 4:
		printf("非休息日");
		break;
	case 5:
		printf("非休息日");
		break;
	case 6:
		printf("休息日");
		break;
	case 7:
		printf("休息日");
		break;
	default:
		printf("日期有误！");
	}
	return 0;
}*/



//*********************************************************************************************************



/*int month(int a);
int main()
{
	int a=0;
	month(a);
	return 0;
}
int month(int a)
{
	printf("tip:只能输入1-12的整数");
	scanf("%d", &a);
	if (3 <= a && a<= 5)
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
	}*/


//****************************************************************************************************************


/*
float homework04(int x);
int main()
{
	int x;
	homework04(x);
	return 0;
}
float homework04(int x)
{
	scanf("%d", &x);
	if (x < 0)
	{
		printf("%d", -x);
	}
	else if (0 <= x && x < 25)
	{
		printf("%d", x*x);
	}
	else (25 <= x);
	{
		printf("%d", x / 3 + x / 2);
	}
	return x;
	*/



//int main()
//{
//	printf("hhh");
//	return 0;
//}



#include <stdio.h>
int fun1(int scores[5], int length)
{
	int i;
	int min=scores[0];
	for (i = 1; i <= 4; i++)
	{
		if (scores[0] >scores[i])
		{
			min = scores[i];
		}
		return 0;
	}
}
int mian()
{
	int scores[5] = { 78,68,72,98,76 };
	int length = sizeof(scores) / sizeof(scores[0]);
	int min = fun1(scores[5], length);
	printf("最小值：%d\n", min);
	/*int max = fun2(scores, length);
	printf("最大值：%d\n", max);
	float avg = fun3(scores, length);
	printf("平均值：%。2f\n", avg);*/
	return 0;
}









	