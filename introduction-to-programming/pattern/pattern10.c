#include <stdio.h>

int main() {
  int row, col, n;
  scanf("%d", &n);
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n - row; col++)
      printf(" ");
    for (col = 1; col <= row; col++)
      printf("%d", col);
    printf("\n");
  }

  return 0;
}
/*
    1
   12
  123
 1234
12345

*/