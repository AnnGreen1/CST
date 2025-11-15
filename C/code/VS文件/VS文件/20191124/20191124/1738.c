//#include <stdio.h>
//int main()
//{
//	printf("abc");
//	return 0;
//}
//int main()
//{
//	int i, sum;
//	i = 0;
//	sum = 1;
//	while (i <=100)
//	{
//		sum = sum + i;
//		i++;
//		//i++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int p = 00111100;
//	//int q = 00001101;
//	//int w = 0;
//	//w = p & q;
//	//printf("%b/n",w);
//	//printf("%d", p << 2);
//	printf("%d",0 & 0);
//	printf("%d",0 & 1);
//	printf("%d",1 & 0);
//	printf("%d",1 & 1);
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//
//	//unsigned int a = 60;    /* 60 = 0011 1100 */
//	//unsigned int b = 13;    /* 13 = 0000 1101 */
//	int c = 0;
//
//	/*c = a & b;       12 = 0000 1100 */
//	label2: printf("Line 1 - c 的值是 %d\n", c);
//
//	/*c = a | b;        61 = 0011 1101 */
//	label3: printf("Line 2 - c 的值是 %d\n", c);
//
//	//c = a ^ b;       /* 49 = 0011 0001 */
//	//printf("Line 3 - c 的值是 %d\n", c);
//
//	//c = ~a;          /*-61 = 1100 0011 */
//	//printf("Line 4 - c 的值是 %d\n", c);
//
//	//c = a << 2;     /* 240 = 1111 0000 */
//	//printf("Line 5 - c 的值是 %d\n", c);
//
//	//c = a >> 2;     /* 15 = 0000 1111 */
//	//printf("Line 6 - c 的值是 %d\n", c);
//
//	goto label2;
//	goto label3;
//	goto label3;
//	goto label3;
//	goto label2;
//}

//#include <stdio.h>
//
///* 全局变量声明 */
//int g = 20;
//
//int main()
//{
//	/* 局部变量声明 */
//	int g = 10;
//
//	printf("value of g = %d\n", g);
//
//	return 0;
//}

//#include <stdio.h>
//
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main(void)
//{
//	/* p 是函数指针 */
//	int(*p)(int, int) = &max; // &可以省略
//	int a, b, c, d;
//
//	printf("请输入三个数字:");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	/* 与直接调用函数等价，d = max(max(a, b), c) */
//	d = p(p(a, b), c);
//
//	printf("最大的数字是: %d\n", d);
//
//	return 0;
//}
//
//#include <stdlib.h>  
//#include <stdio.h>
//
//// 回调函数
//void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
//{
//	for (size_t i = 0; i<arraySize; i++)
//		array[i] = getNextValue();
//}
//
//// 获取随机值
//int getNextRandomValue(void)
//{
//	return rand();
//}
//
//int main(void)
//{
//	int myarray[10];
//	/* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
//	populate_array(myarray, 10, getNextRandomValue);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", myarray[i]);
//	}
//	printf("\n");
//	return 0;
//}

//

//#include <stdio.h>
//#include <string.h>
//
//union Data
//{
//	int i;
//	float f;
//	char  str[20];
//};
//
//int main()
//{
//	union Data data;
//
//	data.i = 10;
//	data.f = 220.5;
//	strcpy_s(data.str, "C Programming");
//
//	printf("data.i : %d\n", data.i);
//	printf("data.f : %f\n", data.f);
//	printf("data.str : %s\n", data.str);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = NULL;
//
//	fp = fopen("/tmp/test.txt", "w+");
//	fprintf(fp, "This is testing for fprintf...\n");
//	fputs("This is testing for fputs...\n", fp);
//	fclose(fp);
////}
//
//#include <stdio.h>
//
//main()
//{
//	printf("File :%s\n", __FILE__);
//	printf("Date :%s\n", __DATE__);
//	printf("Time :%s\n", __TIME__);
//	printf("Line :%d\n", __LINE__);
//	printf("ANSI :%d\n", __STDC__);
//
//}

#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{

	va_list valist;
	double sum = 0.0;
	int i;

	/* 为 num 个参数初始化 valist */
	va_start(valist, num);

	/* 访问所有赋给 valist 的参数 */
	for (i = 0; i < num; i++)
	{
		sum += va_arg(valist, int);
	}
	/* 清理为 valist 保留的内存 */
	va_end(valist);

	return sum / num;
}

int main()
{
	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
}