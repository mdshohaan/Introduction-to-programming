#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];

  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }

  return 0;
}