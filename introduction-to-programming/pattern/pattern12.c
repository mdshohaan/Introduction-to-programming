#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  for (int row = 1; row <= n; row++) {
    // for (int row = n ; row >= 1; row--) {
    for (int col = 1; col <= n - row; col++)
      printf(" ");

    for (int col = 1; col <= row; col++)
      printf("%d ", col);
    printf("\n");
  }

  return 0;
}
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
/*
 1 2 3 4
  1 2 3
   1 2
    1

*/