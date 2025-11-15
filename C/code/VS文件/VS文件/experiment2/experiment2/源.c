//#include <stdio.h>
//experiment2{ <stdio.h>
//int main()
//int a;
//printf("please enter three number");
//scanf("%d", &a);
//if (a % 7 = 0)
//{
//	printf("yes");

//}
///*else
/*{

}*/
/*。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。*/
//{
//	int a = 5;
//	printf("%d %d %d ", a++, ++a, a++);
//	//7   8   5
//	return 0;
//}
//

//void fun(char a);
//int main() {
//	char a;
//	fun(a);
//	return 0;
//}
//void fun(char a)
//  {
//	scanf("%c", &a);
//	printf("%d\n", a);
//	if (a <= 96) {
//		a = a + 32;
//		printf("%c", a);
//	}
//	else {
//		a = a + 32;
//		if (a <= 120)
//		{
//			a = a + 13;
//		}
//		else {
//			a = a - 13;
//		}
//
//	}
//	a += 13;
//	printf("%d", a);
//	return 0;
//}
//{
//	int a = 12;
//	printf("%d", /*a +=*/ a -= a *= a);
//	printf("%d", a -= a);
//	return 0;
//}




//void main() {
//	int i, j;
//	i = 010;
//	j = 9;
//	printf("%d,%d", i - j, i + j);
//}
//




//int main()
//{
//	float b = 123.123;
//	double a = 123.123;
//	printf("%f\n", a);
//	printf("%lf\n", a);
//	printf("%f\n", b);
//	printf("%lf", b);
//	return 0;
//}



//int main(){
//char a, b, c, d;
//a = 'z';
//b = 'x';
//c = 'h';
//d = 'g';
//printf("%c %c %c %c", a,b,c,d);
//return 0;
//
//}




//float mianji(int r);
//int main()
//{
//	int r;
//	mianji(r);
//	return 0;
//
//}
//float mianji(int r)
//{
//	float s;
//	scanf("%d", r);
//	s = 3.14*r;
//	printf("%f", s);
//	return s;
//}

//数的提取,错误
//#include <stdio.h>
//int fun(int a,int b);
//int main()
//{
//	int a=0;
//	int b=0;
//	fun(a,b);
//	return 0;
//}
//int fun(int a,int b)
//{
//	//int b;
//	printf("please enter one number,四位数");
//	scanf("%d  %d", &a,&b);
//	if (b = 1)
//	{
//		printf("个位数为 %d", a % 10);
//	}
//	else if (b = 2)
//	{
//		printf("十位数为 %d", a % 100 / 10);
//	}
//	else if (b = 3)
//	{
//		printf("百位数为 %d", (a - a % 100) % 1000 / 100);
//	}
//	else  (b = 4)
//		; {
//		printf("千位数为 %d", (a - a % 1000) % 1000);
//	}
//	return 0;
//}




/*
int main()
{
	int i = 0;
	while (i < 10)
	{
		printf("Hello World\n");
		i++;
	}
	return 0;
}
*/

/*
int main()
{
	//int a = 0;
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			printf("%d  ", i);
		}
		i++;
		
	}
	return 0;
}
*/


/*
int main()
{
	int i = 1;
	do {
		printf("Hello World\n");
		i++;
	} while (i <= 100);
	return 0;
}*/


//int main()
//{
//	int i = 1;
//	int a = 1;
//	while (i <= 100)
//	{
//		if (i % (a + 1) == 0)
//		{
//			printf("%d", i);
//			a++;
//		}
//		else
//		{
//			a++;
//		}  
//		i++;
//
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	do
//	{
//		i += 1;
//		printf("%d ", i );
//	} while (i < 10);
//	return 0;
//}
//
//

//
//int main()
//{
//	int i = 1;
//	while ( i <= 100)
//	{
//		if (i % 2 == 0)
//		{
//			
//			printf("%d ", i);
//
//			}
//		i++;
//
//	}
//	return 0;
//}
//


//
//int main()
//{
//	//int i;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("Hello World ");
//	}
//	return 0;
//}
//


//int i;
//int count = 0;
//for (i = 100; i <= 200; i++)
//{
//	if (i % 3 != 0)
//	{
//		count ++
//	}
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	a += b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 10 == 0)
//		{
//			printf("\n");
//		}
//		printf("%d  ", a);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 10 == 0)
//		{
//			printf("\n");
//		}
//		printf("%d   ", a);
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	/*int a = 1;
//	int b = 1;
//	int b = 1;*/
//	for (int a = 1; a < 10; a++)
//	{
//		for (int b = 1; b < 10; b++)
//		{
//			printf("%d*%d=%d\t", a, b, a*b);
//			if (b == 9)
//			{
//				printf("\n");
//			}
//
//		}
//	}
//	return 0;
//}
//


//int main()
//{
//	int a = 0;
//	printf("%d", a % 3);
//	return 0;
//}




//int fun1();
//int fun2();
//int fun3();
//int main()
//{
//	fun1();
//	fun2();
//	fun3();
//	return 0;
//}
//int fun1()
//{
//	printf("使用while循环：1-100之间所有奇数的和为：");
//	int a = 1;
//	int sum = 0;
//	while (a <= 100)
//	{
//		if (a % 2 != 0)
//		{
//			sum = sum + a;
//		}
//		a++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int fun2()
//{
//	printf("使用do...while循环：1-100之间所有奇数和为：");
//	int a = 1;
//	int sum = 0;
//	do {
//		if (a % 2 != 0)
//		{
//			sum = sum + a;
//		}
//		a++;
//	} while (a <= 100);
//	printf("%d\n", sum);
//		return 0;
//}
//int fun3()
//{
//	printf("使用for循环：1-100之间所有奇数的和为：");
//	int sum=0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum = sum + i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}









//int wei8(int a, int b);
//int main()
//{
//	int  b=10;
//	int a;
//	wei8(a,b);
//	return 0;
//}
//int wei8(int a,int b)
//{
//	//int a;
//	//int b = 10;
//	printf("请输入一个不超过8位长度的正整数：");
//	scanf("%d", &a);
//	for (a; 1; b *= 10)
//	{
//		if (a / b >= 1)
//		{
//			//b *= 10;
//			continue;
//		}
//		else
//		{
//			//b *= 10;
//			printf("%d", b);
//			break;
//		}
//		//b *= 10;
//
//	}
//
//}

//int main()
//{
//	//int a;
//	int now = 15;
//	int i;
//	for ( i=0; now < 50; i++)
//	{
//		now += 5;
//	}
//	printf("挑%d次水才可以把水缸挑满\n",i);
//}
//



