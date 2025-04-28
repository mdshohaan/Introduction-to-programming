#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++) {
    char s[101];

    scanf("%s", s);
    if (strlen(s) > 10) {
      int count = strlen(s) - 2;
      char first = s[0];
      char last = s[strlen(s) - 1];

      printf("%c%d%c\n", first, count, last);
    } else {

      printf("%s\n", s);
    }
  }

  return 0;
}