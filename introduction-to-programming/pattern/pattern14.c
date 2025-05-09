#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      if (col == 1 || row == n || col == row) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
/*
*
**
* *
*  *
*****

*/