//int main()
//{
//	int salary = 8000;
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		salary *= 1.05;
//
//	}
//	printf("%d年后工资为：  %d", i,salary);
//	return 0;
//}



//int main()
//{
//	int i = 0;
////	for (;;)
//	int a;
//
//	while (a < 101)
//	{
//		while (1)
//		{
//			if (a / i != 0)
//			{
//				printf("%d", a);
//
//			}
//			a++;
//			//i++;
//		}
//		i++;
//	}
//
//
//}


//任意输入一个不超过8位长度的正整数，判断这个正整数的位数
////#include<stdio.h>
//void fun(){
//	int number;
//	printf("请输入一个不超过8位长度的正整数：\n");
//	scanf("%d", &number);
//	int count = 1;
//	while(number >= 10);
//	{
//		number /= 10;
//		count++;
//	}
//	printf("这个整数的位数为：%d\n", count);
//}
//int main(){
//	fun();
//	return 0;
//}


//#include <stdio.h>
//void fun()
//{
//	int i,k;
//	int j = 0;
//	printf("100-999之间的水仙花数：");
//	for (int num = 100; num <= 999; num++)
//	{
//		i = num / 100;//分解出百位
//		i = num / 10 % 10;//分解出十位
//		k = num % 10;//分解出个位
//		if (i*i*i + j*j*j + k*k*k == num)
//		{
//			printf("%d\t", num);
//		}
//	}
//}
//int main()
//{
//	fun();
//	return 0;
//}



//循环2
//#include <stdio.h>
//int Primenumber(int a);
//int main()
//{
//	int a=0;
//	Primenumber(a);
//	return 0;
//}
//int Primenumber(int a)
//{
//	//int a;
//	int i;
//	printf("请输入一个正整数");
//	scanf("%d", &a);
//		for (i = 2; i < a; i++)
//		{
//			if (a%i == 0)
//			{
//				printf("z   ");
//			}
//		}
//	
//		return 0;
//}
//


//输出完整九九乘法表
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//			printf("%d*%d=%2d\t", i, j, i*j);
//
//		printf("\n");
//	}
//	return 0;
//}


//九九乘法表，右上三角

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//			//printf("%d*%d=%2d\t", i, j, i*j);
//		{
//			if (j < i)
//				printf("        ");
//			else
//				printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//九九乘法表。左上三角
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//			//printf("%d*%d=%2d\t", i, j, i*j);
//		{
//			if (j < i)
//				//printf("        ");
//			//else
//				printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//输出右下，九九乘法表
//#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	for (i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= 9 - i; n++)
//			printf("        ");
//
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d  ", i, j, j*i);
//
//		printf("\n");
//	}
//	return 0;
//}


//输出左下，九九乘法表
//#include <stdio.h>
//int main()
//{
//	int i, j, n;
//	for (i = 1; i <= 9; i++)
//	{
//		/*for (n = 1; n <= 9 - i; n++)
//			printf("        ");*/
//
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d  ", i, j, j*i);
//
//		printf("\n");
//	}
//	return 0;
//}



//1、输入一个正整数，判断该数是否是素数，如果是，输出  是素数，反之亦然
//#include <stdio.h>
//int sushu(int a);
//int main()
//{
//
//}
//int sushu(int a)
//{
//	int a;
//	printf("请输入一个正整数");
//		scanf("%d", &a);
//		int i;
//		for (i = 2; i < a; i++)
//		{
//			if (a%i == 0)
//			{
//
//			}
//
//}

//
//int mian()
//{
//	int i = 1;
//	int j = 2;
//	int a;
//	for (i = 1; i < j; i++,j++)
//	{
//		printf("*");
//	}
//	return 0;
//}



//void fun1(int n){
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 2 * n - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入等腰三角形的行数：");
//	scanf("%d", &n);
//	fun1(n);
//	return 0;
//}



//求最大公倍数和最小公约数
//#include <stdio.h>
//void fun1(int m,int n){
//	if (m < n)
//	{
//		int temp = m;
//		m = n;
//		n = temp;
//	}
//	for (int i = n; i > 0; i--)
//	{
//		if (m%i == 0 && n%i == 0)
//		{
//			printf("%d和%d的最大公约数：%d\n", m, n, i);
//			
//			break;
//		}
//	}
//	for (int i = m; i > 0; i++)
//	{
//		if (i%m == 0 && i%n == 0)
//		{
//			printf("%d和%d的最小公倍数：%d\n", m, n, i);
//			break;
//		}
//	}
//}
//int main()
//{
//	int m, n;
//	printf("请输入两个整数：");
//	scanf("%d %d", &m, &n);
//	fun1(m, n);
//	return 0;
//}


//求素数
//#include <stdio.h>
//void fun1(int n);
//int main()
//{
//	fun1(67);
//	return 0;
//}
//void fun1(int n)
//{
//	//******************************************************************************************************
//	//int n;
//	//int m;
//	//scanf("%d", &m);
//	//m = n;
//	//**********************************************************************************************************
//	int flag = 1;
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			flag = 0;
//		}
//	}
//	if (flag)
//	{
//		printf("%d是素数", n);
//	}
//	else {
//		printf("%d不是素数", n);
//	}
//}




//求素数
//#include <stdio.h>
//void fun()
//{
//	int flag;
//	int count=0;
//	//int i;
//	//int j;
//	for (i = 200; i <= 300; i++);
//	{
//		flag = 1;
//		for ( j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			printf("%d\t", i);
//		}
//			count++;
//			if (count % 8 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("200-300之间的所有素数 %d", count);
//}
//int main()
//{
//	fun();
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d\t", &a);
//	printf("%d\t",a/1%10);
//	printf("%d\t",a/10%10);
//	printf("%d\t",a/100%10);
//	printf("%d\t",a/1000%10);
//	/*printf("%d");
//	printf("%d");*/
//	return 0;
//
//
//
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	scanf("%d-%d", &a, &b);
//	printf("%d", a - b);
//	return 0;
//}

//#include<stdio.h> 
//void main()
//{
//	int a = 1, b = 10;
//	do
//	{
//		b -= a; a++;
//	} while (b--<0);
//	printf("%d,%d\n", a, b);
//}

//#include<stdio.h> 
//void main()
//{
//	int n = 4;
//	//while (n--) printf("%d ", n--);
//	printf("%d", n--);
//}




//大小写转换
//#include <stdio.h> 
//void main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'A' && ch <= 'Z') ch = ch + 32;
//		else if (ch >= 'a' && ch<'z') ch = ch - 32;
//		printf("%c", ch);
//	}
//	printf("\n");
//}

