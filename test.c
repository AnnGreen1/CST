#include <stdio.h>
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  printf("%p\n", a);
  int *p = a;
  printf("%p\n", p + 2);
  printf("%d", *(p + 2));
  return 0;
}