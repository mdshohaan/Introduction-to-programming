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

  int total = r * c;
  int zero = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (arr[i][j] == 0) {
        zero++;
      }
    }
  }
  if (total == zero) {
    printf("This is Zero Matrix");
  } else {
    printf("This is not Zero Matrix");
  }

  return 0;
}
/*
3 3
0 0 0
0 1 0
0 0 0
*/