#include <stdio.h>
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
//ÕýÈ·
