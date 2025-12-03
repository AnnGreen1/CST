/*
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

*///right

/*#include <stdio.h>
int fun(int m,int n)
{
	printf("m<n\n");
	scanf_s("%d %d", &m, &n);

	int sum = 0;
	for (; m <= n; m++)
	{
		if (m % 2 == 0)
		{
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
int main()
{
	int m=0;
	int n = 0;
	fun(m ,n);
	return 0;
}
*///ÕýÈ·

//#include <stdio.h>
//int a = 1;
//void fun(int a, int b) {
//	switch (a)
//	{
//	case 0: b++;
//	case 1: b = ++a;
//	default: b + 1;
//	}
//	printf("%d  %d", a, b);
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	fun(a, b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i=3;
//	int j = 56;
//	printf("%p %p", &i,&j);
//	return 0;
//}


#include <stdio.h>
int bijiao(int a[10])
{
	//int a[10];
	for (int i = 0; i < 10; i++)
	{
		scan("%d", &a[i]);
		getchar();
		printf("%d", a[i]);
	}
	//printf()
	return 0;
}
int main()
{
	bijiao(b);
	return 0;
}






