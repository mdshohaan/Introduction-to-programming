#include <stdio.h>
#include <string.h>

int main() {
  char s1[20], s2[20];
  scanf("%s %s", s1, s2);

  int length_b = strlen(s2);

  for (int i = 0; i <= length_b; i++) {
    s1[i] = s2[i];
  }
  printf("%s %s", s1, s2);
  return 0;
}