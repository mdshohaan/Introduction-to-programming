#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int mod = n % 10;
  // printf("%d\n", mod);
  int div = n / 10;
  // printf("%d\n", div);

  if (n % div == 0) {
    printf("YES");
  } else if (div % mod == 0) {
    printf("YES");

  } else {
    printf("NO");
  }

  return 0;
}