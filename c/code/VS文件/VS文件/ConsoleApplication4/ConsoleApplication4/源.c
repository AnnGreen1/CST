////#include <stdio.h>
////#include <stdlib.h>
////
////FILE *fp;
////
////char nextChar()
////{
////	char ch = EOF;
////	if (!feof(fp))
////	{
////		ch = fgetc(fp);
////	}
////	return ch;
////}
////
////int main(void)
////{
////	char ch;
////	
////	if ((fp = fopen("example.c", "r")) == NULL) {
////		printf("Error in open a file!");
////		exit(1);
////	}
////	while ((ch = nextChar()) != EOF) {
////		//putchar(ch);
////	l:
////
////		if (ch == '+')
////		{
////			printf("(4,\"+\")\n");
////		}
////
////		else if (ch == '-')
////		{
////			printf("(4,\"-\")\n");
////		}
////
////		else if (ch == '*')
////		{
////			printf("(4,\"*\")\n");
////		}
////		else if (ch == '/')
////		{
////			printf("(4,\"/\")\n");
////		}
////		else if (ch == '{')
////		{
////			printf("(5,\"{\")\n");
////		}
////		else if (ch == '>')
////		{
////			char ch2=nextChar();
////			if (ch2== '=')
////			{
////				printf("(5,\">=\")\n");
////			}
////			else
////			{
////				printf("(5,\">\")\n");
////				ch = ch2;
////				goto l;
////			}
////		}
////		else if (ch == 'i')
////		{
////			char ch2 = nextChar();
////			if (ch2 == 'f')
////			{
////				printf("(1,\"if\")\n");
////			}
////			else
////			{
////				//char ch3= nextChar();
////				if (ch2 == 'n')
////				{
////					char ch3 = nextChar();
////					if (ch3 == 't')
////					{
////						printf("(1,\"int\")\n");
////					}
////					else
////					{
////						printf("(2,\"i\")\n");
////						ch = ch2;
////						goto l;
////					}
////
////
////					
////				}
////				else
////				{
////					printf("(2,\"in\")\n");
////					ch = ch2;
////					goto l;
////				};
////			}
////		}
////		else if (ch == '}')
////		{
////			
////				printf("(5,\"}\")\n");
////			
////			
////		}
////		
////
////		//	printf('/n');
////	}
////	fclose(fp);
////	system("pause");
////	return 0;
////}
//
//
//#include <stdio.h>
//#include<dos.h>
//#include<stdlib.h>
//#include<string.h>
//char a[50], b[50], d[200], e[10];
//char ch;
//int n1, i1 = 0, flag = 1, n = 5;
//
//int fun();
//int fun2();
//int fun3();
//int fun4();
//int fun5();
//int fun6();
//void fun7();
//void fun8();
//void fun9();
//
//int main()
//{
//	int f, p, j = 0;
//	char x;
//
//
//	d[0] = 'E';
//	d[1] = '=';
//	d[2] = '>';
//	d[3] = 'T';
//	d[4] = 'G';
//	d[5] = '#';
//	printf("请输入字符串(长度<50,以#号结束）\n");
//	do {
//		scanf("%c", &ch);
//		a[j] = ch;
//		j++;
//	} while (ch != '#');
//	n1 = j;
//	ch = b[0] = a[0];
//	printf("文法\t分析串\t\t分析字符\t剩余串\n");
//	f = fun2();
//	if (f == 0)
//	{
//		return 0;
//	}
//	if (ch == '#')
//	{
//		printf("%s为合法符号串！\n", a);
//		p = 0;
//		x = d[p];
//		while (x != '#') {
//			printf("%c", x); p = p + 1; x = d[p];
//		}
//	}
//	else {
//		printf("非法符号串！\n");
//		printf("回车返回\n");
//		getchar(); getchar();
//		return 0;
//	}
//	printf("\n");
//	printf("\n\n\n\n回车返回\n");
//	getchar();
//	getchar();
//}
//
//int fun2()    	//E->TG 
//{
//	int f, t;
//	printf("E->TG\t");
//	flag = 1;
//	fun7();
//	fun8();
//	f = fun3();
//	if (f == 0) return(0);
//	t = fun4();
//	if (t == 0) return(0);
//	else return(1);
//}
//
//int fun()
//{
//	int f, t;
//	flag = 1;
//	e[0] = 'E'; e[1] = '-'; e[2] = '>'; e[3] = 'T'; e[4] = 'G'; e[5] = '#';
//	fun9();
//	fun7();
//	fun8();
//	f = fun3();
//	if (f == 0) return(0);
//	t = fun4();
//	if (t == 0) return(0);
//	else return(1);
//}
//int fun3() //  T-> FS
//{
//	int f, t;
//	printf("T->FS\t");
//	e[0] = 'T'; e[1] = '-'; e[2] = '>'; e[3] = 'F'; e[4] = 'S'; e[5] = '#';
//	fun9();
//	flag = 1;
//	fun7();
//	fun8();
//	f = fun6();
//	if (f == 0) return(0);
//	t = fun5();
//	if (t == 0) return(0);
//	else return(1);
//}
//
//
//int  fun4()
//{
//	int t, g;
//	if (ch == '+')
//	{
//		b[i1] = ch;
//		printf("G->+TG\t");
//		e[0] = 'G'; e[1] = '-'; e[2] = '>'; e[3] = '+'; e[4] = 'T'; e[5] = 'G'; e[6] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//		ch = a[++i1];
//		t = fun3();
//		if (t == 0) return (0);
//		g = fun4();
//		if (g == 0) return (0);
//	}
//	else if (ch == '-')
//	{
//		b[i1] = ch;
//		printf("G->-TG\t");
//		e[0] = 'G'; e[1] = '-'; e[2] = '>'; e[3] = '-'; e[4] = 'T'; e[5] = 'G'; e[6] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//		ch = a[++i1];
//		t = fun3();
//		if (t == 0) return (0);
//		g = fun4();
//		if (g == 0) return (0);
//	}
//	else
//	{
//		printf("G->^\t");
//		e[0] = 'G'; e[1] = '-'; e[2] = '>'; e[3] = '^'; e[4] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//	}
//	return (1);
//}
//
//int fun5()
//{
//	int s;
//	if (ch == '*')
//	{
//		b[i1] = ch;
//		printf("S->*FS\t");
//		e[0] = 'S'; e[1] = '-'; e[2] = '>'; e[3] = '*'; e[4] = 'F'; e[5] = 'S'; e[6] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//		ch = a[++i1];
//		s = fun6();
//		if (s == 0) return (0);
//		s = fun5();
//		if (s == 0) return (0);
//	}
//	else if (ch == '/')
//	{
//		b[i1] = ch;
//		printf("S->/FS\t");
//		e[0] = 'S'; e[1] = '-'; e[2] = '>'; e[3] = '*'; e[4] = 'F'; e[5] = 'S'; e[6] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//		ch = a[++i1];
//		s = fun6();
//		if (s == 0) return (0);
//		s = fun5();
//		if (s == 0) return (0);
//	}
//	else
//	{
//		printf("S->^\t");
//		e[0] = 'S'; e[1] = '-'; e[2] = '>'; e[3] = '^'; e[4] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//	}
//	return 1;
//}
//int fun6()
//{
//	int f;
//	if (ch == '(') {
//		b[i1] = ch;
//		printf("F->(E)\t");
//		e[0] = 'F'; e[1] = '-'; e[2] = '>'; e[3] = '('; e[4] = 'E'; e[5] = ')'; e[6] = '#';
//		fun9();
//		flag = 0;
//		fun7();
//		fun8();
//		ch = a[++i1];
//		f = fun();
//		if (f == 0) return(0);
//		if (ch == ')') {
//			b[i1] = ch;
//			printf("F->(E)\t");
//			flag = 0; fun7(); fun8();
//			ch = a[++i1];
//		}
//		else {
//			printf("error in f\n");
//			printf("非法的符号串");
//			return(0);
//		}
//	}
//	else if (ch == 'i') {
//		b[i1] = ch; printf("F->i\t");
//		e[0] = 'F'; e[1] = '='; e[2] = '>'; e[3] = 'i'; e[4] = '#';
//		fun9();
//		flag = 0; fun7(); fun8();
//		ch = a[++i1];
//	}
//	else {
//		printf("error in f\n");
//		printf("非法的符号串"); return(0);
//	}
//	return(1);
//}
//
//void fun7()
//{
//
//	int j = 0;
//	for (; j <= i1 - flag; j++)
//		printf("%c", b[j]);
//	printf("\t\t");
//	printf("%c\t\t", ch);
//}
//
//
//void fun8()
//{
//	int j;
//	for (j = i1 + 1 - flag; j < n1; j++)
//		printf("%c", a[j]);
//	printf("\n");
//}
//
//void fun9() {
//	int m, k, j, q;
//	int i = 0;
//	m = 0; k = 0; q = 0;
//	i = n;
//	d[n] = '=';
//	d[n + 1] = '>';
//	d[n + 2] = '#';
//	n = n + 2;
//	i = n;
//	i = i - 2;
//	while (d[i] != '>'&&i != 0) i = i - 1;
//	i = i + 1;
//	while (d[i] != e[0]) i = i + 1;
//	q = i;
//	m = q; k = q;
//	while (d[m] != '>')  m = m - 1;
//	m = m + 1;
//	while (m != q) {
//		d[n] = d[m]; m = m + 1; n = n + 1;
//	}
//	d[n] = '#';
//	for (j = 3; e[j] != '#'; j++) {
//		d[n] = e[j];
//		n = n + 1;
//	}
//	k = k + 1;
//	while (d[k] != '=') {
//		d[n] = d[k]; n = n + 1; k = k + 1;
//	}
//	d[n] = '#';
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// S -> abc
//// S -> xyz
//struct item {
//	char left; // S
//	char *right; // abc
//};
//
//struct item table[128][128];
//
//// stack
//char stack[64];
//int top = 0;
//
//void push(char c) {
//	stack[top++] = c;
//}
//void pop() {
//	top--;
//}
//char get_top() {
//	return stack[top - 1];
//}
//
//void init_table() {
//	// S -> abc
//	table['S']['a'].left = 'S';
//	table['S']['a'].right = "abc";
//	// S -> xyz
//	table['S']['x'].left = 'S';
//	table['S']['x'].right = "xyz";
//}
//
//void print_table() {
//	for (int i = 0; i<128; i++)
//		for (int j = 0; j<128; j++)
//			if (table[i][j].left)
//				printf("%c -> %s\n", table[i][j].left, table[i][j].right);
//}
//
//void parse(char *str) {
//	push('S');
//
//	while (*str) {
//		char c = *str;
//		char top_char = get_top();
//		if (top_char >= 'a' && top_char <= 'z') {
//			if (top_char == c) {
//				pop();
//				str++;
//				continue;
//			}
//			else {
//				printf("Error: want %c, but got %c\n", top_char, c);
//				exit(0);
//			}
//		}
//		else {
//			char *right = table[top_char][c].right;
//			if (right == 0) {
//				printf("Error: empty table: for %c, %c\n", top_char, c);
//				exit(0);
//			}
//			else {
//				pop();
//				for (int i = strlen(right) - 1; i >= 0; i--)
//					push(right[i]);
//			}
//		}
//	}
//}
//
//int main() {
//	init_table();
//	print_table();
//	parse("abc");
//	printf("success!\n");
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////S->abc
////S->xyz
//struct item {
//	char left;
//	char *right;
//};//结构体 
//
//struct item table[128][128];
//
////stack堆栈 
//char stack[64];
//int top = 0;
//
//void push(char c) {
//	stack[top++] = c;
//}
//void pop() {
//	top--;
//}
//char get_top() {
//	return stack[top - 1];
//}
//
//void init_table() {
//	//E->TG
//	table['E']['('].left = 'E';
//	table['E']['('].right = "TG";
//	//E->TG
//	table['E']['i'].left = 'E';
//	table['E']['i'].right = "TG";
//	//G->+TG
//	table['G']['+'].left = 'G';
//	table['G']['+'].right = "+TG";
//	//G->-TG
//	table['G']['-'].left = 'G';
//	table['G']['-'].right = "-TG";
//	//G->e
//	table['G'][')'].left = 'G';
//	table['G'][')'].right = "";
//	//T->FS
//	table['T']['('].left = 'T';
//	table['T']['('].right = "FS";
//	//T->FS
//	table['T']['i'].left = 'T';
//	table['T']['i'].right = "FS";
//	//S->e
//	table['S']['+'].left = 'S';
//	table['S']['+'].right = "";
//	//S->e
//	table['S']['-'].left = 'S';
//	table['S']['-'].right = "";
//	//S->*FS
//	table['S']['*'].left = 'S';
//	table['S']['*'].right = "*FS";
//	//S->/FS
//	table['S']['/'].left = 'S';
//	table['S']['/'].right = "/FS";
//	//S->e
//	table['S'][')'].left = 'S';
//	table['S'][')'].right = "";
//	//F->(E)
//	table['F']['('].left = 'F';
//	table['F']['('].right = "(E)";
//	//F->i
//	table['F']['i'].left = 'F';
//	table['F']['i'].right = "i";
//}
//
//void print_table() {
//	for (int i = 0; i<128; i++) {
//		for (int j = 0; j<128; j++) {
//			if (table[i][j].left) {
//				printf("%c -> %s\n", table[i][j].left, table[i][j].right);
//			}
//		}
//	}
//}
//
//void parse(char *str) {
//	push('E');
//	while (*str) {
//		char c = *str;
//		char top_char = get_top();
//		if ((top_char >= 'a'&&top_char <= 'z')
//			|| top_char == '+'
//			|| top_char == '-'
//			|| top_char == '*'
//			|| top_char == '/'
//			|| top_char == '('
//			|| top_char == ')'
//			) {
//			if (top_char == c) {
//				pop();
//				str++;
//				continue;
//			}
//			else {
//				printf("error:want %c,but got %c\n", top_char, c);
//				exit(0);
//			}
//		}
//		else {
//			char *right = table[top_char][c].right;
//			if (right == 0) {
//				printf("Error: empty table: for %c, %c\n", top_char, c);
//				exit(0);
//			}
//			else {
//				pop();
//				for (int i = strlen(right) - 1; i >= 0; i--) {
//					push(right[i]);
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	init_table();
//	print_table();
//	parse("i+i*i");
//	printf("succece");
//	return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, i, &arr[i][j]);
//		}
//	}
//	return 0;
//}
////————————————————
////版权声明：本文为CSDN博主「天天劈柴」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
////原文链接：https ://blog.csdn.net/zym1348010959/article/details/79425604



#include<stdio.h>


int main()
{
	printf("hello");

	return 0;
}