//#include "stdio.h"
//#include <iostream>
//
//using namespace std;

//int main()
//{
//	cout << "Hello World" << endl;
//	return 0;
//}

// 在此处编写fun函数
//int fun(char s[], int  a)
//{
//	int i = 0;
//	for (; i<6; i++)
//	{
//		if (i = a)
//		{
//			s[i] = s[i + 1];
//		}
//		cout << s[i];
//	}
//}
//int main() {
//
//	char s[6] = "World";
//	fun(s, 4); //输入字符串s和需要被删除的位置n	
//	return 0;
//}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void fun() {
//	//请在该区域内写出这两个变量的定义与赋值
//	string name = "张三";
//	string card = "12345678";
//	cout << name;
//	cout << endl;
//	cout << card;
//}
//
//int main() {
//	fun();
//	return 0;
//}
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//void fun() {
//	//请在该区域内写出这两个变量的定义与赋值
//	string name = "张三";
//	string card = 12345678;
//	cout << name;
//	cout << endl;
//	cout << card;
//}
//
//int main() {
//	fun();
//	return 0;
//}
//#include <iostream>
//using namespace std;

////void fun() {
	//string name = "lucy";
	//int age = 20;
	//bool married = false;
	/*cout << age << endl;
	cout << age << endl;
	cout  name << endl;
	cout << age << endl;
	if (married) {
		cout << "已婚";
	}
	else {
		cout << "未婚";
	}
}

int main() {
	fun();
	return 0;
}*/
//i/*nt grage;
//cin*/ 
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	std::cout << "please enter two number:" << std::endl;
//	int num1, num2;
//	std::cin >> num1 >> num2;
//	std::cout << "two number are:" << num1 << "and" << num2 << std::endl;
//	std::cout << "the num1 and num2 is:" << num1 + num2 << std::endl;
//	return 0;
//
//}

//void fun()
//{
//	string username;
//	string password;
//	std::cout << "please enter your username:"<<std::endl;
//	std::cin >> username ;
//	std::cout << "[lease enter your password:"<<std::endl;
//	std::cin >> password;
//}
//int main()
//{
//	fun();
//	return 0;
//}
//
//#include <iostream>
//using namespace std;

//void fun(int a, int b, int c) {//区域一
//
//							   //变量a、b、c已经定义且赋值，可直接使用，请在该区域内编写逻辑代码
//	if (a>b &&a>c)
//	{
//		if (b>c)
//		{
//			std::cout << "由大到小依次为 "<< a<<b<<c<< std::endl;
//		}
//		else {
//			std::cout << "由大到小依次为" << a<<c<<b << std::endl;
//		}
//	}
//	else if (b>a&&b>c)
//	{
//		if (a>c) {
//			std::cout << "由大到小依次为" << b<<a<<c<< std::endl;
//		}
//
//		else {
//			std::cout << "由大到小依次为" <<b<<c<<a<< std::endl;
//		}
//	}
//	else
//	{
//		if (a>b)
//		{
//			std::cout << "由大到小依次为 "<<c<<a<<b<< std::endl;
//		}
//		else {
//			std::cout <<" 由大到小依次为 "<<c<<b<<a << std::endl; 
//		}
//	}
//}
/*int main() {*///区域二

	//fun(4, 7, 6);//将4、7、6分别传递给区域一中的a、b、c，具体后续会讲到，大家不要深究

	//cout << !0 && (2 >= 1) ;
	//bool a = false;
	//int a = 2;
	//int b = 0;

	//cout << ((a != b) ? true : false)     ;
	
	/*a += a -= a*a;
	cout << a;*/

//
//	int a = 10;
//	int *pa = &a;
//	int &b = a;
//	int *pb = &b;
//	a = 20;
//	cout << a << endl;//20	
//	cout << b << endl;//20	
//	cout << *pa << endl;//20
//	cout << *pb << endl;//20
//
//	return 0;
//}



//int x = 0;
//x = 5 = 4 + 1;
//
//string str = "asd";

//#include <iostream>
//#include <string>
//using namespace std;
//
//void fun(char a[], int len) {//区域一
//							 //区域一中字符数组a,数组a的长度len由区域二中传递过来，相当于已经定义和赋值，直接使用即可，大家不要深究
//							 //请在此区域内编写代码
//	cout << a[0];
//
//}
//
//int main() {//区域二
//
//	char a[] = { " ABcDcc" };//定义数组a并赋值
//	int len = strlen(a);   //求数组a的长度
//
//						   //相当于将区域二中的数组a及数组a的长度len传递到区域一，具体内容后续会讲到，大家不要深究
//	fun(a, len);
//
//	return 0;
//}

