
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int i = 0, j = n - 1, isPalindrome = 1;
  while (i < j) {
    if (arr[i] != arr[j]) {
      isPalindrome = 0;
      break;
    }
    i++;
    j--;
  }
  if (isPalindrome) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}