//#include<stdio.h> 
//void main()
//{
//	int x;
//	for (x = 5; x>0; x--)
//		if (x--<5) printf("%d,", x);
//		else printf("%d,", x++);
//}


//
//#include <stdio.h>
//int main()
//{
//	int c;
//	int a = c;
//	printf(a);
//	return 0;
//}
//测试


//int main()
//{
//	printf("hhhh");
//	return 0;
//}




//
//#include <stdio.h>  //标准输入输出函数库 
//#include <stdlib.h> //包含system函数 
//#include <windows.h>//包含Sleep函数，来控制速度
//#include <time.h>   //设置食物时随机生成坐标用到time做种子
//
//#define DOWN_WALL 20	 //下边框  (下面的墙)   //使用宏定义 ，是方便以后调整边框大小 
//#define RIGHT_WALL 58 //右边框 (右面的墙)
//
////加上typedef 以后声明此类型的结构体不需要struct关键字，可以用这样声明 Snake s1;(原来：struct s_snake s1)
//typedef struct s_snake //用来存储每一段蛇身的坐标位置 
//{
//	int x; //x坐标 
//	int y; //y坐标 
//	struct s_snake *next; //下一段蛇身 
//}Snake;
//
///*函数声明*/
//void SetPos(int x, int y);//移动光标函数
//int IsHitWall();//判断撞墙函数
//int IsBiteYouself();//判断咬到自己的函数
//void DrawFrame();//画边框函数
//void InitSnake();//初始化蛇函数
//void CreateFood();//创建食物函数
//void PlayGame();//游戏移动循环函数
//int Move();//移动函数,方向控制 
//void Welcome();//欢迎界面
//void free_snake(Snake *head);//释放资源 
//
//Snake *head, *end;//蛇头、蛇尾
//Snake *p;//辅助指针
//int speed = 310;//休眠时间，用来控制移动速度 
//int level = 0, score = 0;//分数
//int foodx, foody;//食物的（x，y）坐标
//char key;//方向，暂停/继续 控制状态 
//
//int main()
//{
//	Welcome(); //欢迎界面 
//	DrawFrame();//画边框 
//	InitSnake();//初始化蛇身 
//	CreateFood();//创建食物 
//
//				 //右侧提示信息 
//	SetPos(60, 7);
//	printf("得分:%d", score);
//	SetPos(60, 8);
//	printf("当前速度:%d毫秒", speed);
//	SetPos(60, 9);
//	printf("每+30分速度变快");
//	SetPos(60, 10);
//	printf("不能撞墙/咬到自己");
//	SetPos(60, 11);
//	printf("按空格暂停/继续");
//
//	PlayGame();//按方向键控制蛇身进行游戏 
//
//	free_snake(head);
//	return 0;
//}
//
//void SetPos(int x, int y)//设置光标位置(就是输出显示的开始位置)
//{
//	/*  COORD是Windows API中定义的一种结构体
//	*	typedef struct _COORD
//	*	{
//	*		SHORT X;
//	*		SHORT Y;
//	*	} COORD;
//	*
//	*/
//	COORD pos = { x,y };
//	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);//获得 标准输出的句柄
//	SetConsoleCursorPosition(output, pos); //设置控制台光标位置 
//}
//
//int IsHitWall()//判断是否撞墙 
//{
//	if (head->x == 0 || head->x == RIGHT_WALL || head->y == 0 || head->y == DOWN_WALL)
//	{  //因为蛇头最先动，并且蛇身后一段下一步会在前一段，所以只要蛇头不撞墙，那么整个蛇身就不会 撞墙 
//		SetPos(DOWN_WALL, 14);
//		printf("游戏结束！撞到墙了\n");
//		SetPos(DOWN_WALL, 15);//令 ‘按任意键继续...’居中显示 
//							  //system("pause");//暂停
//		return 1;
//	}
//	return 0;
//}
//
//int IsBiteYouself()//判断是否咬到自己 
//{
//	while (p->next != NULL)
//	{
//		p = p->next;
//		if (head->x == p->x&&head->y == p->y)//判断蛇头是否与其他蛇身重合 
//		{
//			SetPos(DOWN_WALL, 14);
//			printf("游戏结束！你咬到自己了\n");
//			SetPos(DOWN_WALL, 15);//令 “请按任意键继续”居中显示 
//								  //system("pause");//暂停 
//			return 1;
//		}
//	}
//	return 0;
//}
//
//void DrawFrame()//画边框 
//{
//	int i = 0;
//	for (i = 0; i<60; i += 2)//打印上下边框 注意i 一段蛇身占用 x 2个单位， y 1个单位 
//	{
//		SetPos(i, 0);   //上边框 
//		printf("■");
//		SetPos(i, DOWN_WALL);//下边框 
//		printf("■");
//	}
//	for (i = 1; i<DOWN_WALL; i++)//打印左右边框
//	{
//		SetPos(0, i); //左边框 
//		printf("■");
//		SetPos(RIGHT_WALL, i); //右边框 
//		printf("■");
//	}
//}
//
//void InitSnake()//初始化蛇身  头插法	初始化从(20,15)开始的四段蛇身 (横向排列) 
//{
//	int i = 0;
//
//	//创建一个蛇身位置 蛇尾 
//	end = (Snake*)malloc(sizeof(Snake));
//	end->x = 20;
//	end->y = 15;
//	end->next = NULL;
//
//	//创建三个蛇身位置 
//	for (i = 1; i <= 3; i++)
//	{
//		head = (Snake*)malloc(sizeof(Snake));
//		head->x = 20 + 2 * i; //每个蛇身 x相差 2个单位 
//		head->y = 15;
//
//		head->next = end;  //头插法 
//		end = head;
//	}
//
//	//从蛇头开始画贪吃蛇 
//	while (end->next != NULL)
//	{
//		SetPos(end->x, end->y);
//		printf("■");
//		end = end->next;
//	}
//}
//
//void CreateFood()//设置食物 
//{
//	srand(time(0));//设置随机数种子 
//flag:
//	while (1)//由于food的x坐标必须为偶数，所以设置循环判断是否为偶数
//	{
//		//rand()%num产生 0~num-1
//		//rand产生范围数公式rand()%(m+1-n)+n;有效范围在 [n,m]
//		foody = rand() % (DOWN_WALL - 1 + 1 - 1) + 1;//foody的有效范围在 [1,DOWN_WALL-1 ]
//		foodx = rand() % (RIGHT_WALL - 2 + 1 - 3) + 3;//foodx的有效范围在    [3,RIGHT_WALL-2] 注意x是以2为单位的 
//		if (foodx % 2 == 0)
//		{
//			break;
//		}
//	}
//	p = head;
//	while (1)
//	{
//		if (p->x == foodx&&p->y == foody)//若生成坐标和蛇重叠了，回到生成坐标循环
//		{
//			goto flag;
//		}
//
//		if (p->next == NULL) //与每一段蛇身比较完毕，跳出循环 
//		{
//			break;
//		}
//		p = p->next;
//	}
//
//	SetPos(foodx, foody);
//	printf("■");  //显示食物 
//}
//
//void PlayGame()//贪吃蛇移动，暂停
//{
//	int mv_ret = 0;//移动后的返回值，如果撞墙、或就咬到自己设置为1 
//	key = 'd';//刚开始，贪吃蛇默认向右移动 
//	while (1)
//	{
//		//GetAsyncKeyState(VK_UP) 判断VK_UP按键的状态，若是被按下，则位15设为1；如抬起，则为0 
//		//所以要 与上0x8000 取出第15位 进行判断  
//		if ((GetAsyncKeyState(VK_UP) && 0x8000) && key != 's')//与key!='s'，因为不能后退 
//		{
//			key = 'w';//如果本来不是向下的，按下向上键，将key设置为w 
//		}
//		else if ((GetAsyncKeyState(VK_DOWN) && 0x8000) && key != 'w')
//		{
//			key = 's';
//		}
//		else if ((GetAsyncKeyState(VK_RIGHT) && 0x8000) && key != 'a')
//		{
//			key = 'd';
//		}
//		else if ((GetAsyncKeyState(VK_LEFT) && 0x8000) && key != 'd')
//		{
//			key = 'a';
//		}
//		else if (GetAsyncKeyState(VK_SPACE) && 0x8000) //暂停/继续函数 
//		{
//			//补上消隐的蛇尾(蛇尾还在)  原因未知   
//			while (p->next != NULL) p = p->next;
//			SetPos(p->x, p->y);
//			printf("■");
//
//			while (1)//暂停语句
//			{
//				Sleep(100); //必要延时(消抖) Sleep(毫秒)
//				if (GetAsyncKeyState(VK_SPACE) && 0x8000)
//				{
//					break;
//				}
//			}
//
//			//擦掉补上的 蛇尾 
//			SetPos(p->x, p->y);
//			printf(" ");
//		}
//		else if (GetAsyncKeyState(VK_ESCAPE) && 0x8000)//按下ESC退出游戏，VK_ESCAPE == 27 
//		{
//			return;
//		}
//
//
//		//实时刷新速度  得分每+30分 移动速度变快
//		if (score == level && speed > 10)//判断得分
//		{
//			speed -= 10; //睡眠时间，改变移动速度，越少越快 
//			level += 30; //速度变快条件 变化 
//
//			SetPos(60, 8);
//			printf("当前速度:%d毫秒", speed);
//		}
//		mv_ret = Move();//移动蛇身 
//		if (mv_ret == 1)
//		{
//			break;
//		}
//	}
//}
//
//int Move()//移动函数，w前 s后 a左 d右，实现移动:头部增加一个，尾部减掉一个 
//{
//	int ret;
//
//	//不是按下控制方向的 a,s,d,w 就 
//	if ((key != 'a') && (key != 's') && (key != 'd') && (key != 'w'))
//	{
//		return 0;
//	}
//
//	ret = IsHitWall(); //是否撞墙 
//	ret += IsBiteYouself(); //是否咬到自己 
//	if (ret == 1)
//	{
//		return 1;
//	}
//
//	p = (Snake*)malloc(sizeof(Snake));//头部增加的那个 
//	p->next = head;//添加到头部 
//
//	switch (key)
//	{
//	case 'd'://向右 
//		p->x = head->x + 2;//右边 
//		p->y = head->y;
//		break;
//
//	case 'w'://向上 
//		p->x = head->x;
//		p->y = head->y - 1;//向上 
//		break;
//
//	case 's'://向下 
//		p->x = head->x;
//		p->y = head->y + 1;//向下 
//		break;
//
//	case 'a'://向左 
//		p->x = head->x - 2;//向左 
//		p->y = head->y;
//		break;
//
//	}
//
//	//画出新的头部 
//	SetPos(p->x, p->y);
//	printf("■");
//
//	head = p;//在贪吃蛇的头部添加一个称为新的头 ，相当于是贪吃蛇移动一格 
//			 //如果 移动的一格刚好是食物的位置,新增的称为蛇头，不用去掉蛇尾
//			 //如果 移动的一格刚好是食物的位置，新增的称为蛇头，去掉蛇尾，就是贪吃蛇移动一格的效果 
//
//	Sleep(speed);//移动速度的控制 
//	if (p->x == foodx && p->y == foody)//移动的一格刚好是食物的位置 
//	{
//		CreateFood();
//		score += 10;
//		SetPos(60, 7);
//		printf("得分:%d", score);
//
//	}
//	else   //吃不到食物，头部添加一个，尾部去掉一个 
//	{
//		//移动的一格刚好是食物的位置,新增的称为蛇头，不用去掉蛇尾 
//		while (p->next->next != NULL) p = p->next;//指向蛇尾前一格，因为需要释放蛇尾，节约内存 
//
//		SetPos(p->x, p->y);//为什么不是POS(p->next->x,p->next->y)? 
//		printf(" ");//擦掉蛇尾(蛇头加一，蛇尾减一，实现移动效果) 
//
//		free(p->next);//释放蛇尾
//		p->next = NULL;
//		p = head;//将p指向head 
//	}
//
//	return 0;
//}
//
//void Welcome()//欢迎界面 
//{
//	SetPos(25, 8);
//	printf("【贪吃蛇】   作者：Genven_Liang");
//	SetPos(25, 11);
//	printf("【游戏规则】");
//	SetPos(25, 12);
//	printf("1、不能撞墙、咬到自己");
//	SetPos(25, 13);
//	printf("2、按空格暂停/继续游戏");
//
//	printf("\n");
//	SetPos(30, 15);
//	system("pause");//暂停 
//	system("cls");//清屏 
//}
//
//void free_snake(Snake *head)//释放资源 
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return;
//	}
//
//	while ((p = head) != NULL)
//	{
//		head = head->next;
//		free(p);
//	}
//}
////五、关于看不见“游戏结束”
////————————————————
////版权声明：本文为CSDN博主「Genven_Liang」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
////原文链接：https ://blog.csdn.net/nanfeibuyi/article/details/82724532





