#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    long long int n, sum = 1;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
      sum *= i;
    }
    printf("%lld\n", sum);
  }

  return 0;
}