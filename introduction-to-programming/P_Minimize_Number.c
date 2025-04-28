#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min_operations = 30;

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    while (arr[i] % 2 == 0) {
      arr[i] /= 2;
      cnt++;
    }
    if (cnt < min_operations) {
      min_operations = cnt;
    }
  }

  printf("%d\n", min_operations);

  return 0;
}