//#include <stdio.h>
//int fun(int m,int n)
//{
//printf("m<n\n");
//scanf_s("%d %d", &m, &n);
//
//int sum = 0;
//for (; m <= n; m++)
//{
//if (m % 2 == 0)
//{
//sum++;
//}
//}
//printf("%d", sum);
//return 0;
//}
//int main()
//{
//int m=0;
//int n = 0;
//fun(m ,n);
//return 0;
//}
//ÕýÈ·


/*
#include <stdio.h>
int bijiao(int a[10])
{
	//int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		getchar();
		printf("%d", a[i]);
	}
	int min = 0;
	int max = 0;
	for (int j = 0; j < 10; j++)
	{
		if (a[j] > max)
		{
			a[j] = max;
		}
	}
	printf("%d", max);
	for (int n = 0; n < 10; n++)
	{
		if (a[n] < min)
		{
			a[n] = min;
		}
	}
	printf("%d", min);
	//printf("%d)
	return 0;
}
int main()
{
	int a[10];
	bijiao(a);
	return 0;
}

*/


#include <stdio.h>
#include <string.h>
void dbx(char a[10])
{
	int i = 0;
	for (; i < 10; i++)
	{

		if (a[i] <97)
		{
			a[i] += 32;
		}
	}
	//printf("%s", a);
	//return 0;
}
int main()
{
	char a[10];
	scanf_s("%c", a);

	dbx(a);
	printf("%s", a);
	return 0;
}



