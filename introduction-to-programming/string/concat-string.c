#include <stdio.h>
#include <string.h>

int main() {
  char s1[101], s2[101];
  scanf("%s %s", &s1, &s2);

  // manually concat
  int length_s1 = strlen(s1);
  int length_s2 = strlen(s2);

  for (int i = 0; i <= length_s2; i++) {
    s1[i + length_s1] = s2[i];
  }

  // built in function
  strcat(s1, s2);

  printf("%s", s1);

  return 0;
}