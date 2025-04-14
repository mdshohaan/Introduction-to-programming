#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);
    // if (n == 0) {
    //   printf("0");
    // }
    do {
      printf("%d ", n % 10); //  catch last digit
      n /= 10;               // omit the last digit
    } while (n != 0);
    printf("\n");
  }

  return 0;
}