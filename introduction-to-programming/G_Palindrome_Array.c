#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }
  int found = 0;
  for (int i = 1; i <= n; i++) {
    if (arr[i] == arr[n - 1]) {
      found = 1;
      break;
    }
  }
  if (found) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}