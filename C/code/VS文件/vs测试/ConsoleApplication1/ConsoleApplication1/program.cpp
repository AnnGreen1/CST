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

//#include <stdio.h>
//char f(char x)
//{
//	return x*x % 10 + '0';
//}
//int main()
//{
//	char a;
//	int b = 0;
//	for (a = 0; a<5; a += 1)
//	{
//		b = f(a);
//		putchar(b);
//	}
//}


//#include<iostream>
//
//using namespace std;
//
//class Virtualbase
//
//{
//
//public:
//
//	virtual void Demon() = 0;
//
//	virtual void Base() { cout << "1" << endl; }
//
//};
//
//class SubVirtual :public Virtualbase
//
//{
//
//public:
//
//	void Demon()
//
//	{
//
//		cout << "2" << endl;
//
//	}
//
//	void Base()
//
//	{
//
//		cout << "3" << endl;
//
//	}
//
//};
//
//int main()
//
//{
//
//	Virtualbase* inst = new SubVirtual();
//
//	inst->Demon();
//
//	inst->Base();
//
//	return 0;
//
//}

#include<iostream>

using namespace std;
//
//class Virtualbase
//
//{
//
//public:
//
//	virtual void Demon() = 0;
//
//	virtual void Base() { cout << "1" << endl; }
//
//};
//
//class SubVirtual :public Virtualbase
//
//{
//
//public:
//
//	void Demon()
//
//	{
//
//		cout << "2" << endl;
//
//	}
//
//	void Base()
//
//	{
//
//		cout << "3" << endl;
//
//	}
//
//};

int main()

{
	string str;
	cin>>"str";

	cout << "str";


	return 0;

}