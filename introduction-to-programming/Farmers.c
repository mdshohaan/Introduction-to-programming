#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);

    if (m2 == 0) {
      printf("0\n");
    } else {
      int total = m1 * d;
      int extra = total / (m1 + m2);
      int reduced = d - extra;
      printf("%d\n", reduced);
    }
  }

  return 0;
}