/*#include <iostream>
using namespace std;

int fun(bool flag) {
	if (flag) {
		flag = false;
	}
	else {
		flag = true;
	}
	return flag;
}
int main() {
	bool flag = true;
	fun(flag);
	std::cout << flag << "\t";

	flag = fun(flag);
	cout << flag;

	return 0;
}*/

//
//#include <iostream>
//using namespace std;
//
//// 在此处编写fun函数
//int fun(char s[], int  a)
//{
//	int i = 0;
//	for (; i<6; i++)
//	{
//		if (i = a)
//		{
//			s[i] = s[i + 1];
//		}
//		cout << s[i]<<endl;
//
//	}
//	return 0;
//}
//int main() {
//
//	char s[6] = "World";
//	fun(s, 4); //输入字符串s和需要被删除的位置n	
//	return 0;
//}

//#include <iostream>
//using namespace std;

// 在此处编写fun函数
//void fun(char a[], int n)
//
//{
//
//	int i = 0;
//	while (a[i]) {
//		if (i >= n - 1) {
//			a[i] = a[i + 1];
//		}
//		i++;
//	}
//	a[i] = '\0';
//	cout << a;
//}
//int main() {
//
//	//char s[6] = "World";
//	//fun(s, 4); //输入字符串s和需要被删除的位置n	
//	int a = 1;
//	int b = 2;
//	int &ra = a;
//	int &rb = b;
//	cout << a << b << ra << rb<<endl;
//
//
//
//	return 0;
//}



	/*int a = 3, b = 2;
void main() {

	int *p = &a;

	b += a++;

	cout << *p << "，" << b;*/


//	/*int a = 3; int *p = &a;
//
//	cout << &p<<endl;
//*/
//
//#include <iostream>
//
//using namespace std;

/*int main() {

	int x = -1, y = 2;

	if (!x) {

		y++;

		x++;

	}
	else if (x == 0) {

		i/**//*f (x) {

			y += 2;

		}
		else {

			y += 3;

		}

	}

	cout << y;

	return 0;*/

//#include <iostream>
//
//using namespace std;
//
//
//
//int main() {
//
	//int x = 10, y = 2;

	//if (x--<9 && y<5) {

	//	y++;

	//}

	//cout << y << endl;





	//bool flag = true;

	//while (flag ? false : true)

	//{

	//	flag = !flag;

	//}

	//cout << flag << endl;


	//int m = 5;

	//if (m++>5) { cout << m; }

	//else { cout << m--; }
	//return 0;

//}



//#include <iostream>
//
//#include <string>
//
//using namespace std;
//
//
//
//class Fruit {
//
//public:
//
//	string name;
//
//};
//
//
//
//class Person {
//
//public:
//
//	void eat(Fruit *fu) {       //L1行
//
//		cout << fu->name << endl;//L2行
//
//	}
//
//};
//
//
//
//int main() {
//
//	Person *per = new Person();
//
//	Fruit *banana = new Fruit();
//
//	banana->name = "香蕉";      //L3行
//
//	per->eat(Fruit);           //L4行
//
//	return 0;
//
//}
//
//

//
//blic:
//
//float price;
//
//};
//
//
//
//class Person {
//
//public:
//
//	void buy(Food *food) {//L1行
//
//		cout << food.price << endl;//L2行
//
//	};


//
//#include <iostream>
//int main()
//{
//	system("color EC");
//	printf("return 0;");
//	return 0;
//}

//
//
//#include<iostream>
//using namespace std;
//int max(int a, int b) {
//	return a >= b ? a : b;
//}
//double max(double a, double b) {
//	return a >= b ? a : b;
//}
//int main() {
//	cout << "max int is: " << max(1, 3) << endl;
//	cout << "max double is: " << max(1.2, 1.3) << endl;
//	return 0;
//}


//
//#include<iostream>
//using namespace std;
//class A {
//public:
//	virtual void func() {
//		cout << "func in class A" << endl;
//	}
//};
//class B {
//public:
//	virtual void func() {
//		cout << "func in class B" << endl;
//	}
//};
//class C :public A, public B {
//public:
//	void func() {
//		cout << "func in class C" << endl;
//	}
//};
//int main() {
//	C c;
//	A& pa = c;
//	B& pb = c;
//	C& pc = c;
//	pa.func();
//	pb.func();
//	pc.func();
//}


