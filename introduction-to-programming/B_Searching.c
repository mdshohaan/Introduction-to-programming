#include <stdio.h>

int main() {
  int n, a, x;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    // printf("%d ", arr[i]);
  }
  scanf("%d", &x);
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      printf("%d", i);
    }
  }

  return 0;
}