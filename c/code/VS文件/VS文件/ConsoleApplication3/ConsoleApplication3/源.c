#include <stdio.h>/*
void main()
{
	float d;
	int a;
	int b;
	int c;
	char e;
	printf("plerse enter three number\n");
	e = getchar();
	scanf("%d%d%d\n",&a,&b,&c);

	//scanf("%d\n", &b);
	//e = getchar();

	//scanf("%d\n", &c);
	//e = getchar();

	d = average();
	printf("这三个整数的平均值是：");
	printf("%f", d);
}
int average/*(int a, int b, int c)(){
	float d;
	d = (a + b + c) / 3;
	return d;
}*/

double average(int x, int y, int z) {
	return d= (x + y + z) / 3.0;
}
void main()
{
	int a, b, c;
	double d;
	printf("please put three number:");
	scanf("%d%d%d", &a, &b, &c);
	d = average(a, b, c);
	printf("%f", d);
}