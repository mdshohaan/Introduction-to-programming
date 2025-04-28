#include <stdio.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n);

  int arr[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // Reverse each row
  for (int i = 0; i < m; i++) {
    int j = 0, k = n - 1;
    while (j < k) {
      int temp = arr[i][j];
      arr[i][j] = arr[i][k];
      arr[i][k] = temp;

      j++;
      k--;
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
/*
        1.	for (int i = 0; i < m; i++)
        •	Outer loop.
        •	It moves row by row.
        •	i represents the row number (0, 1, 2, …).
        2.	for (int j = 0, k = n - 1; j < k; j++, k--)
        •	Inner loop.
        •	j starts from leftmost column (0).
        •	k starts from rightmost column (n-1).
        •	You are moving j → right and k → left at the same time (j++ and
   k--). •	Continue until j >= k (when they meet or cross).
*/