//
//
///*********************************************
//*贪吃蛇
//*用0表示空白的地方，用大于0的数做蛇，从蛇尾到蛇头的数依次增大，其它（墙，食物）的用负数表示，
//*碰到食物就把食物那个点的值变成蛇头值+1，食物的点变成蛇头，退出
//*没有碰到食物，下一个点为空，就把下一个点的值变成蛇头值+1，
//*在将整个数组大于0的值都减一，蛇尾为一的自然变为0，就消失了，其它情况直接退出
//*@author zhoufei
//*@date 2018-06-03
//*********************************************/
//#include<stdio.h>
//#include<windows.h>
//#define FOOD -4     //食物
//#define WALL -9   //墙
//#define COL 35
//#define ROW 20
//#define VK_UP 72   //方向键上下左右的第二个值,方向键有两个值,第一个是224,分别是72,...
//#define VK_DOWN 80
//#define VK_LEFT 75
//#define VK_RIGHT 77
//#define int short  //把所有的int类型数据换成short类型节约空间 
///*心得，常量大写，变量有多个单词加下划线，函数多个单词首字母小写，其余首字母大写*/
////用word打特殊符号，再复制
//void fangXiangChoice(int arr[][COL]);  //输入的方向的
//void start(int p[][COL]);           //开始之前的初始化操作
//void print(int* a);                 //输出函数，输出到屏幕
//void produceFood(int a[][COL]);        //产生食物
//void moveSnake(int(*arr)[COL], int * fx);          //蛇的移动
//int head_v = 4, head_h = 5;
////蛇头的纵向坐标和横向坐标,用大于0的数做蛇，从蛇尾到蛇头的数依次增大，
//int arr[ROW][COL];
//int speed_snake = 5;  //蛇移动的速度，几次循环执行一次来控制
//int fang_xiang = VK_RIGHT;//蛇移动的方向，默认向右
//int exitgame = 0;
//
//HANDLE hOutput, hOutBuf;  //控制台屏幕缓冲区句柄
//HANDLE *houtpoint;
//COORD coord = { 1,0 };
//DWORD bytes = 0;
//char data[ROW][COL];
//int zhixiang_hOutput = 0;  //通过指针轮流指向两个缓冲区，实现双缓冲 
//void main()
//{
//	int k;
//	start(arr);
//	produceFood(arr);
//	puts("嗨～欢迎你来到贪吃蛇的世界！请君坐好了，要开车了～");
//	Sleep(2000);  //休眠2秒
//	system("cls");
//	hOutBuf = CreateConsoleScreenBuffer(
//		GENERIC_WRITE,  //定义进程可以往缓冲区写数据
//		FILE_SHARE_WRITE, //定义缓冲区可共享写权限
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL
//		);
//	hOutput = CreateConsoleScreenBuffer(
//		GENERIC_WRITE,  //定义进程可以往缓冲区写数据
//		FILE_SHARE_WRITE, //定义缓冲区可共享写权限
//		NULL,
//		CONSOLE_TEXTMODE_BUFFER,
//		NULL
//		);
//	SetConsoleTitle(TEXT("贪吃蛇"));
//	SMALL_RECT rc = { 0,0,COL + 10,ROW + 4 };  //设置窗口大小，宽度和高度
//	SetConsoleWindowInfo(hOutput, 1, &rc);
//	SetConsoleWindowInfo(hOutBuf, 1, &rc);
//	//隐藏两个缓冲区的光标
//	CONSOLE_CURSOR_INFO cci;
//	cci.bVisible = 0;
//	cci.dwSize = 1;
//	SetConsoleCursorInfo(hOutput, &cci);
//	SetConsoleCursorInfo(hOutBuf, &cci);
//	while (1)
//	{
//		if (kbhit())
//		{
//			fangXiangChoice(arr);
//			moveSnake(arr, &fang_xiang);
//			print(arr[0]);
//		}
//		if (k++ % speed_snake == 0)
//		{
//			moveSnake(arr, &fang_xiang);
//			print(arr[0]);
//		}Sleep(40);
//	}
//}
//void fangXiangChoice(int arr[][COL])
//{
//	int key1, key2;
//	key1 = getch();
//	if (key1 == 27)//ESC建退出
//		exitgame = 1;
//	if (key1 == 224)
//	{
//		key2 = getch();
//		switch (key2)
//		{
//		case VK_UP: if (fang_xiang != VK_DOWN) fang_xiang = VK_UP;  //如果在向下移动，那蛇就不能向上移动，下面的相同
//			break;
//		case VK_DOWN: if (fang_xiang != VK_UP) fang_xiang = VK_DOWN;
//			break;
//		case VK_LEFT: if (fang_xiang != VK_RIGHT) fang_xiang = VK_LEFT;
//			break;
//		case VK_RIGHT: if (fang_xiang != VK_LEFT) fang_xiang = VK_RIGHT;
//		}
//	}
//}
//void start(int p[][COL])
//{
//	int i, j;
//	p[head_v][head_h] = 2; //初始化蛇头，蛇身
//	p[head_v][head_h - 1] = 1;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)
//				p[i][j] = WALL;     //初始化墙
//		}
//	}
//}
//void produceFood(int a[][COL])
//{
//	int food_v, food_h;
//	srand(time(NULL));
//	food_v = rand() % ROW;
//	food_h = rand() % COL;
//	while (a[food_v][food_h] != 0)
//	{
//		food_v = rand() % ROW;
//		food_h = rand() % COL;
//	}
//	a[food_v][food_h] = FOOD;
//}
///**
////蛇头的纵向坐标和横向坐标,用大于0的数做蛇，从蛇尾到蛇头的数依次增大，
////碰到食物就把食物那个点的值变成蛇头值+1，食物的点变成蛇头，退出
////没有碰到食物，下一个点为空，就把下一个点的值变成蛇头值+1，
////在将整个数组大于0的值都减一，蛇尾为一的自然变为0，就消失了，其它情况直接退出
//
//void moveSnake(int(*arr)[COL], int * fx)  //根据传入的方向移动蛇
//{
//	int i, j, eat_food = 0; //为0表示没有吃到食物
//	int temp = arr[head_v][head_h]; //记录现在蛇头的值
//	if (*fx == VK_UP)
//	{
//		if (arr[head_v - 1][head_h] == 0)    head_v--;
//		else if (arr[head_v - 1][head_h] == FOOD)
//			head_v--, eat_food = 1; //吃到食物了，蛇身不用减一
//		else exitgame = 1;        //其它情况只有撞墙和吃蛇身
//	}if (*fx == VK_DOWN)
//	{
//		if (arr[head_v + 1][head_h] == 0)    head_v++;
//		else if (arr[head_v + 1][head_h] == FOOD)
//			head_v++, eat_food = 1;
//		else exitgame = 1;
//	}if (*fx == VK_LEFT)
//	{
//		if (arr[head_v][head_h - 1] == 0)     head_h--;
//		else if (arr[head_v][head_h - 1] == FOOD)
//			head_h--, eat_food = 1;
//		else exitgame = 1;
//	}if (*fx == VK_RIGHT)
//	{
//		if (arr[head_v][head_h + 1] == 0)    head_h++;
//		else if (arr[head_v][head_h + 1] == FOOD)
//			head_h++, eat_food = 1;
//		else exitgame = 1;
//	}
//	/**没有吃的食物大于零的数都要减一*/
//	arr[head_v][head_h] = temp + 1;
//	if (!eat_food)
//	{
//		for (i = 0; i < ROW; i++)
//		{
//			for (j = 0; j < COL; j++)
//			{
//				if (arr[i][j] > 0) arr[i][j] = arr[i][j] - 1;
//			}
//		}
//	}
//	else
//		produceFood(arr); //吃到食物了，产生一个食物
//}
//void print(int* p)
//{
//	int i, j;
//	char shuo_ming1[] = "请按方向键 ↑ ↓ ← → 的控制上下左右";
//	char shuo_ming2[] = "连续按方向键会加速，退出按ESC键";
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++, p++)
//		{
//			if (*p == WALL)
//				data[i][j] = '*'; 	//printf("■");    //墙墙
//			if (*p == 0)
//				data[i][j] = ' ';	 //printf("　");
//			if (*p > 0)       //蛇
//			{
//				if (i == head_v && j == head_h) data[i][j] = '0';//printf("⊙");
//				else data[i][j] = '@';	//printf("●");
//			}
//			if (*p == FOOD)
//				data[i][j] = '@'; 	//printf("●");
//		}//printf("\n");
//	}
//	//以下是缓冲代码
//	zhixiang_hOutput = !zhixiang_hOutput;
//	if (!zhixiang_hOutput)
//	{
//		houtpoint = &hOutput;
//	}
//	else
//	{
//		houtpoint = &hOutBuf;
//	}
//	coord.Y = 1;
//	WriteConsoleOutputCharacterA(*houtpoint, shuo_ming1, strlen(shuo_ming1), coord, &bytes);
//	coord.Y++; WriteConsoleOutputCharacterA(*houtpoint, shuo_ming2, strlen(shuo_ming2), coord, &bytes);
//	for (i = 0; i < ROW; i++)
//	{
//		coord.Y++;
//		WriteConsoleOutputCharacterA(*houtpoint, (char *)data[i], COL, coord, &bytes);
//	}
//	if (exitgame)
//	{
//		char score[20];//得分为蛇吃的食物乘以3
//		sprintf(score, "你的得分为:%d", (arr[head_v][head_h] - 2) * 3);
//		coord.Y++;
//		WriteConsoleOutputCharacterA(*houtpoint, score, strlen(score), coord, &bytes);
//		SetConsoleActiveScreenBuffer(*houtpoint);
//		getch(); exit(0);
//	}
//	SetConsoleActiveScreenBuffer(*houtpoint);
//}
//

