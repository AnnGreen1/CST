#include <stdio.h>
int main() {
	char a[20];
	printf("ÇëÊäÈëÒ»´®×Ö·û£º");
	scanf("%s", &a);
	int i;
	for (i = 0; i < 20; i++) {
		if (a[i] == '\0') {
			break;
		}
	}
	printf("%d", i);
	return 0;
}
	
	
