#include <stdio.h>
int fun2(a[]) {

	//int main() {
	char a[5];
	for (int j = 0; j < 5; j++) {
		scanf("%c", &a[j]);
		getchar();
	}
	for (int i = 0; i < 5; i++) {
		if (a[i] < 97) {
			a[i] = a[i] + 32;
		}
		printf("%c", a[i]);
	}
	return 0;
	//}
}
int main()
{
	fun2(a);
	return 0;
}