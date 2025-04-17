#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int first = n / 10;
  int last = n % 10;

  if (last == 0) { // corner case handling
    printf("YES\n");
  } else if (first % last == 0 || last % first == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}