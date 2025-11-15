#include <stdio.h>
char f(char x)
{
	return x*x % 10 + '0';
}
main()
{
	char a;
	int b = 0;
	for (a = 0; a<5; a += 1)
	{
		b = f(a);
		putchar(b);
	}
}