//————————————————
//版权声明：本文为CSDN博主「zh阿飞」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/z1832729975/article/details/88382018



//
//#include <stdio.h>
//int main()
//{
//	printf("%d", 0 % 3);//0
//	printf("%d", 1 % 3);//1
//	printf("%d", 2 % 3);//2
//	printf("%d", 3 % 3);//0
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += i;
//		}
//		if (i % 3 == 2)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
	//int a[10];
	//a[5] = 36;
	//printf("%d   %d\n", a[5],a[4]);
	//int b[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//printf("%d %d\n", b[3], b[7]);
	//int c[10] = { 1,2,3,4 };
	//printf("%d %d\n", c[3], c[9]);
	      //char d[10] = { 'h','e','l','l','.' };
	//char e[] = { "china" };
	       //printf("%s\n", d);
	        //printf("%c", d[9]);
	//printf("%s\n", e[2]);
	//int len = sizeof(e) / sizeof(char);
	//printf("%d", len);
	//printf("\0");
	//printf("jj");
	//printf(" ");
	//return 0;
//}



//编程题1，给定fun函数，姜字符串s中的小写字母转换为大写字母
//#include <stdio.h>
//#include <string.h>

//编程题2，hello world翻转
//#include <stdio.h>
//int main()
//{
//	char a[11] = { "HelloWorld!"};
//	int b = 10;
//	for (; b >= 0; b--)
//	{
//		printf("%c", a[b]);
//	}
//	return 0;
//}
//



