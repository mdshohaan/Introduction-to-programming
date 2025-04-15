#include <stdio.h>

int main() {

  int a[5] = {20, 30};
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]); // 20 30 0 0 0
  }

  return 0;
}