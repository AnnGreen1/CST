int day(int c);
//int main()
//{
//	int c;
//	day(a);
//	return 0;
//}
int day(int c)
{
	printf("请输入日期，提示，只能输入1-7");
	_scanf("%d", &c);
	switch (c)
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
}

