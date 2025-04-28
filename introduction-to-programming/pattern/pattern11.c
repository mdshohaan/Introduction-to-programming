#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int row = 1; row <= n; row++) {

    for (int col = 1; col <= n - row; col++)
      printf("  ");

    for (int col = 1; col <= 2 * row - 1; col++)
      printf("%d ", col);

    printf("\n");
  }

  return 0;
}

/*
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/