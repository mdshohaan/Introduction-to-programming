#include <stdio.h>
#include <string.h>

int main() {
  char a[21], b[11];
  scanf("%s", a);
  scanf("%s", b);

  int len_a = strlen(a);
  int len_b = strlen(b);

  // 1. Print lengths
  printf("%d %d\n", len_a, len_b);

  // 2. Print concatenation
  printf("%s%s\n", a, b);

  // 3. Swap first characters
  char temp = a[0];
  a[0] = b[0];
  b[0] = temp;

  printf("%s %s\n", a, b);

  return 0;
}