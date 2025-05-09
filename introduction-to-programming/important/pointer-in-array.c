#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  *(arr + 1) = 100;
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]); // 10 100 30 40 50
  }

  return 0;
}