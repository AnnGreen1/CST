#include <stdio.h>
int Factorial1(int n)
{
	int i1 = 2;
	int sum1 = 1;
	for (; i1 <= n; i1++)
	{
		sum1 *= i1;
	}
	printf("%d\n", sum1);

	int i2 = 2;
	int sum2 = 1;
	while (i2 <= n)
	{
		sum2 *= i2;
		i2++;
	}
	printf("%d\n", sum2);
	
	int i3 = 2;
	int sum3 = 1;
	do
	{
		sum3 *= i3;
		i3++;
	} while (i3 <=n);
	printf("%d", sum3);
	return 0;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	Factorial1( n );
	return 0;
}

//right








