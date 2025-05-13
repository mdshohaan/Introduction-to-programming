#include <stdio.h>
void reverse(int n, int arr[], int i) {
  if (i == n) {
    return;
  }

  reverse(n, arr, i + 1);
  if (i % 2 == 0) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  reverse(n, arr, 0);

  return 0;
}