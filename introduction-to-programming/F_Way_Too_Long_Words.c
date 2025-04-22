#include <stdio.h>

int main() {
  int t, s;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    char s[100];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
      printf("%s", s[i]);
    }
  }

  return 0;
}