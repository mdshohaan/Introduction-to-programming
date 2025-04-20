#include <stdio.h>

int main() {
  int n, row, col;
  scanf("%d", &n);
  for (row = n; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      // printf("%d ", col);
      // printf("%d ", row);
      // printf("%d ", row % 2);
      // printf("%d ", col % 2);
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
/* col
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

/* row
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/

/*
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1
*/

/*
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1

*/

/*
* * * * *
* * * *
* * *
* *
*

*/