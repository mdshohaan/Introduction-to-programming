#include <stdio.h>
#include <string.h>

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  char s[n];
  scanf("%s", s);
  char subs = 0;

  for (int i = 0; i < strlen(s); i++) {
    subs = s[i] + s[i + 1];
  }
  printf("%c", subs);
  return 0;
}