//编程题4，求最大分，最小分，平均分
/*#include <stdio.h>
int fun1(int scores[5], int length)
{
	int i;
	int min;
	for (i = 1; i <= 4; i++)
	{
		if (scores[0] < scores[i])
		{
			min = scores[0];
		}
		return min;
	}
}
int mian()
{
	int scores[5] = { 78,68,72,98,76 };
	int length = sizeof(scores) / sizeof(scores[0]);
	int min = fun1(scores, length);
	printf("最小值：%d\n", min);
	int max = fun2(scores, length);
	printf("最大值：%d\n", max);
	float avg = fun3(scores, length);
	printf("平均值：%。2f\n", avg);
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	/*printf("ghgh");
	return 0;
	char c[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%c", &c[i]);
		getchar();
		printf("%d", c);
	}
	return 0;arr
}*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char name1[16] = { "hello," };
	char name2[] = { "world" };
	strcpy(name1, "world");
	printf("%s", name1);
	return 0;
}*/


/*#include <stdio.h>
	float fun1() {
		printf("*");
		return 1.23;
	}
	int fun2() {
		printf("!");
		return 0;
	}
	void main() {
		int a = fun2();
		printf("%d", a);
	}
	*/
/*#include <stdio.h>
int main()
{
	char a = 'b';
	printf("%d", a);
	printf("%c", 65);
	return 0;
}*/




//#include <stdio.h>
//#define double PI  3.14
//double PI;
//void fun()
//{
//	PI = 5.6;
//}
//int main()
//{
	//fun();

	//printf("%.2f", PI);
	//int a=10; 
	//printf("%d\n", a += a -= a*a);

	//return 0;
//

//#include <stdio.h>
//int main()
//{
//	int arr[3][2] = { 1,2,3,4,5,6 };
//	printf("%d", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void fun(char a[], int len)
//{
//	//请在该注释语句下方编写代码
//	int i = 0;
//	while (!0)
//	{
//		if (a[i]>90)
//		{
//			a[i + 1] = a[i];
//		}
//		i++;
//	}
//	printf("%s", a);
//}
//
//int main()
//{
//	char a[] = { "ABcDcc" };  //定义数组a并赋值
//	int len = strlen(a);  //求数组a的长度
//	fun(a, len);
//	return 0;
//}#include <stdio.h>
//int main() {
//	int a = 1, b = 2, c = 3, d = 4;
//	if ((a = 2) && (b = 1))
//		c = 2;
//	if ((c == 3) || (d = -1))
//		a = 5;
//	printf("%d,%d,%d,%d\n", a, b, c, d);
//}


