//#include "stdlib.h"
//#include <iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	//cout << "Hello World" << endl;
//	//cout << true << endl;
//	//system("pause");
//
//
//	int a = 2;
//	cout << a += a -= a*a << endl;;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class A {
//public:
//	A() { cout << "A"; }
//};
//class B {
//public:
//	B() { cout << "B"; }
//};
//class C : public A {
////public:
////	C() { cout << "C"; }
//private:
//	B b;
//};
//int main() {
//	C obj;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A() { cout << "A::A() called.\n"; }
//	virtual ~A() { cout << "A::~A() called.\n"; }
//};
//class B : public A
//{
//public:
//	B(int i)
//	{
//		cout << "B::B() called.\n";
//		buf = new char[i];
//	}
//	virtual ~B()
//	{
//		delete[]buf;
//		cout << "B::~B() called.\n";
//	}
//private:
//	char *buf;
//};
//int main()
//{
//	A *a = new B(15);
//	delete a;
//	return 0;
//}
//
//
////#include <iostream>
////using namespace std;
//////void testDefaulParam(int a, int b = 7, char z = '*')
//////{
//////	cout << "hall" << endl;
//////}
//////class MyClass {
//////public:
//////	MyClass() { cout << 1; }
//////};
////class A
////{
////public:
////	A()
////	{
////		cout << "A构造" << endl;
////	}
////	int fun()
////	{
////		cout << "这是fun函数" << endl;
////		return 0;
////	}
////};
////int main()
////{/*
////	testDefaulParam(5);
////	testDefaulParam(5, 8);
////	testDefaulParam(0, 0, '*');
////
////	testDefaulParam(5, '#');
////*/
////	//A b[2];
////	//b[0].fun();
////	//b[1].fun();
////	//A *p[2];
////
////	//MyClass a, b[2], *p[2];
////	//MyClass j;
////	//MyClass f[2];
////	/*MyClass *q;*/
////	//int a = 3, b = 2;
////	//int *p = &a;
////	//b += a++;
////	//cout << *p << "   " << b;
////
////	int a = 0;
////	int b = 0;
////	int aa = 4;
////	int bb = 5; 
////	a = aa--;
////	b = a*bb;
////	cout << a << " " << b << endl;
////
////
////	return 0;
////}
//
////#include <iostream.h>
//
////class mother {
////public:
////	mother()
////	{
////		cout << "mother: no parameters\n";
////	}
////	mother(int a)
////	{
////		cout << "mother: int parameter\n";
////	}
////};
////
////class daughter : public mother {
////public:
////	daughter(int a)
////	{
////		cout << "daughter: int parameter\n\n";
////	}
////};
////
////class son : public mother {
////public:
////	son(int a) : mother(a)
////	{
////		cout << "son: int parameter\n\n";
////	}
////};
////
////int main() {
////	daughter cynthia(1);
////	son daniel(1);
////	return 0;
////}
////
////class base {
////public:
////	int n;
////	base() { n = 0; }
////	base(int x) { n = x; }
////	virtual void set(int m) { n = m; cout << n << ' '; }
////};
////class deriveA :public base {
////public:
////	deriveA(int x) { }
////	void set(int m) { n += m; cout << n << ' '; }
////};
////class deriveB :public base{
////   public:
////	   deriveB(int x) :base(x) { }
////	   void set(int m) { n += m; cout << n << ' '; }
////};
////void main() {
////	deriveA dl(1);
////	deriveB d2(3);
////	base *pbase;
////	pbase = &dl;
////	pbase->set(1);
////	pbase = &d2;
////	pbase->set(2);
////}
//
////class boy {
////	
////public:
////	boy()
////	{
////		cout << "hh" << endl;
////	}
////};
////
////int main()
////{
////	//int i = 10;
////	//int &j = i;
////	//i++;
////	//j += 3;
////	//
////	//cout << i << "   " << j << endl;
////
////	//int p = 3;
////	//int d = 2;
////	//int *u = &p;
////	//d += p++;
////	//cout << *u<<"    "<<d;
////	boy b1, *b2;
////	b2 = new boy();
////	//boy &b4 = b1;
////
////
////}
//
////#include<stdio.h>
////#include<iostream>
////class animal
////{public:
////	virtual void sleep() = 0;
////	//{
////	//	cout << "睡觉" << endl;
////
////	//}
////};
////class fish :public animal
////{
////public:
////	void sleep()
////	{
////		cout << "ooooooooooooooooo" << endl;
////	}
////
////};
////class dog :public animal {
////public:
////	void sleep()
////	{
////		cout << "huhuhuhuhuhuhuhuhuh" << endl;
////	}
////};
////int main()
////{
////	/*animal a;
////	a.sleep();*/
////	animal *p = new fish();
////	p->sleep();
////
////
////	//bool a = false;
////	//int b = 0;
////	//cout << ((a != b) ? true : false);
////
/////*
////	int x = 5;
////	int y = 3;
////	x = y == 5;*/
////	
////	return 0;
////}
//
//
//
////class Monster
////{
////public:
////	string name;
////	int hp;
////	Monster(string name, int hp)
////	{
////		this->name = name;
////		this->hp = hp;
////	}
////};
////int main()
////{
////	Monster*m1 = new Monster("fgsfgsfgs", 2000);
////	Monster *m2 = m1;
////	m2->hp = 1000;
////	cout << hp;
////	return 0;
////}
//
//
////#include<iostream>
////
////using namespace std;
//
////class Student {
////
////public:
////
////	void Introduce() {
////
////		cout << "S";
////
////	}
////
////};
////
////class GraStudent :public Student {
////
////public:
////
////	void Introduce() {
////
////		cout << "G";
////
////	}
////
////};
////
////void main() {
////
////	Student *s = new Student();
////
////	s->Introduce();
////
////	GraStudent *gs = new GraStudent();
////
////	gs->Introduce();
////
////}
//
////class Monster
////{
////public:
////	string name;
////	int HP;
////
////	Monster(string name, int HP) {
////		this->name = name;
////		this->HP = HP;
////	}
////	Monster();
////};
////class A {
////
////public:
////
////	int a;
////
////	string b;
////
////
////	A();
////	A(int a) { this->a = a;
////	cout << a << endl;
////	}
////
////	A(string b) { this->b = b; 
////	cout << "<<b<<" << endl;
////	}
////
////};
////
////
////
////
////
////int main()
////{
////	//Monster *m = new Monster();
////	//Monster m("巴尔坦虫怪");
////	/*Monster m = Monster("巴尔坦虫怪", 500);
////	Monster m;*/
////
////	//A *a = new A(3);
////	//A a();
////	//A a(3);
////	//A *a = new A("3");
////
////	A *pa = new A();
////	/*A *pb = new A("3.0");
////	A b(3);*/
////	//A *pa = new A(3);
////}
//
////class Monster
////{
////public:
////	string name;
////	int HP;
////
////	Monster(string name, int HP) {
////		this->name = name;
////		this->HP = HP;
////	}
////};
////
////int main()
////{
////	/*Monster *m1 = new Monster("巴尔坦虫怪", 2000);
////	Monster *m2 = m1;
////	m2->HP = 1000;
////	cout << m1->HP;*/
////
////
////	char s[] = { "1234" };
////	char a[5] ={67,68,69,70,71 };
//////	cout << s[0] <<" "<< s[1] <<" "<< s[2] <<" "<< s[3]<<" " << s[4] <<" "<< s[5] << endl;
////	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << endl;
////	return 0;
////}
//
//
//
////#include<iostream>
////
////using namespace std;
//
////class drawing
////{
////public:
////	virtual double area() = 0;//面积
////	virtual double girth() = 0;//周长
////};
//////矩形
////class rectangle:public drawing
////{
////	public:
////	int a;
////	int b;
////	double area(int a, int b)
////	{
////		return a*b;
////	}
////	double area(int a, int b)
////	{
////		return a+b+a+b;
////	}
////	rectangle();
////};
//////正方形
////class square:public rectangle
////{
////public:
////};
//////圆形
////class round:public drawing
////{
////
////};
////class GPS
////{
////public:
////	int sayelliteMap()
////	{
////
////	}
////};
////class Car
////{
////public:
////	string model;
////	Car(string m)
////	{
////		model = m;
////	}
////	Car();
////	~Car();
////	GPS move(GPS&)
////	{
////		cout << "qi" << endl;
////	}
////};
////setfill设置填充符，setw设置格式
//#include <iomanip>
////等腰三角形  IsoscelesTriangle            直角三角形   RightTriangle
//
////setfill与setw方法打印
//int IsoscelesTriangle(int a)
//{
//	cout << "等腰三角形" << endl;
//
//	cout << "1 空心  2 实心" << endl;
//	int op = 0;
//	char fill = '*';
//	cin >> op;
//	if (op == 1) fill = ' ';
//	else fill = '*';
//
//	//int b = a / 2;
//	cout <<setfill(' ')<< setw(a) << '*' << endl;//第一行
//	//中间的
//	int y = 2;
//	for (int r = 2; r < a ; r++)
//	{
//		cout << setfill(' ') << setw(a - r + 1) << '*' <<setfill(fill)<< setw(y) << '*' << endl;
//		y += 2;
//	}
//	for (int h = 0; h < a; h++)//最后一行
//	{
//		
//		cout << "*" ;
//		//空心打印空格  实心打印星号
//		if (op == 1)
//			cout << " ";
//		else
//			cout << '*';
//	}
//
//	return 0;
//}
//int RightTriangle(int b)
//{
//	cout << "直角三角形" << endl;
//	cout << "1 空心  2 实心" << endl;
//	int op = 0;
//	char fill = '*';
//	cin >> op;
//	if (op == 1) fill = ' ';
//	else fill = '*';
//	cout << '*' << endl;
//	for (int j = 1; j < b-1; j++)
//	{
//		cout << '*' << setfill(fill) << setw(j) << '*' << endl;
//	}
//	for (int g = 0; g <b; g++)
//	{
//		cout << '*' ;
//	}
//	return 0;
//}
//
//int IsoscelesTriangle2(int c)
//{
//	return 0;
//}
//int RightTriangle2(int d)
//{
//	cout << "1空心 2实心"<<endl;
//	int op = 0;
//	cin >> op;
//	if (op = 2)
//	{
//		for (int e = 0; e <= d; e++)
//		{
//			for (int w = 0; w < e; w++)
//			{
//				cout << "*";
//			}
//			cout << "" << endl;
//		}
//
//	}
//	else
//	{
//		cout << "*" << endl;
//
//		//char tian[] = { " " };
//
//		for (int l = 0; l < d - 2; d++)
//		{
//			cout << "*";
//			for (int p=0; p < l-2; p++)
//			{
//				cout << " ";
//			}
//			cout << "*";
//			
//		}
//		
//	}
//	return 0;
//}
//
//int main1()
//{
//	/*cout << "jjjj" << endl;*/
//
//	/*drawing *p = new rectangle();*/
//	/*Car *car = new Car("GTR");
//	GPS *gps = new GPS();
//	car->move(gps);*/
//
//	//cout << "测试可不可以用" << endl;
//
//	//cout << "qwertyuioplkjhgfdahfahhfjaf" << endl;
//
//	//cout << "分组信息" << endl;
//	//cout << "吴文君" << endl;
//
//
//
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << '*' << setw(3) << endl;
//	//cout << setw(5) << '*' << endl;//                                n          
//	//cout << setw(4) << '*' << setw(2) << '*' << endl;//            n-1        2
//	//cout << setw(3) << '*' << setw(4) << '*' << endl;//            n-2         4
//	//cout << setw(2) << '*' << setw(6) << '*' << endl;//            n-3         6
//	//cout << '*' << setw(2) << '*' << setw(2) << '*' << setw(2) << '*' << setw(2) << '*' << setw(2) << endl;
//
//	//cout << 'here' << endl;
//
//	//char fill = '*';
//	//cout << setw(2) << '*' <<setfill(fill)<< setw(6) << '*' << endl;
//	cout << "--------------------------------------------------------------------------------------------------------" << endl;
//	cout << "底边几个" << endl;
//	int b = 0;
//	cin >> b;
//	int op = 0;
//	cout << "用setfill方法吗？ 用：1  不用：2"<<endl;
//	cin >> op;
//
//	if (op == 1)
//	{
//		IsoscelesTriangle(b);
//
//		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
//		RightTriangle(b);
//	}
//	else
//	{
//		RightTriangle2(b);
//	}
//	
//	return 0;
//}
//
//
////---------------------------------------------------------------------------------------------------------------------------------------------------------------
////通讯录管理系统
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#define maxLen 100
//using namespace std;
////结构体
//struct Person
//{
//	int OrderNumber;
//	string name;
//	int sex;
//	int age;
//	string phone;
//	string add;
//};
//struct Person iPerson[maxLen];
//
////string name[maxLen];
////int sex[maxLen];
////int age[maxLen];
////int phone[maxLen];
//
//
//int ShowMenu()
//{
//	cout << "----------------------------------------------------------" << endl;
//	cout << "\t" << "1.添加联系人" << endl;
//	cout << "\t" << "2.显示联系人" << endl;
//	cout << "\t" << "3.删除联系人" << endl;
//	cout << "\t" << "4.查找联系人" << endl;
//	cout << "\t" << "5.修改联系人" << endl;
//	cout << "\t" << "6.清空联系人" << endl;
//	cout << "\t" << "7.存储联系人" << endl;
//	cout << "\t" << "8.读取联系人" << endl;
//	cout << "\t" << "9.联系人排序" << endl;
//	cout << "\t" << "0.退出通讯录" << endl;
//	
//
//
//	cout << "--------------Copyright 2020 AnnGreen-----------------" << endl;
//	return 0;
//}
//int AddPerson()
//{
//	int opt = 0;
//	string name;
//	int sex;
//	int age;
//	int phone;
//	for (int i = 0; i < maxLen; i++)
//	{
//		if (sex[i] = 0)
//		{
//
//		}
//	}
//	if (sex[maxLen]==0)
//	{
//		cout << "通讯录已满" << endl;  return 0;
//	}
//
//	else
//	{
//		//cout << "名字" << endl;
//		//cin>>"name";
//		///*name[opt] =" name";*/
//		//cin >>"name[opt]";
//		//cout << "性别" << endl;
//		//cin>>sex;
//		//cin >> sex[opt];
//
//		//cout << "age" << endl;
//		//cin >> age[opt];
//
//		//cout << "phone" << endl;
//		//cin >> phone[opt];
//		//opt++;
//		
//		//iPerson[0].name = a.name;
//		//iPerson[0].sex = a.sex;
//		//iPerson[0].age = a.age;
//		//iPerson[0].phone = a.phone;
//	
//	
//		
//
//	}
//	return 0;
//}
//int main()
//{
//	//Person a;			{ "jixiaokang","张三","李四" }
//	/*string name[maxLen] ;
//	int sex[maxLen];
//	int age[maxLen];
//	int phone[maxLen];*/
//	for (int j = 0; j < maxLen; j++)
//		sex[j] = 0;
//	
//	while (1)
//	{
//
//
//		ShowMenu();
//		int op = 0;
//		cin >> op;
//		switch (op)
//		{
//		case 1:
//
//
//			//cin >> "a.name";
//			AddPerson();
//
//			cout << "add成功" << endl;
//
//			break;
//
//		default:
//			cout << "cuoeu" << endl;
//		}
//
//
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
//	/*int a;
//	cin >> a;*/
//	
//	cout << "ok" << endl;
//	return 0;
//}



