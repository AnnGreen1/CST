#include <stdio.h>
void triangle();
int main() {
	float a, b, c;
	int d;
	printf("请输入三个数：");
	scanf("%f%f%f", &a, &b, &c);
	d = triangle(a, b, c);
	if (d = 1) {
		printf("是三角形");
	}
	else {
		printf("不是三角形");
	}
}
float triangle(float a, float b, float c) {
	int n;
	if ((（a + b）>c）&&（（a + c）>b）&&（（c + b）>a） && (（a - b)<c）&&（(a - c)<b） && (（c - b)<a)）
	{
		n = 1;
	}
	else {
		n = 0;
	}
	return n;

}