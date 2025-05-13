#include <stdio.h>

int main() {
  long long int n;
  scanf("%lld", &n);
  if (n % 2 == 1)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}