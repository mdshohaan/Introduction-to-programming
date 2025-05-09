#include <stdio.h>

void space_printer(int n) {
  for (int i = 1; i <= n; i++) {
    printf(" ");
  }
}
void start_printer(int n) {
  for (int i = 1; i <= n; i++) {
    printf("*");
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int star = 1;
  int space = n - 1;
  for (int i = 1; i <= n; i++) {
    space_printer(space);
    start_printer(star);
    space--;
    star += 2;
    printf("\n");
  }
  //
  star = n * 2 - 1;
  space = 0;
  for (int i = 1; i <= n; i++) {
    space_printer(space);
    start_printer(star);
    space++;
    star -= 2;
    printf("\n");
  }

  return 0;
}