//
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//// 宏常量
//#define MAX 1000
////联系人结构体
//struct Person
//{
//	string m_Name; //姓名
//	int m_Sex; //性别
//	int m_Age; //年龄
//
//	string m_Addr;//住址
//	string m_Phone;
//
//};
//
//struct AddressBook
//{
//	struct Person personArray[MAX];
//	int m_Size;//
//};
//
//void showMenu()
//{
//	cout << "----------------------------" << endl;
//	cout << '/t' << "1.添加联系人" << endl;
//	cout << "/t" << "2.显示联系人" << endl;
//	cout << "/t" << "3.删除联系人" << endl;
//	cout << "/t" << "4.查找联系人" << endl;
//	cout << "/t" << "5.修改联系人" << endl;
//	cout << "/t" << "6.清空联系人" << endl;
//	cout << "/t" << "7.存储联系人" << endl;
//	cout << "/t" << "8.读取联系人" << endl;
//	cout << "/t" << "9.联系人排序" << endl;
//	cout << "/t" << "0.退出通讯录" << endl;
//	cout << "----------------------------" << endl;
//}
////公用代码
//void common() {
//	//换行
//	cout << endl;
//	//让用户按任意键继续
//	system("pause");
//	//清除屏幕信息
//	system("cls");
//}
////int isExist(AddressBook *ab，string name){
////	for (int i = 0; i < ab->m_Size; i++)
////	{
////		if (ab->personArray[i].m_Name == name)
////		{
////			return i; //返回找到的数据的位置
////		}
////	}
////	return -1;
////
////}
////添加联系人(不能是普通的参数指针参数)
//void addPerson(AddressBook * ab) {
//	//判断通讯录是否已满，如果满了就不再添加了
//	if (ab->m_Size == MAX) {
//		cout << "通讯录已满，不能再继续添加" << endl;
//		return;
//	}
//	else
//	{
//		//添加联系人姓名
//		string name;
//		cout << "请输入联系人姓名:" << endl;
//		cin >> name;
//		ab->personArray[ab->m_Size].m_Name = name;
//		//添加联系人性别
//		int sex;
//		cout << "请输入联系人性别(1->男 | 0->女) :" << endl;
//		//判断用户输入的值是否正确，错误则一直循环让用户输入，直到正确为止
//		while (true)
//		{
//			cin >> sex;
//			if (sex == 0 || sex == 1)
//			{
//				ab->personArray[ab->m_Size].m_Sex = sex;
//				break;
//			}
//			cout << sex << "识别不了，重新输入" << endl;
//
//		}
//		//添加联系人年龄
//		int age;
//		cout << "输年龄" << endl;
//		while (true)
//		{
//			cin >> age;
//			if (age > 0 && age < 200)
//			{
//
//				ab->personArray[ab->m_Size].m_Age = age;
//				break;
//
//			}
//			cout << "年龄不符合,重新输" << endl;
//
//		}
//		//添加电话
//		string phone;
//		cout << "输电话" << endl;
//		cin >> phone;
//		ab->personArray[ab->m_Size].m_Phone = phone;
//
//		//输地址
//		string addr;
//		cout << "输地址" << endl;
//		cin >> addr;
//		ab->personArray[ab->m_Size].m_Addr = addr;
//
//
//		//更新通讯录
//		ab->m_Size++;
//		//提示信息，告知用户添加成功
//		cout << "添加成功，[" << name << "]已处于通讯录中" << endl;
//		common();
//	}
//}
//
////显示联系人
//void showPerson(const AddressBook * const ab) {
//	if (ab->m_Size == 0) {
//		cout << "通讯录空空如也..." << endl;
//	}
//	else
//	{
//		cout << "姓名\t" << "性别\t" << "年龄\t" << "电话\t" << "住址" << endl;
//		for (int i = 0; i < ab->m_Size; i++)
//			cout
//			<< ab->personArray[i].m_Name << "\t"
//			<< (ab->personArray[i].m_Sex == 1 ? "男" : "女") << "\t"
//			<< ab->personArray[i].m_Age << "\t"
//			<< ab->personArray[i].m_Phone << "\t"
//			< ab->personArray[i].m_Addr << "\t"
//			<< endl;
//	}
//	common();
//
//}
//
////删除联系人
//void deletePerson(AddressBook * ab) {
//	//让用户输入想删除的人姓名
//	cout << "请输入希望删除的联系人姓名:" << endl;
//	string name;
//	cin >> name;
//	//判断联系人是否存在
//	int index = isExist(ab, name);
//	//删除联系人
//	if (index == -1)
//	{
//		int index;
//		cout << "国联系人是否存在卡一 个不存的人，核对后再来吧!" << endl;
//	}
//	else
//	{
//		//循环，让后一个元素，覆盖前面一个元素
//		for (int i = index; i < ab->m_Size; i++)
//		{
//			ab->personArray[i] = ab->personArray[i + 1];
//		}
//		ab->m_Size--;
//		cout << "删除" << name << "]成功!" << endl;
//	}
//	common();
//}
////查找联系人
////查找联系人
//void findPerson(AddressBook * ab) {
//	//提示用户输入希望查找的联系人
//	cout << "请输入希望寻找的联系人姓名:" << endl;
//	string name;
//	cin >> name;
//	//判断联系人在不在
//	int index = isExist(ab, name);
//	if (index == -1)
//	{
//		cout << "你在寻找 - 个不存的人，核对后再来吧!" << endl;
//	}
//	else
//	{
//		cout << "查到[" << name << "]信息如下:" << endl;
//		cout
//
//			<< ab->personArray[index].m_Name << "\t"
//			<< (ab->personArray[index].m_Sex == 1 ? "男" : "女") << "\t"
//			<< ab->personArray[index].m_Age << "\t"
//			<< ab->personArray[index].m_Phone << "\t"
//			<< ab->personArray[index].m_Addr << "\t"
//			<< endl;
//	}
//	common();
//	//如果在  则显示联系人
//
//}
////修改联系人
//void updatePerson(AddressBook * ab) {
//
//
//	//提示用户输入希望查找的联系人
//	cout << "请输入希望寻找的联系人姓名:" << endl;
//	string name;
//	cin >> name;
//	//判断联系人在不在
//	int index = isExist(ab, name);
//	if (index == -1)
//		cout << " 你在修改-个不存的人，核对后再来吧!" << endl;
//	else
//	{
//		//添加联系人姓名
//		string name;
//		cout << "请输入联系人姓名:" << endl;
//		cin >> name;
//		ab->personArray[index].m_Name = name;
//		//添加联系人性别
//		int sex;
//		cout << "请输入联系人性别(1->男 | 0->女) :" << endl;
//		//判断用户输入的值是否正确，错误则一直循环让用户输入，直到正确为止
//		while (true)
//		{
//
//			cin >> sex;
//			if (sex == 0 || sex == 1)
//			{
//				ab->personArray[index].m_Sex = sex;
//				break;
//			}
//			cout << "本通讯录暂不支持录入非人类，重新输入吧:" << endl;
//			//添加联系人电话
//			string phone;
//			cout << "请输入联系人电话:" << endl;
//			cin >> phone;
//			ab->personArray[index].m_Phone = phone;
//			//添加联系人地址
//			string addr;
//			cout << "请输入联系人地址:" << endl;
//			cin >> addr;
//			ab->personArray[index].m_Addr = addr;
//			cout << "[" << name << "]资料修改成功!" << endl;
//
//		}
//		common();
//	}
//}
//
//	//清除联系人
//	void cleanPerson(AddressBook * ab) {
//		int result = 0; //用户确认结果
//		cout << "你这个动作很危险，确定要执行吗(确定-> 1 | 取消 -> 0) ? ”" << endl;
//		cin >> result;
//		if (result == 1)
//		{
//			ab->m_Size = 0;
//			cout << "通讯录清除成功!" << endl;
//		}
//		//偷懒的写法通讯录结构体对象:联系人集合: [张三， 李四，王五]，联系人的目前人数: 3
//		//通讯录结构体对象当中的联系人个数归0;
//		//根据我前面的CRUD (增create删de lete改update查read)根 据目前人数进行数值遍历
//		//即使我们的联系集合里面有数据，也遍历显示不出来张无忌
//		// [张无忌，李四，王五]，目前人数: 1
//
//
//
//		common();
//
//
//
//
//	}
//
//	//存储联系人 写：输出流
//	//存储联系人写:输出流
//	void savePerson(AddressBook * ab) {
//		//引入头文件
//		//创建输出流
//		ofstream ofs;
//		//打开文件文本进行输出
//		ofs.open("addressBook. txt"，ios: : out);
//		//输出内容
//		for (int i = 0; i < ab->m.Size; i++)
//		{
//			ofs << ab->personArray[i].m Name << ""
//				<< ab->personArray[i].m Age << ""
//				<< ab->personArray[i].m Sex << " "
//				<< ab->per sonArray[i].m Phone << " "
//				<< ab->per sonArray[i].m Addr << endl;
//		}
//		//关闭输出流
//		ofs.close();
//		cout << "通讯录保存成功" << endl;
//		commom();
//	}
//	////读取联系人
//	//void loadPerson(AddressBook * ab) {
//	//	//引入头文件
//	//	//创建输入流
//	//	//打开文件
//	//	ifstream ifs(" addressBook. txt"，ios::in);
//	//	if (!ifs.is._open()) {
//	//		cout << "文件打开失败" << endl;
//	//		return;
//	//	}
//	//	//读取内容
//	//	string m_ Name; //姓名
//	//	int m_Sex; //性别
//	//	int m_Age; //年龄
//	//	string m_Phone;//电话
//	//	string m_Addr;//住址
//	//	while (ifs >> m_Name && ifs >> m_Sex && ifs >> m_Age&&ifs >> m_Phone && ifs >> m_Addr).
//	//	{
//	//		ab->personArray[ab->m_Size].m_Name = m_Name;
//	//		ab->personArray[ab->m_Size].m_Sex = m_Sex;
//	//		ab->personArray[ab->m_Size].m_Age = m_Age;
//	//		ab->personArray[ab->m_Size].m_Phone = m_Phone;
//	//		ab->personArray[ab->m_Size].m_Addr = m_Addr;
//
//	//		ab->m_Size++;
//
//	//	}
//	//	//关闭输入流
//	//	ifs.close();
//	//	cout << "读取联系人成功!" << endl;
//	//	common();
//	//}
//
//	//联系人排序(以年龄)
//	void sortPerson(AddressBook * ab) {
//		//控制总轮数
//		for (int i = 0; i < ab->m_Size - 1; i++)
//		{
//			//控制没轮对比的次数
//			for (int j = 0; j<ab->m_Size - i - 1; j++)
//			{
//				//判断是否比后- -个年龄大，是则交换
//				if (ab->personArray[j].m_Age > ab->personArray[j + 1].m_Age)
//				{
//					Person temp = ab->personArray[j];
//					ab->personArray[j] = ab->personArray[j + 1];
//					ab->personArray[j + 1] = temp;
//				}
//
//
//			}
//		}
//		cout << "按照年龄排序成功" << endl;
//		showPerson(ab);
//	}
//
//	int main()
//	{
//		int userSelect = 0; //定义变量用于接收用户输入的菜单编号
//		AddressBook ab; //创建通讯录结构体变量
//		ab.m_Size = 0; //初始化通讯录中的人数
//		while (true)
//		{
//			showMenu();
//			cout << "\n请输入功能编号:" << endI;
//			cin >> userSelect;
//			switch (userSelect)
//			{
//
//
//			case 1: //添加联系人
//				addPerson(&ab); //这个地方要传递地址，如果是值传递，那么方法里添加了1
//				break;
//			case 2: //显示联系人
//				showPerson(&ab);
//				break;
//			case 3: //删除联系人
//				deletePerson(&ab);
//				break;
//			//case 4: //查找联系人
//			//	findPerson(&ab);
//			//	break;
//			//case 5: //修改联系人
//			//	updateParsnn(&ab);
//			//	break;
//			//case 6:
//			//	clearPerson(&ab);
//			//	break;
//			//case 7:
//			//	savePerson(&ab);
//			//	break;
//
//
//
//
//
//			}
//
//
//		}
//		return 0;
//	}
//
//
//
//
//

