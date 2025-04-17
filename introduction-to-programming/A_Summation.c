#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long int sum = 0;
  for (int i = 1; i <= n; i++) {
    long long int a;
    scanf("%lld", &a);
    sum += a;
  }

  if (sum < 0) {
    sum = -sum;
  }
  printf("%lld\n", sum);

  return 0;
}