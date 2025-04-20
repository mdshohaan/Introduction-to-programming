#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n + 1];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int idx, val;
  scanf("%d %d", &idx, &val);

  for (int i = n; i > idx; i--) { // here n = input nth(length),5
    arr[i] = arr[i - 1];          // here i = n,5
  }
  // i >= idx+1;  // same

  arr[idx] = val;
  for (int i = 0; i <= n; i++) {

    printf("%d ", arr[i]);
  }

  return 0;
}
