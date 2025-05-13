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
  // two condition for primary diagonal matrix => firstly could be
  // square.secondly,could be Zero outside the diagonal.

  int is_PrimaryDiagonal = 1;

  // first condition
  if (r == c) { // square check
    // second condition
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (i != j) { // we are outside diagonal

          if (arr[i][j] != 0) {
            is_PrimaryDiagonal = 0;
          }
        }
      }
    }
    if (is_PrimaryDiagonal) {
      printf("This is  primary diagonal matrix");
    } else {
      printf("This is not primary diagonal matrix");
    }

  } else {
    printf("This is not primary diagonal matrix");
  }

  return 0;
}
/*
3 3
1 0 0
0 1 0
0 0 0
*/