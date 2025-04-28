#include <stdio.h>

int main() {
  int i, n;
  scanf("%d", &n);
  int fib1 = 0, fib2 = 1;
  int nextTerm = fib1 + fib2;

  for (i = 3; i <= n; ++i) {

    fib1 = fib2;
    fib2 = nextTerm;
    nextTerm = (n - 1) + (n - 2);
  }
  printf("%d\n", nextTerm);

  return 0;
}