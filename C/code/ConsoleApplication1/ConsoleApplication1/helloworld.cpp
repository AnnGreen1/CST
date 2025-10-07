/* 预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件 */
#include <stdio.h>

#define PI 3.14159 // 宏定义
const int MAX = 100;

int sum(int num1,int num2)
{
	return num1 + num2;
}

/* 主函数，程序从这里开始执行 */
int main()
{
	// hello world
	printf("Hello, World! \n");

	printf("%f", PI);

	printf("%d\n", sum(2, 3));

	int a = 0;
	printf("请输入 a 的值：");
	scanf_s("%d", &a);
	printf("输入的 a 的值为：%d \n", a);

	/*
	多行注释
	*/

	printf("%d\n", MAX);

	char greeting[] = "Hello, C programming languge. ";
		printf("%s\n", greeting);
		printf("%d\n", sizeof(greeting)); // 31，字符串末尾会自动添加一个空字符 \0

		short
			long

	/* 终止 main() 函数，并返回值 0 */
	return 0;
}