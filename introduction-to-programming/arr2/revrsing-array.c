#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // int i = 0;
  // int j = n - 1;

  // while (i < j) {
  //   int temp = arr[i];
  //   arr[i] = arr[j];
  //   arr[j] = temp;
  //   i++;
  //   j--;
  // }

  // another option
  int rev[n];
  int j = 0;

  for (int i = n - 1; i >= 0; i--) {
    rev[j] = arr[i];
    j++;
  }

  for (int i = 0; i < n; i++) {
    // printf("%d ", arr[i]);
    printf("%d ", rev[i]);
  }

  return 0;
}