//#include <iostream>
//
//using namespace std;
//
//class animal {
//
//public:
//
//	void sleep() {
//
//		std::cout<< "animal sleep" << endl;
//
//	}
//
//	virtual void breathe() {
//
//		cout << "animal breathe" << endl;
//
//	}
//
//};
//
//class fish :public animal
//
//{
//
//public:
//
//	void sleep() {
//
//		cout << "fish sleep" << endl;
//
//	}
//
//	void breathe() {
//
//		cout << "fish bubble" << endl;
//
//	}
//
//};
//
//void main() {
//
//	animal *f = new fish();
//
//	f->sleep();
//
//	f->breathe();
//
//}


//
//#include <iostream>
//
//using namespace std;
//
//class animal {
//
//public:
//
//	void sleep() {
//
//		cout << "animal sleep" << endl;
//
//	}
//
//	void breathe() {
//
//		cout << "animal breathe" << endl;
//
//	}
//
//};
//
//class fish :public animal
//
//{
//
//public:
//
//	void sleep() {
//
//		cout << "fish sleep" << endl;
//
//	}
//
//	void breathe() {
//
//		cout << "fish bubble" << endl;
//
//	}
//
//};
//
//int main() {
//
//	animal *f = new fish();
//
//	f->sleep();
//
//	f->breathe();
//
//	return 0;
//
//}



//
//#include <iostream>
//
//using namespace std;
//
//class animal {
//
//public:
//
//	void sleep() {
//
//		cout << "animal sleep" << endl;
//
//	}
//
//	virtual void breathe() {
//
//		cout << "animal breathe" << endl;
//
//	}
//
//};
//
//class fish :public animal
//
//{
//
//public:
//
//	void sleep() {
//
//		cout << "fish sleep" << endl;
//
//	}
//
//	void breathe() {
//
//		cout << "fish bubble" << endl;
//
//	}
//
//};
//
//int main() {
//
//	animal *f = new animal();
//
//	f->sleep();
//
//	f->breathe();
//
//	return 0;
//
//}

//
//
//#include <iostream>
//using namespace std;
//
//int fun(bool flag)
//{
//	if (flag)
//	{
//		flag = false;
//	}
//	else
//	{
//		flag = true;
//	}
//	return flag;
//}
//int main()
//{
//	bool  flag = true;
//	fun(flag);
//	cout << flag << "/t";
//
//	flag = fun(flag);
//	cout << flag;
//
//	bool text1 = true;
//	bool text2 = false;
//	cout << text1;
//	cout << text2;
//	return 0;
//}


//class Test {
//public:
//	int a;
//	Test() {
//		a = 1;
//	}
//};
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	Test* t1 = new Test();
//	t1->a = 10;
//
//	Test* t2 = new Test();
//	t2->a = 5;
//
//	cout << "&t1:" << t1 << " a = " << t1->a << endl;
//	cout << "&t2:" << t2 << " a = " << t2->a << endl;
//
//	cout << "------------------------------" << endl;
//	t2 = t1;
//	cout << "&t1:" << t1 << " a = " << t1->a << endl;
//	cout << "&t2:" << t2 << " a = " << t2->a << endl;
//
//	cout << "------------------------------" << endl;
//
//	t1->a = 111;
//	t2->a = 222;
//	cout << "&t1:" << t1 << " a = " << t1->a << endl;
//	cout << "&t2:" << t2 << " a = " << t2->a << endl;
//
//	return 0;
//}



//
//class Test{
//public:
//	int a;
//	Test() {
//		a  = 1;
//	}
//};
//
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	Test t1;
//	t1.a  = 10;
//
//	Test t2;
//	t2.a  = 5;
//
//	cout  << "&t1:" << &t1  << "?a?=?" << t1.a  << endl;
//	cout  << "&t2:" << &t2  << "?a?=?" << t2.a  << endl;
//
//	cout  << "------------------------------" << endl;
//	t2  = t1;
//	cout  << "&t1:" << &t1  << "?a?=?" << t1.a  << endl;
//	cout<< "&t2:" << &t2<< "?a?=?" << t2.a  << endl;
//
//	cout<< "------------------------------" << endl;
//
//	t1.a= 111;
//	t2.a= 222;
//	cout<< "&t1:" << &t1<< "?a?=?" << t1.a<< endl;
//	cout<< "&t2:" << &t2<< "?a?=?" << t2.a<< endl;
//	while(1);
//	return 0;
//}


