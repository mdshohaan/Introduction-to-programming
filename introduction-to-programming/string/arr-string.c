#include <stdio.h>

int main() {
  char s[10];
  scanf("%s", &s);
  printf("%d ", s[5]);
  // 0 or null bcz every string finished after a number
  // contain 0 or null,and after that all are garbage
  // value. here string is hello=4 idx,and 5 = 0 or null,after all garbage
  printf("%s", s);
  return 0;
}