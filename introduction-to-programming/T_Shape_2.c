#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int space = n - 1;
  int star = 1;

  for (int row = 1; row <= n; row++) {
    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int j = 1; j <= star; j++) {
      printf("*");
    }
    printf("\n");
    star += 2;
    space--;
  }

  return 0;
}