//setfill设置填充符，setw设置格式
//#include <iomanip>
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <iostream>
//using namespace std;
//#define MAX_LINE 1024
//int main1()
//{
//	//char buf[MAX_LINE];  /*缓冲区*/
//	//FILE *fp;            /*文件指针*/
//	//int len;             /*行字符个数*/
//	//if ((fp = fopen_s("D:/汽车.txt")) == NULL)
//	//{
//	//	perror("fail to read");
//	//	exit(1);
//	//}
//	//while (fgets(buf, MAX_LINE, fp) != NULL)
//	//{
//	//	len = strlen(buf);
//	//	buf[len - 1] = '\0';  /*去掉换行符*/
//	//	printf("%s %d \n", buf, len - 1);
//	//}
//
//	//printf("hello world");
//	//char a = '男';
//	//cout << "|" << a << "|" << endl;;
//	/*char str[5] = "张三";
//	cout << str << endl;*/
//	//bool flag = -1;
//	//cout << flag << endl;//    1
//
//
//	//int a = 10, b = 3;
//
//	//cout << a / b << "       " << 10. / 3 << endl;
//
//	//if (4 > 3)
//	//{
//	//	cout << 1 << endl;
//	//}
//	//else if (5 > 4)
//	//{
//	//	cout << 2 << endl;
//	//}
//	//else cout << 3 << endl;
//	//cout << left << "请选择你要挑战的怪兽：" << endl;
//
//
//	cout << setfill(' ') << setw(21) << endl;
//	cout << setfill(' ') << setw(10) << '*' << endl;
//
//	//setfill设置填充符，setw设置格式
//	//cout << right << "请选择你要挑战的怪兽：" << endl;
//	//cout << setfill('-') << setw(30) << "" << endl;
//	//cout << "| 1:" << setfill(' ') << setw(26) << "巴尔坦虫怪【lv1】|" << endl;
//
//	////cout << "| 1:" << setw(26) << "巴尔坦虫怪【lv1】|" << endl;
//	//cout << "| 2:" << setw(26) << "格斯安鱼怪【lv5】|" << endl;
//	//cout << "| 3:" << setw(26) << "泰斯鸟怪【lv10】|" << endl;
//	//cout << "| 4:" << setw(26) << "绿头猿怪【lv30】|" << endl;
//	//cout << "| 5:" << setw(26) << "赤龙怪（BOSS)【lv50】|" << endl;
//	//cout << setfill('-') << setw(30) << "" << endl;
//
//	cout << "-------------------------------------------------------------------------------------"<<endl;
//
//	/*cout  << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << endl;
//	cout << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << endl;
//	cout << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << endl;
//	cout << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << '*' << setw(5) << endl;*/
//
//
//
//	//cout  << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3)  << endl;
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << '*' << setw(3) << '*' << setw(3)  << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//
//
//
//	//cout  << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3)<< '*' << setw(3) << endl;
//
//
//
//
//
//	/*cout << setw(5) << '*' << endl;
//	cout << setw(4) << '*' << setw(4) << '*' << endl;
//	cout << setw(3) << '*' << setw(5) << '*' << endl;
//	cout << setw(2) << '*' << setw(6) << '*' << endl;
//	cout << '*' << setw(2) << '*' << setw(2) << '*' << setw(2) << '*' << setw(2) << '*' << setw(2) << endl;*/
//	
//	/*int d = 0;
//	cin >> d;
//	for (int l = 0; l < d ; l++)
//	{
//		cout << "*";
//		for (int p = 2; p < d - 2; p++)
//		{
//			cout << " ";
//		}
//		cout << "*"<<endl;
//
//	}*/
//
//	cout << "*" << endl;
//
//	//char tian[] = { " " };
//
//	int d = 5;
//
//	for (int l = 0; l < d - 2; l++)
//	{
//		cout << "*";
//		for (int p = 0; p < l - 2; p++)
//		{
//			cout << " ";
//		}
//		cout << "*";
//
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <fstream>
//using namespace std;
////输入输出站在内存角度
//int main()
//{
//	ofstream ofs("test.txt", ios::out);
//	if (ofs)
//	{
//		cout << "文件打开成功" << endl;
//
//	}
//	else
//	{
//		cout << "文件打开失败" << endl;
//	}
//	//写一行  写入
//	ofs << "大家好，我是写入文件";
//	ofs << "hello world" ;
//
//	//读取文件
//
//
//
//
//
//
//
//	//关闭文件
//	ofs.close();
//}


