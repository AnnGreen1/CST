#include<iostream>

using namespace std;

/*
1ï¿½ï¿½ï¿½Ì³ï¿½
*/
int tutorial() {
	cout << "/* 1ï¿½ï¿½ï¿½Ì³ï¿½ */" <<endl;
		cout << "Hello World!" << endl;
		cout << "Ê¹ï¿½ï¿½/nï¿½ï¿½ï¿½ï¿½ï¿½endl" << "\n";
	return 0;
}


/*
2ï¿½ï¿½ï¿½ï¿½ï¿?
*/
int introduction() {
	cout << "/* ï¿½ï¿½ï¿? */" << endl;
	return 0;
}

/*
3ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
*/
int environment() {
	cout << "/* 3ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ */" << endl;
	cout << "Ö±ï¿½ï¿½Ê¹ï¿½Ã¼ï¿½ï¿½É¿ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½vs2015" << endl;
	return 0;
}

/*
4ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï·¨
*/
int BasicGrammer() {
	cout << "/* 3ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï·¨ */" << endl;
	cout << "Ê²Ã´ï¿½Ç¶ï¿½ï¿½ï¿½ï¿½à¡¢ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½" << endl;
	/*
	C++ï¿½ï¿½ï¿½ï¿½á¹?
	#include <iostream>	//Í·ï¿½Ä¼ï¿½
	using namespace std;	//ï¿½ï¿½ï¿½ï¿½ï¿½Õ¼ï¿½
	// main()ï¿½Ç³ï¿½ï¿½ï¿½Ê¼Ö´ï¿½ÐµÄµØ·ï¿½
	int main(){
		cout << "Hello World";	//ï¿½ï¿½ï¿? Hello World
		return 0;
	}

	ï¿½Ô·ÖºÅ½ï¿½ï¿½ï¿½
	ï¿½ï¿½Ê¶ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ä¸ï¿½ï¿½ï¿½ï¿½ï¿½Â»ï¿½ï¿½ß£ï¿½ï¿½ï¿½ï¿½Ö²ï¿½ï¿½ï¿½Í·ï¿½ï¿½ï¿½ï¿½ï¿½Ö´ï¿½Ð¡Ð´
	*/

	return 0;
}

/*
5ï¿½ï¿½×¢ï¿½ï¿½
*/

/*
6ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
*/
typedef int zhengxing;
int datatype() {
	cout << "6ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½" << endl;
	// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	char c = 'c';
	int i = 9;
	float f = 9.99f;
	double d = 9.99999999999;

	zhengxing z = 234;

	//Ã¶ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	enum color { red, green, blue } yanse;
	yanse = blue;
	cout <<"yanse:"<< yanse << endl;//2
	return 0;
}

/*
7ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
*/
int vartype() {
	return 0;
}

/*
8ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
*/
int quanju = 1;
int varActionScope() {
	/*
	1ï¿½ï¿½ï¿½Ö²ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	2ï¿½ï¿½È«ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	3ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	4ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½
	*/
	int jubu = 2;
	cout << "È«ï¿½ï¿½" << quanju << "  ï¿½Ö²ï¿½" << jubu << endl;
	quanju = 3;
	cout << "È«ï¿½ï¿½" << quanju << endl;

	int a = 2;
	{
		int a = 3;
		cout<<"ï¿½ï¿½ï¿½ï¿½ï¿?"<<a<<endl;
	}
	cout<<"å¤–éƒ¨å˜é‡"<<a<<endl;
	return 0;
}

/*
9¡¢³£Á¿
*/
//#include <string>
int constant() {
	const string s = "string";
#define def 10
	return 0;
}

/*
10¡¢ÐÞÊÎ·ûÀàÐÍ
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
11¡¢´æ´¢Àà
*/

/*
12¡¢ÔËËã·û
*/
int operation() {
	/*
	1¡¢ËãÊõÔËËã·û£º+¡¢-¡¢*¡¢/¡¢%¡¢++¡¢--
	2¡¢¹ØÏµÔËËã·û£º==¡¢!=¡¢>¡¢<¡¢>=¡¢<=
	3¡¢Âß¼­ÔËËã·û£º&&¡¢||¡¢!
	4¡¢Î»ÔËËã·û£º&¡¢|¡¢^¡¢<<¡¢>>
	5¡¢¸³ÖµÔËËã·û£º=¡¢+=¡¢-=¡¢*=¡¢/=¡¢%=¡¢<<=¡¢>>=¡¢&=¡¢^=¡¢!=
	6¡¢ÔÓÏîÔËËã·û£ºsizeof¡¢ÈýÔ¶±í´ïÊ½¡¢³ÉÔ±ÔËËã·û£¨.   ->£©¡¢&¡¢*
	7¡¢
	*/
	return 0;
}

/*
13¡¢Ñ­»·
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
ï¿½ï¿½ï¿½ï¿½Ì³ï¿½C++
*/
int main() {
	cout << "ï¿½ï¿½ï¿½ï¿½Ì³ï¿½C++" << endl;
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