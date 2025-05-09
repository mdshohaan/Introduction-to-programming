#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  char s[101];
  scanf("%s", s);
  printf("%d %s\n", a + b + c, s);
  return 0;
}