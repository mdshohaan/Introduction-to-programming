#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int x, v;
  scanf("%d %d", &x, &v);

  if (x >= 0 && x < n) {
    arr[x] = v;
  }

  // for (int i = 0; i < n; i++) {
  //   printf("%d ", arr[i]);
  // }

  for (int i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }

  return 0;
}