// AddressBook.cpp : 定义控制台应用程序的入口点。
//
//
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//
//#define MAX 1000 
//
//// 联系人结构体
//struct Person
//{
//	string m_Name; // 姓名
//
//	int m_Sex; // 性别
//
//	int m_Age; // 年龄
//
//	string m_Phone; // 电话
//
//	string m_Addr; // 住址
//};
//
//
//struct AddressBook
//{
//	struct Person personArray[MAX]; // 联系人
//
//	int m_Size; // 通讯录人数
//};
//
//// 显示菜单
//void showMenu()
//{
//	cout << "-------------------------------------------------" << endl;
//	cout << "\t\t  1. 添加联系人 " << endl;
//	cout << "\t\t  2. 显示联系人  " << endl;
//	cout << "\t\t  3. 删除联系人  " << endl;
//	cout << "\t\t  4. 查找联系人  " << endl;
//	cout << "\t\t  5. 修改联系人  " << endl;
//	cout << "\t\t  6. 清空联系人  " << endl;
//	cout << "\t\t  7. 存储联系人  " << endl;
//	cout << "\t\t  8. 读取联系人  " << endl;
//	cout << "\t\t  9. 联系人排序  " << endl;
//	cout << "\t\t  0. 退出通讯录  " << endl;
//	cout << "--------------Copyright 2020 安信工--------------" << endl;
//}
//
//// 公用代码
//void common() {
//	cout << endl;
//	// 让用户按任意键继续
//	system("pause");
//
//	// 清除屏幕信息
//	system("cls");
//}
//
//// 判断联系人是否存在
//// 注意这里返回int，然后调用方可以对找到的位置直接操作，否则如果返回bool的话，调用方还要自己寻找位置
//int isExist(AddressBook * ab, string name) {
//	for (int i = 0; i < ab->m_Size; i++)
//	{
//		if (ab->personArray[i].m_Name == name)
//		{
//			return i; // 返回找到的数据的位置
//		}
//	}
//
//	return -1;
//}
//
//// 添加联系人
//void addPerson(AddressBook * ab) {
//	// 判断通讯录是否已满，如果满了就不再添加了
//	if (ab->m_Size == MAX) {
//		cout << "通讯录已满，不能再继续添加" << endl;
//		return;
//	}
//	else
//	{
//		// 添加联系人姓名
//		string name;
//		cout << "请输入联系人姓名:" << endl;
//		cin >> name;
//		ab->personArray[ab->m_Size].m_Name = name;
//
//		// 添加联系人性别
//		int sex;
//		cout << "请输入联系人性别(1->男 | 0->女):" << endl;
//
//		// 判断用户输入的值是否正确，错误则一直循环让用户输入，直到正确为止
//		while (true)
//		{
//			cin >> sex;
//			if (sex == 0 || sex == 1)
//			{
//				ab->personArray[ab->m_Size].m_Sex = sex;
//				break;
//			}
//
//			cout << sex << "到底是男是女，我理解不了，重新输入吧:" << endl;
//		}
//
//
//		// 添加联系人年龄
//		int age;
//		cout << "请输入联系人年龄:" << endl;
//		while (true)
//		{
//			cin >> age;
//			if (age > 0 && age < 200)
//			{
//				ab->personArray[ab->m_Size].m_Age = age;
//				break;
//			}
//			cout << "本通讯录暂不支持录入非人类，重新输入吧:" << endl;
//		}
//
//		// 添加联系人电话
//		string phone;
//		cout << "请输入联系人电话:" << endl;
//		cin >> phone;
//		ab->personArray[ab->m_Size].m_Phone = phone;
//
//		// 添加联系人地址
//		string addr;
//		cout << "请输入联系人地址:" << endl;
//		cin >> addr;
//		ab->personArray[ab->m_Size].m_Addr = addr;
//
//
//		// 更新通讯录
//		ab->m_Size++;
//
//		// 提示信息，告知用户添加成功
//		cout << "添加成功,[" << name << "] 已处于通讯录中" << endl;
//
//		common();
//	}
//}
//
//
//// 显示联系人
//void showPerson(const AddressBook * const ab) {
//	if (ab->m_Size == 0)
//	{
//		cout << "通讯录空空如也..." << endl;
//	}
//	else
//	{
//		cout << "姓名\t" << "性别\t" << "年龄\t" << "电话\t\t" << "住址" << endl;
//
//		for (int i = 0; i < ab->m_Size; i++)
//		{
//			cout
//				<< ab->personArray[i].m_Name << "\t"
//				<< (ab->personArray[i].m_Sex == 1 ? "男" : "女") << "\t"
//				<< ab->personArray[i].m_Age << "\t"
//				<< ab->personArray[i].m_Phone << "\t"
//				<< ab->personArray[i].m_Addr << "\t"
//				<< endl;
//		}
//	}
//
//	common();
//}
//
//// 删除联系人
//void deletePerson(AddressBook * ab) {
//	// 让用户输入想删除的人姓名
//	cout << "请输入希望删除的联系人姓名:" << endl;
//	string name;
//	cin >> name;
//
//	// 判断联系人是否存在
//	int index = isExist(ab, name);
//
//	// 删除联系人
//	if (index == -1)
//	{
//		cout << "你在删除一个不存的人，核对后再来吧！" << endl;
//	}
//	else
//	{
//		// 循环，让后一个元素，覆盖前面一个元素
//		for (int i = index; i < ab->m_Size; i++)
//		{
//			ab->personArray[i] = ab->personArray[i + 1];
//		}
//
//		ab->m_Size--;
//
//		cout << "删除 [" << name << "] 成功!" << endl;
//	}
//
//	common();
//}
//
//// 查找联系人
//void findPerson(AddressBook * ab) {
//	// 提示用户输入希望查找的联系人 
//	cout << "请输入希望寻找的联系人姓名:" << endl;
//	string name;
//	cin >> name;
//
//	// 判断联系人在不在
//	int index = isExist(ab, name);
//
//	if (index == -1)
//	{
//		cout << "你在寻找一个不存的人，核对后再来吧！" << endl;
//	}
//	else
//	{
//		cout << "查到 [" << name << "] 信息如下:" << endl;
//		cout
//			<< ab->personArray[index].m_Name << "\t"
//			<< (ab->personArray[index].m_Sex == 1 ? "男" : "女") << "\t"
//			<< ab->personArray[index].m_Age << "\t"
//			<< ab->personArray[index].m_Phone << "\t"
//			<< ab->personArray[index].m_Addr << "\t"
//			<< endl;
//	}
//
//	common();
//
//	// 如果在，则显示联系人
//}
//
//// 修改联系人
//void updatePerson(AddressBook * ab) {
//	// 提示用户输入希望查找的联系人 
//	cout << "请输入希望寻找的联系人姓名:" << endl;
//	string name;
//	cin >> name;
//
//	// 判断联系人在不在
//	int index = isExist(ab, name);
//
//	if (index == -1)
//	{
//		cout << "你在修改一个不存的人，核对后再来吧！" << endl;
//	}
//	else
//	{
//		// 添加联系人姓名
//		string name;
//		cout << "请输入联系人姓名:" << endl;
//		cin >> name;
//		ab->personArray[index].m_Name = name;
//
//		// 添加联系人性别
//		int sex;
//		cout << "请输入联系人性别(1->男 | 0->女):" << endl;
//
//		// 判断用户输入的值是否正确，错误则一直循环让用户输入，直到正确为止
//		while (true)
//		{
//			cin >> sex;
//			if (sex == 0 || sex == 1)
//			{
//				ab->personArray[index].m_Sex = sex;
//				break;
//			}
//
//			cout << sex << "到底是男是女，我理解不了，重新输入吧:" << endl;
//		}
//
//
//		// 添加联系人年龄
//		int age;
//		cout << "请输入联系人年龄:" << endl;
//		while (true)
//		{
//			cin >> age;
//			if (age > 0 && age < 200)
//			{
//				ab->personArray[index].m_Age = age;
//				break;
//			}
//			cout << "本通讯录暂不支持录入非人类，重新输入吧:" << endl;
//		}
//
//		// 添加联系人电话
//		string phone;
//		cout << "请输入联系人电话:" << endl;
//		cin >> phone;
//		ab->personArray[index].m_Phone = phone;
//
//		// 添加联系人地址
//		string addr;
//		cout << "请输入联系人地址:" << endl;
//		cin >> addr;
//		ab->personArray[index].m_Addr = addr;
//
//
//		cout << "[" << name << "] 资料修改成功！" << endl;
//	}
//
//	common();
//}
//
//// 清除联系人
//void cleanPerson(AddressBook * ab) {
//	int result = 0; // 用户确认结果
//
//	cout << "你这个动作很危险，确定要执行吗(确定 -> 1 | 取消 -> 0)?" << endl;
//
//	cin >> result;
//
//	if (result == 1)
//	{
//		ab->m_Size = 0;
//		cout << "通讯录清除成功!" << endl;
//	}
//
//	common();
//}
//
//// 存储联系人
//void savePerson(AddressBook * ab) {
//	// 引入头文件
//	// 创建输出流
//	ofstream ofs;
//
//	// 打开文件
//	ofs.open("addressBook.txt", ios::out);
//
//	// 输出内容
//	for (int i = 0; i < ab->m_Size; i++)
//	{
//		ofs << ab->personArray[i].m_Name << " "
//			<< ab->personArray[i].m_Age << " "
//			<< ab->personArray[i].m_Sex << " "
//			<< ab->personArray[i].m_Phone << " "
//			<< ab->personArray[i].m_Addr << endl;
//	}
//
//	// 关闭输出流
//	ofs.close();
//
//	cout << "通讯录保存成功" << endl;
//
//	common();
//}
//
//// 读取联系人
//void loadPerson(AddressBook * ab) {
//	// 引入头文件
//	// 创建输入流
//	// 打开文件
//	ifstream ifs("addressBook.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	// 读取内容
//	string m_Name; // 姓名
//
//	int m_Sex; // 性别
//
//	int m_Age; // 年龄
//
//	string m_Phone; // 电话
//
//	string m_Addr; // 住址
//
//	while (ifs >> m_Name && ifs >> m_Sex && ifs >> m_Age &&  ifs >> m_Phone && ifs >> m_Addr)
//	{
//		ab->personArray[ab->m_Size].m_Name = m_Name;
//		ab->personArray[ab->m_Size].m_Sex = m_Sex;
//		ab->personArray[ab->m_Size].m_Age = m_Age;
//		ab->personArray[ab->m_Size].m_Phone = m_Phone;
//		ab->personArray[ab->m_Size].m_Addr = m_Addr;
//		ab->m_Size++;
//	}
//
//	// 关闭输入流
//	ifs.close();
//
//	cout << "读取联系人成功!" << endl;
//
//	common();
//}
//
//// 联系人排序（以年龄）
//void sortPerson(AddressBook * ab) {
//	// 控制总轮数
//	for (int i = 0; i < ab->m_Size - 1; i++)
//	{
//		// 控制没轮对比的次数
//		for (int j = 0; j < ab->m_Size - i - 1; j++)
//		{
//			// 判断是否比后一个年龄大，是则交换
//			if (ab->personArray[j].m_Age > ab->personArray[j + 1].m_Age)
//			{
//				Person temp = ab->personArray[j];
//				ab->personArray[j] = ab->personArray[j + 1];
//				ab->personArray[j + 1] = temp;
//			}
//		}
//	}
//
//	cout << "按照年龄排序成功!" << endl;
//
//	showPerson(ab);
//}
//
//int main()
//{
//	int userSelect = 0; // 定义变量用于接收用户输入的菜单编号
//	AddressBook ab; // 创建通讯录结构体变量
//	ab.m_Size = 0; // 初始化通讯录中的人数
//
//	while (true)
//	{
//		showMenu();
//
//		cout << "\n请输入功能编号:" << endl;
//		cin >> userSelect;
//
//		switch (userSelect)
//		{
//		case 1: // 添加联系人
//			addPerson(&ab); // 这个地方要传递地址，如果是值传递，那么方法里添加了人并不会修改主函数里的通讯录
//			break;
//		case 2:	// 显示联系人
//			showPerson(&ab);
//			break;
//		case 3:	// 删除联系人
//			deletePerson(&ab);
//			break;
//		case 4:	// 查找联系人
//			findPerson(&ab);
//			break;
//		case 5: // 修改联系人
//			updatePerson(&ab);
//			break;
//		case 6:	// 清空联系人
//			cleanPerson(&ab);
//			break;
//		case 7:	// 存储联系人
//			savePerson(&ab);
//			break;
//		case 8:	// 读取联系人
//			loadPerson(&ab);
//			break;
//		case 9:	// 联系人排序
//			sortPerson(&ab);
//			break;
//		case 0:	// 退出通讯录
//			cout << "欢迎再次使用" << endl; // 提示信息，优化用户体验
//			system("pause");
//			return 0;
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}
//
//
//
//

