#include <stdio.h>
void print_str(int n) {

  if (n == 0) {
    return;
  }

  printf("%d", n);
  if (n > 1) {
    printf(" ");
  }
  print_str(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);

  print_str(n);
  return 0;
}