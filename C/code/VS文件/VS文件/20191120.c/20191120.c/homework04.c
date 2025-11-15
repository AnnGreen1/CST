float homework04(int x);
//int main()
//{
//int x;
//homework04(x);
//return 0;
//}
float homework04(int x)
{
	_scanf("%d", &x);
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
}
