#include<iostream>
#include<string.h>
using namespace std;
/*
数据类型
*/
int dataType() {
	bool boolean = true;
	char c = 'a';
	int integer = 5;
	float f = 3.16f;
	double d = 3.1415926;
	cout << boolean << " " << c << " " << " " << integer << " " << f << " " << d;
	return 0;
}

/*
常量
*/
#define changliang 1
int constant() {
	const char c = 'g';
	cout << "define定义得常量" << changliang << ",const定义得常量" << c << endl;
	return 0;
}
int main() {
	cout << "hello world!!,还能用吗？好像可以" << endl;
	cout << "-----------------dataType()-----------" << endl;
	dataType();
	constant();
	return 0;
}