//
//
//// C++Test.cpp : 定义控制台应用程序的入口点。
////
//
//#include "stdafx.h"
//#include <fstream>
//
//using namespace std;
////定位数组中每个元素的正确位置 int A[] 它是不是一个普通参数 它会不会影响到本身的数组
//int Partition(int A[], int left, int right)
//{
//	int temp = A[left]; //定义个变量 存储我们排序的元素值
//						//这个循环主要是要找到数组当中每个元素 定位到它准确的位置
//	while (left < right) //外层循环
//	{
//		while (temp < A[right] && left < right) right--; //定义内层A
//		A[left] = A[right];
//		while (temp >= A[left] && left < right) left++;  //定义内层B
//		A[right] = A[left];
//	}
//	A[left] = temp;
//	return left; //是对应的我们某个元素的正确的位置 只是用于定位某一个元素的在数组当中准确的位置
//}
//
////递归函数 原始数组 左侧 与 右侧
//void QuickSort(int A[], int left, int right)
//{
//	//表示把我们数组当中每个元素 都分别找到正确的定位
//	if (left < right)
//	{
//		//pos 5
//		int pos = Partition(A, left, right);
//		//a数组,0，10
//		QuickSort(A, left, pos - 1);// 0-4
//		QuickSort(A, pos + 1, right); //6-10
//	}
//
//}
////斐波那契数列 递归
//int Fib(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
////斐波那契数列 非递归实现 1   1   2   3   5   8   。。。
//int fib(int n) //n=5
//{
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	int f1 = 1;
//	int f2 = 0;
//	int fn = 0; //第三个元素 索引2 (1 1 2 3 5)
//	for (int i = 2; i <= n; i++)
//	{
//		fn = f2 + f1; // fn=1+1 得出来结果
//		f2 = f1; //第一个值往后挪一格
//		f1 = fn; //第二个值等于结果
//	}
//	return fn;
//}
//
//void Bubble(int a[], int n)
//{
//	bool exchange = true;
//	int i = 1;
//	int tem;
//	while (exchange)
//	{
//		exchange = false;
//		for (int j = 0; j < n - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				tem = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tem;
//				exchange = true;
//			}
//		}
//		i++;
//	}
//}
//
////二分查找
//int BinSearch(int *nums, int n, int x) {
//	int low, mid, high;
//	low = 0, high = n - 1;
//
//	while (low <= high) {
//		mid = (low + high) / 2;
//		if (x == nums[mid]) {
//			return mid;
//		}
//		else if (nums[mid]>x) {
//			high = mid - 1;
//		}
//		else if (nums[mid]<x) {
//			low = mid + 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//快速排序
//	int A[11] = { 35,18,16,72,24,65,12,88,46,28,55 };
//	QuickSort(A, 0, 10);
//	for (int i = 0; i< 11; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	//斐波那契数列 测试
//	int n;
//	cout<< "请输入一个整数：";		//表示要求的是数列中的第几个数。 
//	cout << endl;
//	cin>> n;
//	cout << fib(n) << endl;
//	//冒牌排序测试
//	int a[10] = { 18,23,15,3,8,54,12,54,76,100 };
//	for (int i = 0; i<10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	Bubble(a, 10);
//	for (int i = 0; i<10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	//二分查找
//	int a[] = { 0,1,3,5,7,8,10,11,13,15 };
//	int len = sizeof(a) / sizeof(a[0]);//获得长度 也可以写死10
//	int result;
//	int num = 12;
//	result = BinSearch(a, len, num);
//	cout << result << endl;
//
//	return 0;
//}
//
//
//

