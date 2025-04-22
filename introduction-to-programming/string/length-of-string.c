#include <stdio.h>
#include <string.h>

int main() {
  char s[101];
  scanf("%s", s);

  // manualy
  int count = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    count++;
  }
  // printf("%d", count);

  // built in function to shortcut
  printf("%d", strlen(s));

  return 0;
}