#include<iostream>
#include<string.h>
using namespace std;
/*
��������
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
����
*/
#define changliang 1
int constant() {
	const char c = 'g';
	cout << "define����ó���" << changliang << ",const����ó���" << c << endl;
	return 0;
}
int main() {
	cout << "hello world!!,�������𣿺������" << endl;
	cout << "-----------------dataType()-----------" << endl;
	dataType();
	constant();
	return 0;
}