#include <stdlib.h>
#include <algorithm>
#include<iostream>
using namespace std;
//定义的数组要比真正的盘大一圈  大的一圈都是  0        实际上是8*6的连连看
#define WIDTH 10
#define HEIGHT 8
int data[HEIGHT][WIDTH] = { 0 };
//0  代表空格  





//随机生成一半的数字   把数字复制一份   两份存在一起   作为所有的数据    再随机生成间隔   填入数组
int InitData()
{
	int data[HEIGHT][WIDTH] = { 0 };
	///*int tmpData[HEIGHT - 2][WIDTH - 2] = { 0 };*/
	//int tempData[HEIGHT - 2][WIDTH - 2] = { 0 };
	int num[24] = { 0 };
	int num2[48] = { 0 };
	int num3[48] = { 0 };
	srand(1);
	int i;
	for (i = 0; i < 24; i++)
{
		num[i] = rand()%10;
		//num2[2*i] = num2[i];
	}
	//cout << " " << endl;

	for (int g = 0; g < 24; g++)
	{
		num2[g] = num[g];
		
	}


	for (int g = 0; g < 24; g++)
	{
		num2[g+24] = num[g];

	}

	for (int j = 0; j < 24; j++)
	{
		cout << num[j] << "  ";
	}
	cout << " " << endl;


	for (int p = 0; p < 48; p++)
	{
		cout << num2[p] << "  ";
	}
	int a = 0;
	int b = 1;
	int c = 0;
	int op = 0;
	
		while (1)
		{

			num3[0] = num2[0];

			op = rand() % 10;
			if (num3[a + op] == 0)
			{
				num3[a + op] = num2[b];
				b++;
			}



			//来个判断，若全部填满   跳出
			if (num3 != 0)
			{
				break;
			}
		}

	for (int z = 0; z < 48; z++)
	{
		cout << num3[z] <<"   "<< endl;
	}
	return 0;

}
int main()
{
	InitData();
	return 0;
}

