#include <stdio.h>

int main() {
  int n;
  scanf("%d ", &n);
  int arr[n];

  int sum = 0;
  int sum2 = 0;

  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[n]);
    // printf("%d ", arr[n]);
    if (arr[n] > 0) {
      sum = sum + arr[n];
    } else if (arr[n] < 0) {
      sum2 = sum2 + arr[n];
    }
  }
  printf("%d ", sum);

  printf("%d ", sum2);

  return 0;
}