#include <stdio.h>

int main() {
  int arr[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
  // int arr[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*
arr[0][0]: 0    arr[0][1]: 1    arr[0][2]: 2    arr[0][3]: 3
arr[1][0]: 4    arr[1][1]: 5    arr[1][2]: 6    arr[1][3]: 7
arr[2][0]: 8    arr[2][1]: 9    arr[2][2]: 10    arr[2][3]: 11
*/