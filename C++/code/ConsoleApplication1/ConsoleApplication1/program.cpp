#include<iostream>

using namespace std;

/*
1���̳�
*/
int tutorial() {
	cout << "/* 1���̳� */" <<endl;
		cout << "Hello World!" << endl;
		cout << "ʹ��/n�����endl" << "\n";
	return 0;
}


/*
2�����?
*/
int introduction() {
	cout << "/* ���? */" << endl;
	return 0;
}

/*
3����������
*/
int environment() {
	cout << "/* 3���������� */" << endl;
	cout << "ֱ��ʹ�ü��ɿ�������vs2015" << endl;
	return 0;
}

/*
4�������﷨
*/
int BasicGrammer() {
	cout << "/* 3�������﷨ */" << endl;
	cout << "ʲô�Ƕ����ࡢ��������ʱ������" << endl;
	/*
	C++�����?
	#include <iostream>	//ͷ�ļ�
	using namespace std;	//�����ռ�
	// main()�ǳ���ʼִ�еĵط�
	int main(){
		cout << "Hello World";	//���? Hello World
		return 0;
	}

	�ԷֺŽ���
	��ʶ������ĸ�����»��ߣ����ֲ���ͷ�����ִ�Сд
	*/

	return 0;
}

/*
5��ע��
*/

/*
6����������
*/
typedef int zhengxing;
int datatype() {
	cout << "6����������" << endl;
	// ������������
	char c = 'c';
	int i = 9;
	float f = 9.99f;
	double d = 9.99999999999;

	zhengxing z = 234;

	//ö������
	enum color { red, green, blue } yanse;
	yanse = blue;
	cout <<"yanse:"<< yanse << endl;//2
	return 0;
}

/*
7����������
*/
int vartype() {
	return 0;
}

/*
8������������
*/
int quanju = 1;
int varActionScope() {
	/*
	1���ֲ�������
	2��ȫ��������
	3����������
	4����������
	*/
	int jubu = 2;
	cout << "ȫ��" << quanju << "  �ֲ�" << jubu << endl;
	quanju = 3;
	cout << "ȫ��" << quanju << endl;

	int a = 2;
	{
		int a = 3;
		cout<<"�����?"<<a<<endl;
	}
	cout<<"外部变量"<<a<<endl;
	return 0;
}

/*
9������
*/
//#include <string>
int constant() {
	const string s = "string";
#define def 10
	return 0;
}

/*
10�����η�����
*/
int ModifierType() {
	/*
	signed
	unsigned
	short
	...
	*/
	return 0;
}

/*
11���洢��
*/

/*
12�������
*/
int operation() {
	/*
	1�������������+��-��*��/��%��++��--
	2����ϵ�������==��!=��>��<��>=��<=
	3���߼��������&&��||��!
	4��λ�������&��|��^��<<��>>
	5����ֵ�������=��+=��-=��*=��/=��%=��<<=��>>=��&=��^=��!=
	6�������������sizeof����Զ���ʽ����Ա�������.   ->����&��*
	7��
	*/
	return 0;
}

/*
13��ѭ��
*/
int circulate() {
	/*
	while
	for
	do...while

	break
	continue
	goto
	*/
	return 0;
}

int judge() {
	/*
	if
	if...else
	switch

	*/
	return 0;
}
/*
����̳�C++
*/
int main() {
	cout << "����̳�C++" << endl;
	tutorial();
	introduction();
	BasicGrammer();
	datatype();
	vartype();
	varActionScope();
	constant();
	ModifierType();
	return 0;
}