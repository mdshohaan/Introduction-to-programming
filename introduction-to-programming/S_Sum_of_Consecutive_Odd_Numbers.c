
#include <stdio.h>

int main() {
  int t, sum = 0;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int x, y, temp;

    scanf("%d%d", &x, &y);

    if (x > y) {
      temp = x;
      x = y;
      y = temp;
    }

    for (int i = x; i < y; i++) {
      if (i % 2 != 0)
        sum += i;
      printf("%d\n", i);
    }
  }

  return 0;
}