//int main()
//{
//	int n[3][3], i, j;
//	for (i = 0; i<3; i++)
//		for (j = 0; j<3; j++)
//			n[i][j] = i + j;
//	for (i = 0; i<2; i++)
//		for (j = 0; j<2; j++)
//			n[i + 1][j + 1] += n[i][j];
//	printf("%d\n", n[i][j]);
//}

#include <stdio.h>
//int hanshu(int a)
//{
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a ;
//	hanshu(7);
//	return 0;
//}



//int mushroom()
//{
//	int a;
//	a = 10;
//	for (int a = 3; a < 8; a++)
//		printf("ffff");
//	return a;
//}
//
//void main()
//{
//	int num;
//	num = mushroom();
//}
//

//#include <stdio.h>

// 函数外定义变量 x 和 y
//int x;
//int y;
//int addtwonum()
//{
//	// 函数内声明变量 x 和 y 为外部变量
//	extern int x;
//	extern int y;
//	// 给外部变量（全局变量）x 和 y 赋值
//	 x = 1;
//	y = 2;
//	return x + y;
//}

//int main()
//{
//	//int result;
//	//// 调用函数 addtwonum
//	//result = addtwonum();
//
//	//printf("result 为: %d", result);
//
//	int a = 60;
//	printf(a);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int p = 00111100;
//	int q = 00001101;
//	//int w = 0;
//	//w = p & q;
//	//printf("%b/n",w);
//	//printf("%d", p << 2);
//	//printf(0 & 0);
//	//printf(0 & 1);
//	//printf(1 & 0);
//	//printf(1 & 1);
//	printf("%d", p << 2);
//	return 0;
//
//}011 0110 0011 1111 1000


//#include <stdio.h>
//#include <string.h>
//
//union Data
//{
//	int i;
//	float f;
//	char  str[20];
//};
////
//int main1()
//{
//	union Data data;
//
//	data.i = 10;
//	printf("data.i : %d\n", data.i);
//	data.f = 220.5;
//	printf("data.f : %f\n", data.f);
//	strcpy(data.str, "C Programming");
//
//	
//	
//	printf("data.str : %s\n", data.str);
//	printf("data.i : %d\n", data.i);
//	printf("data.f : %d\n", data.f);
//	return 0;
//}
//int main2()
//{
//	/*printf("%s", "a");*/
//	main1();
//	printf("%s", "C Programming");
//	return 0;
//
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	int c;
//
//	printf("Enter a value :");
//	c = getchar();
//
//	printf("\nYou entered: ");
//	putchar(c);
//	printf("\n");
//	return 0;
//}

//
//#include <stdio.h>
//
//main()
//{
//	printf("File :%s\n", __FILE__);
//	printf("Date :%s\n", __DATE__);
//	printf("Time :%s\n", __TIME__);
//	printf("Line :%d\n", __LINE__);
//	//printf("ANSI :%d\n", __STDC__);
//
//}

//#include <stdio.h>
//#include <stdarg.h>
//
//double average(int num, ...)
//{
//
//	va_list valist;
//	double sum = 0.0;
//	int i;
//
//	/* 为 num 个参数初始化 valist */
//	va_start(valist, num);
//
//	/* 访问所有赋给 valist 的参数 */
//	for (i = 0; i < num; i++)
//	{
//		sum += va_arg(valist, int);
//	}
//	/* 清理为 valist 保留的内存 */
//	va_end(valist);
//
//	return sum / num;
//}
//
//int main()
//{
//	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
//	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
//}
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	int c = 0;
//	scanf(c);
//	
//	if (isalnum(c))
//	{
//		printf("gg");
//	}
//	return 0;
//
//}


//int main(int argc, char *argv[])
//{
//	if (argc == 2)
//	{
//		printf("The argument supplied is %s\n", argv[1]);
//	}
//	else if (argc > 2)
//	{
//		printf("Too many arguments supplied.\n");
//	}
//	else
//	{
//		printf("One argument expected.\n");
//	}
//}


//文件读写   练习
//#include<stdio.h>
//int main()
//{
//	//printf("dddd");
//
//	FILE *fp=fopen("D:\\demo.txt", "w+");
//
//	if (fp != NULL)
//	{
//		char c = fgetc(fp);
//		printf("%c", c);
//		printf("%c", fgetc(fp));
//
//		fclose(fp);
//	}
//	
//	return 0;
//
//}

//
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = NULL;
//
//	fp = fopen("D:/demo.txt", "w+");
//	fprintf(fp, "This is testing for fprintf...\n");
//	fputs("This is testing for fputs...\n", fp);
//	fclose(fp);
//}


//#include <stdio.h>
//#include <stdlib.h>
//char nextChar(FILE *fp)
//{
//	char ch = EOF;
//	if (!feof(fp))
//		ch = fgetc(fp);
//		return ch;
//}
//int main()
//{
//	//打开源文件
//	FILE *fp;
//	char ch;
//	fp = fopen("example.c", "r");
//	/*if ((fp = fopen("example.c", "r")) == NULL)
//	{
//		printf("Error");
//		exit(1);
//	}*/
//	//读取源文件
//	while ((ch = nextChar(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//	//关闭源文件
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int readBuffer(FILE *fp, char *buf, int length)
//{
//	int i = 0;
//	char ch;
//	while (i < length)
//	{
//		ch = fgetc(fp);
//		if (ch == '\n' || feof(fp))
//		{
//			return i;
//		}
//		buf[i++] = ch;
//	}
//	return -1;
//}
//
//int main(int argc, char *argv[])
//{
//	if (argc != 2)
//	{
//		return -1;
//	}
//	FILE *fp = fopen(argv[1], "r");
//	if (!fp)
//	{
//		return -1;
//	}
//	char buf[1024];
//	while (!feof(fp))
//	{
//		int j = readBuffer(fp, buf, 1024);
//		if (j < 0)
//		{
//			return -1;
//		}
//		for (int i = 0; i < j; i++)
//		{
//			putchar(buf[i]);
//		}
//		putchar('\n');
//	}
//	fclose(fp);
//	return 0; aQ
//}

//#include <stdio.h>
//long Fact(long n)
//{
//	if (n == 0) return 1;
//	else  n*Fact(n - 1);
//}
//int main()
//{
//	int result = Fact(3);
//	printf(result);
//	return 0;
//}


