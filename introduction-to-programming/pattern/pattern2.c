#include <stdio.h>

int main() {
  int n, row, col;
  scanf("%d", &n);
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", row);
    }
    printf("\n");
  }

  return 0;
}
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/