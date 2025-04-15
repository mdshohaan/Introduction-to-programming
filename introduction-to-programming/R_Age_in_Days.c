#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  if (x > 365) {
    printf("%d years", x - 365);
  }
  return 0;
}