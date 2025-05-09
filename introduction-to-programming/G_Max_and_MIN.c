#include <limits.h>
#include <stdio.h>

int min(int n, int arr[]) {

  int min = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}
int max(int n, int arr[]) {

  int max = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int min_val = min(n, arr);
  int max_val = max(n, arr);
  printf("%d %d\n", min_val, max_val);

  return 0;
}