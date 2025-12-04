#include <stdio.h>
void fun(int a)
{
	int times = 0;
	int j = 0;
	//int i=0;
	int sum = 0;
	for (; j < 10; j++)
	{
		sum += a[j];
	}

}
int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	fun(a);
	return 0;
}