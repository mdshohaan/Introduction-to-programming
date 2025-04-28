#include <limits.h>
#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int k;
  scanf("%d", &k);
  int min = INT_MAX;
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      k = arr[i] + arr[j] + j - i;
      if (min > k) {
        min = k;
      }
    }
    printf("\n");
  }
  printf("%d\n", min);
  return 0;
}