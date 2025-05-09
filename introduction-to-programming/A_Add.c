#include <stdio.h>
int sum(int x, int y) { printf("%d\n", x + y); }
int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  sum(x, y);
  return 0;
}