#include <stdio.h>

void fun(int a[], int n) {

  // a[1] = 200;
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }

  //  printf("%p\n", a); // 0x16fc02b40
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  fun(a, n);
  // printf("%p\n", a); // 0x16fc02b40

  return 0;
}
// Array value pass by referrence thats why Address same