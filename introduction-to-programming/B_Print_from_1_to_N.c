#include <stdio.h>
void print_str(int n, int i) {
  if (i == n + 1) {
    return;
  }
  printf("%d\n", i);
  print_str(n, i + 1);
}

int main() {
  int n;
  scanf("%d", &n);

  print_str(n, 1);
  return 0;
}