#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  if (a > b) {
    for (int i = 0; i < a; i++) {
      printf("%d", i);
    }
  }

  return 0;
}