#include <stdio.h>

int main() {
  int r, c;
  scanf("%d %d", &r, &c);
  int arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  int isDiagonal = 1;
  if (r == c) { // check square matrix

    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (i + j != r - 1) { // we are outside diagonal

          if (arr[i][j] != 0) { // check in diagonal array
            isDiagonal = 0;
            printf("Not Diagonal Matrix");
          }
        }
      }
    }
    if (isDiagonal) {
      printf(" Secondary Diagonal Matrix");
    }
  } else {
    printf("Not Diagonal Matrix");
  }

  return 0;
}