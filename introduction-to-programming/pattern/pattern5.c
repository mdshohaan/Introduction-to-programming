#include <stdio.h>

int main() {
  int n, row, col;
  scanf("%d", &n);
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%c ", col + 64);
    }
    printf("\n");
  }

  return 0;
}

/*

A
A B
A B C
A B C D
A B C D E

*/
#include <stdio.h>

int main() {
  int n, row, col;
  scanf("%d", &n);
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%c ", row + 64);
    }
    printf("\n");
  }

  return 0;
}
/*
A
B B
C C C
D D D D
E E E E E
*/