//
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//// 宏常量
//#define MAX 1000
////联系人结构体
//struct Person
//{
//	string m_Name; //姓名
//	int m_Sex; //性别
//	int m_Age; //年龄
//
//	string m_Addr;//住址
//	string m_Phone;
//
//};
//
//struct AddressBook
//{
//	struct Person personArray[MAX];
//	int m_Size;//
//};
//int isExist(AddressBook *ab, string name)
//{
//	for (int i = 0; i < ab->m_Size; i++)
//	{
//		if (ab->personArray[i].m_Name==name)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void showMenu()
//{
//	cout << "----------------------------" << endl;
//	cout << '/t' << "1.添加联系人" << endl;
//	cout << "/t" << "2.显示联系人" << endl;
//	cout << "/t" << "3.删除联系人" << endl;
//	cout << "/t" << "4.查找联系人" << endl;
//	cout << "/t" << "5.修改联系人" << endl;
//	cout << "/t" << "6.清空联系人" << endl;
//	cout << "/t" << "7.存储联系人" << endl;
//	cout << "/t" << "8.读取联系人" << endl;
//	cout << "/t" << "9.联系人排序" << endl;
//	cout << "/t" << "0.退出通讯录" << endl;
//	cout << "----------------------------" << endl;
//}
//int addPerson(AddressBook *ab)
//{
//	//满了没
//	if (ab->m_Size == MAX)
//	{
//		cout << "满了" << endl;
//		return 0;
//	}
//	else
//	{
//		string name;
//		cout << "输名字" << endl;
//		cin >> name;
//		ab->personArray[ab->m_Size].m_Name = name;
//		
//		int sex;
//		cout << "输性别  1男  0女" << endl;
//		cin >> sex;
//		ab->personArray[ab->m_Size].m_Sex = sex;
//	
//
//		int age;
//		cout << "输年龄" << endl;
//		cin >> age;
//		ab->personArray[ab->m_Size].m_Age = age;
//
//		int phone;
//		cout << "输电话" << endl;
//		cin >> phone;
//		ab->personArray[ab->m_Size].m_Phone = phone;
//
//		int addr;
//		cout << "输地址" << endl;
//		cin >> addr;
//		ab->personArray[ab->m_Size].m_Addr = addr;
//
//		//更新
//		ab->m_Size++;
//		cout << "添加成功" << endl;
//	
//
//	}
//	return 0;
//}
//int showPerson(AddressBook *ab)
//{
//	//空不空
//	if (ab->m_Size == 0)
//	{
//		cout << "空的" << endl;
//	}
//	else
//	{
//		cout << "姓名\t" << "性别\t" << "年龄\t" << "电话\t" << "住址" << endl;
//		for (int i = 0; i < ab->m_Size; i++)
//		{
//			cout
//				<< ab->personArray[i].m_Name << "\t"
//				<< (ab->personArray[i].m_Sex == 1 ? "男" : "女") << "\t"
//				<< ab->personArray[i].m_Age << "\t"
//				<< ab->personArray[i].m_Phone << "\t"
//				<<ab->personArray[i].m_Addr << "\t"
//				<< endl;
//		}
//	}
//	return 0;
//}
//int deletePerson(AddressBook *ab)
//{
//	cout << "想删谁，输入" << endl;
//	string name;
//	cin >> name;
//	int index = isExist(ab, name);
//	if (index == -1)
//	{
//		cout << "暂无此人" << endl;
//	}
//	else
//	{
//		//向前覆盖
//		for (; index < ab->m_Size; index++)
//		{
//			ab->personArray[index] = ab->personArray[index + 1];
//		}
//		ab->m_Size--;
//		cout << "删除成功" << endl;
//	}
//	return 0;
//}
//int findPerson(AddressBook *ab)
//{
//	cout << "找谁" << endl;
//	string name;
//	cin >> name;
//	int index = isExist(ab, name);
//	if(index==-1)
//	{
//		cout << "暂无此人" << endl;
//	}
//	else {
//		cout << ab->personArray[index].m_Name << "\t"
//			<< (ab->personArray[index].m_Sex == 1 ? "男" : "女") << "\t"
//			<< ab->personArray[index].m_Age << "\t"
//			<< ab->personArray[index].m_Phone << "\t"
//			<< ab->personArray[index].m_Addr << "\t"
//			<< endl;
//	}
//	return 0;
//}
//int updatePerson(AddressBook *ab)
//{
//	cout << "改谁" << endl;
//	string name;
//	cin >> name;
//	int index = isExist(ab, name);
//	if (index == -1)
//	{
//		cout << "暂无此人" << endl;
//	}
//	else {
//		string name;
//		cout << "姓名" << endl;
//		cin >> name;
//		ab->personArray[index].m_Name = name;
//		int sex;
//		cout << "请输入联系人性别(1->男 | 0->女) :" << endl;
//		cin >> sex;
//		ab->personArray[index].m_Sex = sex;
//
//		string phone;
//		
//		cout << "请输入联系人电话:" << endl;
//		cin >> phone;
//		ab->personArray[index].m_Phone = phone;
//		//添加联系人地址
//		string addr;
//		cout << "请输入联系人地址:" << endl;
//		cin >> addr;
//		ab->personArray[index].m_Addr = addr;
//		cout << "[" << name << "]资料修改成功!" << endl;
//	}
//	return 0;
//}
//int cleanPerson(AddressBook *ab)
//{
//	for (int i = 0; i <= ab->m_Size;i++)
//	{
//		ab->personArray[i].m_Addr = nullptr;
//		ab->personArray[i].m_Age = -1;
//		
//		ab->personArray[i].m_Name = nullptr;
//		ab->personArray[i].m_Phone = -1;
//		ab->personArray[i].m_Sex = -1;
//
//
//
//	}
//	cout << "通讯录清除成功!" << endl;
//	return 0;
//}
//int savePerson(AddressBook *ab)
//{
//
//
//	cout << "暂时为完成" << endl;
//	////引入头文件
//	////创建输出流
//	//ofstream ofs;
//	////打开文件文本进行输出
//	//ofs.open("addressBook. txt"，ios:: out);
//	////输出内容
//	//for (int i = 0; i < ab->m.Size; i++)
//	//{
//	//	ofs << ab->personArray[i].m_Name << ""
//	//		<< ab->personArray[i].m_Age << ""
//	//		<< ab->personArray[i].m_Sex << " "
//	//		<< ab->personArray[i].m_Phone << " "
//	//		<< ab->personArray[i].m_Addr << endl;
//	//}
//	////关闭输出流
//	//ofs.close();
//	//cout << "通讯录保存成功" << endl;
//
//
//	return 0;
//}
//int main()
//{
//	
//	int op = 0;
//	AddressBook ab;
//	ab.m_Size = 0;
//	while (true)
//	{
//		showMenu();
//		cout << "请选择" << endl;
//		cin >> op;
//		switch (op)
//		{
//		case 1:
//			addPerson(&ab);
//			break;
//		case 2:
//			showPerson(&ab);
//			break;
//		case 3:
//			deletePerson(&ab);
//			break;
//		case 4:
//			findPerson(&ab);
//			break;
//		case 5:
//			updatePerson(&ab);
//			break;
//		case 6:
//			cleanPerson(&ab);
//			break;
//		case 7:
//			savePerson(&ab);
//			break;
//		default:
//			cout << "输错了" << endl;
//		}
//		
//
//
//	}
//	return 0;
//}
//
////
//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//#include<time.h>
////time_t time(time_t *seconds)
//
////随机输重置的原理   种子seed不同即可产生不同随机数
//
//int main()
//{
//	int seed = 1;
//
//	for (int j = 0; j < 10; j++)
//	{
//
//		srand(seed);
//		//srand(time(NULL));
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d, ", rand() % 11);
//			
//		}
//		cout << "" << endl;
//		seed++;
//
//	}
//	cout << "是否重置" << endl;
//	int op = 0;
//	cin >> op;
//	if (op == 1)
//	{
//		//重置
//
//	}


