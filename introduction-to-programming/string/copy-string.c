#include <stdio.h>
#include <string.h>

int main() {
  char s1[101], s2[101];
  scanf("%s %s", &s1, &s2);

  // manually copy
  int length = strlen(s2);
  for (int i = 0; i <= length; i++) {
    s1[i] = s2[i];
  }

  // built in function
  strcpy(s1, s2);

  printf("%s %s ", s1, s2);

  return 0;
}