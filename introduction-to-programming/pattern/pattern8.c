#include <stdio.h>

int main() {
  int n, row, col;
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      // printf("%d ", col);
      printf("%d ", row);
    }
    printf("\n");
  }

  for (row = n - 1; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      //  printf("%d ", col);
      printf("%d ", row);
    }
    printf("\n");
  }

  return 0;
}
/*
1
1 2
1 2 3
1 2
1
*/

/*
1
2 2
3 3 3
2 2
1

*/