//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	// 基于当前系统的当前日期/时间
//	time_t now = time(0);
//
//	cout << "1970 到目前经过秒数:" << now << endl;
//
//	//tm *ltm = localtime_s(&now);
//
//	//// 输出 tm 结构的各个组成部分
//	//cout << "年: " << 1900 + ltm->tm_year << endl;
//	//cout << "月: " << 1 + ltm->tm_mon << endl;
//	//cout << "日: " << ltm->tm_mday << endl;
//	//cout << "时间: " << ltm->tm_hour << ":";
//	//cout << ltm->tm_min << ":";
//	//cout << ltm->tm_sec << endl;
//}
//
//#include <iostream>
//
//using namespace std;
//
//class Line
//{
//public:
//	int getLength(void);
//	Line(int len);             // 简单的构造函数
//	Line(const Line &obj);      // 拷贝构造函数
//	~Line();                     // 析构函数
//
//private:
//	int *ptr;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(int len)
//{
//	cout << "调用构造函数" << endl;
//	// 为指针分配内存
//	ptr = new int;
//	*ptr = len;
//}
//
//Line::Line(const Line &obj)
//{
//	cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
//	ptr = new int;
//	*ptr = *obj.ptr; // 拷贝值
//}
//
//Line::~Line(void)
//{
//	cout << "释放内存" << endl;
//	delete ptr;
//}
//int Line::getLength(void)
//{
//	return *ptr;
//}
//
//void display(Line obj)
//{
//	cout << "line 大小 : " << obj.getLength() << endl;
//}
//
//// 程序的主函数
//int main()
//{
//	Line line1(10);
//
//	Line line2 = line1; // 这里也调用了拷贝构造函数
//
//	display(line1);
//	display(line2);
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Box
//{
//public:
//
//	double getVolume(void)
//	{
//		return length * breadth * height;
//	}
//	void setLength(double len)
//	{
//		length = len;
//	}
//
//	void setBreadth(double bre)
//	{
//		breadth = bre;
//	}
//
//	void setHeight(double hei)
//	{
//		height = hei;
//	}
//	// 重载 + 运算符，用于把两个 Box 对象相加
//	Box operator+(const Box& b)
//	{
//		Box box;
//		box.length = this->length + b.length;
//		box.breadth = this->breadth + b.breadth;
//		box.height = this->height + b.height;
//		return box;
//	}
//private:
//	double length;      // 长度
//	double breadth;     // 宽度
//	double height;      // 高度
//};
//// 程序的主函数
//int main()
//{
//	Box Box1;                // 声明 Box1，类型为 Box
//	Box Box2;                // 声明 Box2，类型为 Box
//	Box Box3;                // 声明 Box3，类型为 Box
//	double volume = 0.0;     // 把体积存储在该变量中
//
//							 // Box1 详述
//	Box1.setLength(6.0);
//	Box1.setBreadth(7.0);
//	Box1.setHeight(5.0);
//
//	// Box2 详述
//	Box2.setLength(12.0);
//	Box2.setBreadth(13.0);
//	Box2.setHeight(10.0);
//
//	// Box1 的体积
//	volume = Box1.getVolume();
//	cout << "Volume of Box1 : " << volume << endl;
//
//	// Box2 的体积
//	volume = Box2.getVolume();
//	cout << "Volume of Box2 : " << volume << endl;
//
//	// 把两个对象相加，得到 Box3
//	Box3 = Box1 + Box2;
//
//	// Box3 的体积
//	volume = Box3.getVolume();
//	cout << "Volume of Box3 : " << volume << endl;
//
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
	cout << "hello" << endl;
	int nums[] = { 0 };
	int target = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> nums[i];
	}
	cin >> target;
	for (int j = 0; j < 5; j++)
	{
		for (int g = 0; g < 5; g++)
		{
			if ((nums[j] + nums[g]) == target)
			{
				cout << nums[j] << " " << nums[g] << endl;
			}
		}
	}
	return 0;
}

//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		int n = nums.size();
//		for (int i = 0; i < n; ++i) {
//			for (int j = i + 1; j < n; ++j) {
//				if (nums[i] + nums[j] == target) {
//					return{ i, j };
//				}
//			}
//		}
//		return{};
//	}
//};
//
//作者：LeetCode - Solution
//链接：https ://leetcode-cn.com/problems/two-sum/solution/liang-shu-zhi-he-by-leetcode-solution/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。











































































































