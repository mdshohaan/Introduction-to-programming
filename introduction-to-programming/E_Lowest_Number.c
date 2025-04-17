#include <limits.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int min = INT_MAX;
  int arr[n];
  int pos;
  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);

    if (arr[i] < min) {
      min = arr[i];
      pos = i;
    }
  }
  printf("%d %d", min, pos);

  return 0;
}