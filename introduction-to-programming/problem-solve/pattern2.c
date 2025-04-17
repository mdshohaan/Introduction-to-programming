#include <stdio.h>

int main() {
  int n = 5;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) { // row control
      printf("%c ", 64 + i);
    }
    printf("\n");
  }

  return 0;
}