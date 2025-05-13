#include <stdio.h>

long long recursive_sum(int arr[], int n) {
  if (n == 0)
    return 0;
  return arr[n - 1] + recursive_sum(arr, n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  long long result = recursive_sum(arr, n);
  printf("%lld\n", result);

  return 0;
}