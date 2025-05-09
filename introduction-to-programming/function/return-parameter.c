#include <stdio.h>
int sum(int num1, int num2) { return num1 + num2; }

int main() {
  int res = sum(5, 6);
  printf("%d", res);
  return 0;
}