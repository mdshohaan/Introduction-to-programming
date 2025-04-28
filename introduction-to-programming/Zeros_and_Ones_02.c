#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }
  int x;
  scanf("%d", &x);

  for (int i = 0; i < n; ++i) {
    if (arr[x] == 0) {
      arr[x] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}