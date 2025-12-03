#include <stdio.h>
int bijiao(int a[10])
{
	int a[10];
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
	printf("%d)
	return 0;
}
int main()
{
	int a[10];
	bijiao(a);
	return 0;
}






