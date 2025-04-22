#include <limits.h>
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int tc = 1; tc <= t; tc++) {

    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
      scanf("%d", &arr[i]);
    }
    int min = INT_MAX;

    for (int i = 1; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        int val = arr[i] + arr[j] + j - i;
        if (min > val) {
          min = val;
        }
      }
    }
    printf("%d\n", min);
  }

  return 0;
}