#include <stdio.h>

int main() {
  int x;
  printf("%d\n", x);
  printf("%p\n", &x);

  int *ptr;
  ptr = &x;
  printf("%p\n", ptr);

  return 0;
}