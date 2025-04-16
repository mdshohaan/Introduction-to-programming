#include <stdio.h>

int main() {
  int n, x;
  scanf("%d ", &n);
  int min_number = 100000 + 1;
  for (int i = 1; i <= n; i++) {
    scanf("%d", &x);
    if (x < 0) {
      x = x * -1;
    }
    if (x < min_number) {
      min_number = x;
    }
  }
  printf("%d\n", min_number);

  return 0;
}