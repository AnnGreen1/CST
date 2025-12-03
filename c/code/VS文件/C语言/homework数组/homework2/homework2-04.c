#include <stdio.h>
int main() {
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
	char a[20];
	scanf("%s", &a);
	char b[20];
	for (int i = 0; i < 20; i++) {
		b[i] = a[i];
	}
	int len = strlen(b);
	for (int j = 0; j < len; j++) {
		b[j] = b[len - 1 - j];
	}
	printf("%s", b);
}