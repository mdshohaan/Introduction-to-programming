#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      printf("%d,%d\n", i, j);
    }
    printf("\n");
  }

  return 0;
}