/*
*	大三计算思维导论复习、结构体Demo
*/

//#include <stdio.h>
//struct ManufactureDate
//{
//	int day;
//	int month;
//	int year;
//};
//struct goods
//{
//	char name[9];
//	float price;  
//	int amount;
//	float pay;
//};
//int main()
//{
//	/*struct goods mygoods = { "跳绳", 25, 8, 200 };*/
//	//struct goods mygoods;
//	//strcpy(mygoods.name,"跳绳");
//	//mygoods.price = 25;
//	//mygoods.amount = 8;
//	//mygoods.pay = 200;
//	//printf("%p   %p    %p    %p", &mygoods.name,&mygoods.price,&mygoods.amount,&mygoods.pay);
//	/*struct goods mygoods[2] = { "跳绳",25,8,200,"牙膏",10,20,200 };*/
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d \n",rand(99));
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int BinarySearch(int score[], int n, int k)
//{
//	int low = 1, high = n, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (s[mid] == k)
//			return mid;
//		else if (k<s[mid])
//			high = mid - 1;
//		else
//			low = mid + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int score[] = { 55,60,65,66,70,74,78,80,85,90,95 };
//	int key = 85;
//	BinarySearch(score,key);
//	return 0;
//}


/*
*	break和continue
*/

//#include <stdio.h>
//int main2() 
//{
//	//int a = 1;
//	//while (1)
//	//{
//	//	while (1)
//	//	{
//	//		if (a == 1)
//	//		{
//	//			printf("%d", a);
//	//			//break语句只能在循环或开关中使用
//	//			break;
//	//		}
//	//		else {
//	//			printf("else");
//	//		}
//	//		printf("else之后");
//	//	}
//	//	printf("内层while");
//	//}
//
//	//int b = 1;
//	//do {
//	//	printf("%d", b);
//	//	
//	//	if (b == 9)
//	//	{
//	//		break;
//	//	}
//	//	b++;
//	//} while (1);
//
//	//int c = 1;
//	//for (int time = 0; time >= 0; time++)
//	//{
//	//	printf("%d", c);
//	//	if (c == 8)
//	//	{
//	//		break;
//	//	}
//	//	c++;
//	//}
//	
//	//int d = 1;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	switch (i%2)
//	//	{
//	//	case 0:
//	//		printf("%d %d\n", i,0);
//	//		break;
//	//	case 1:
//	//		printf("%d %d\n",i,1);
//	//		break;
//	//	default:
//	//		break;
//	//	}
//	//	
//	//}
//
//	//int e = 1;
//	//do {
//	//	
//
//	//	
//	//	if (e%2==0)
//	//	{
//	//		printf("%d是偶数\n",e);
//	//		e++;
//	//		continue;
//	//	}
//	//	printf("%d\n", e);
//	//	e++;
//	//} while (e<9);
//
//	int a;
//	printf("%p\n", &a);
//
//
//
//	return 0;
//}

//#include <stdio.h>
//// 先声明后定义
//int fun();
//int fun();
//int fun();
//int fun() {
//	printf("fun");
//	return 0;
//}
//// 声明时定义
//int fun2() {
//	printf("fun2");
//	return 0;
//}
//int main() {
//	//fun();
//	//fun2();
//	 
//
//	//extern int b;
//	//b = 10;
//	//printf("%p\n", &b);
//	   
//	//int a[5] = { 1,2,3,4,5 };
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%p\n", (a+i));
//	//}
//
//
//	//char string[] = "I love China!" ;
//	//printf("%s",string);
//
//	char *string = "I love China!";
//	printf("%s\n",string);
//	printf("%p", string);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() 
//{
//	int *p = malloc(5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%p\n",p+i);
//	}
//	free(p);
//	printf("%p\n",p);
//
//
//	int a = 0;
//	int b = 3;
//	int *pa = &a;
//	int *pb;
//	pb = pa;
//
//	int d = 0;
//	int *p2 = &d;
//	int *pr = (int *)p2;
//
//	int *dd=NULL;
//	printf("%p",dd);
//
//	int g;
//
//	return 0;
//}



//#include <stdio.h>
//void exchg(int *x, int *y)
//{
//	printf("%p %p\n", x, y);
//	printf("%d %d\n", x, y);
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//	printf("%p %p\n", x, y);
//	printf("x=%d,y=%d,",*x,*y);
//}
//int main2()
//{
//	int a = 1, b = 2;
//	exchg(&a,&b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}
//int main()
//{
//	int a[5] = {2,4,6,8,10};
//	int *p = a;
//	printf("%d",*(p++));
//	return 0;
//}


//#include <stdio.h>
//void fun()
//{
//	int g = 0;
//	int s=0;
//	int b = 0;
//	printf("100-999之间的水仙花数：");
//	for (int num = 100; num <= 999; num++)
//	{
//		b = num / 100;//分解出百位
//		s = num / 10 % 10;//分解出十位
//		g = num % 10;//分解出个位
//		if (g*g*g + s*s*s + b*b*b == num)
//		{
//			printf("%d %d %d ", g, s, b);
//			printf("%d\t\n", num);
//		}
//	}
//}
//
//int review() {
//	/*
//	基本语法
//	多行注释
//	*/
//
//	// 单行注释
//
//	/*
//	变量：字母数字下划线，数字不开头
//	C是区分大小写的
//	*/
//	/*float f = 1.9;
//	double d = 99.99;
//	char c = 'a';
//	char ch = "中文";
//
//	printf("%s", ch);
//	printf("%s","review");
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", i);*/
//
//	int a = 12;
//	printf("%d",a+=a-=a*a);
//	int b = 12;
//	printf("%d", b += b -= b *= b);
//	return 0;
//}
//int main()
//{
//	/*fun();
//	review();*/
//	int i, j, m, n;
//	i = 8; j = 10;
//	m = ++i;
//	n = j++;
//	printf("%d,%d,%d,%d", i, j, m, n);
//	return 0;
//}


#include<stdio.h>
int BinarySearch(int nums[], int target) {
	int low = 0;

	int high = 7;
	int mid = ((low + high) / 2);
	while (1) {
		if (low>high) return -1;
		if (target == nums[mid]) {
			return mid;
		}
		else if (target < nums[mid]) {
			high = mid - 1;
			mid = ((low + high) / 2);
		}
		else {
			low = mid + 1;
			mid = ((low + high) / 2);
		}
	}
	return 0;
}

int main() {
	int nums[] = { -1, 0, 3, 4, 6, 10, 13, 14 };
	int target = 3;
	int res = BinarySearch(nums, target);
	printf("%d",res);
	return 0;
}