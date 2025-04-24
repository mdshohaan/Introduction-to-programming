#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char s[51], t[51];
    scanf("%s %s", &s, &t);

    int length_s = strlen(s);
    int length_t = strlen(t);

    int i = 0, j = 0;
    while (i < length_s && j < length_t) {
      printf("%c%c", s[i], t[j]);
      i++;
      j++;
    }
    while (j < length_t) {
      printf("%c", t[j]);
      j++;
    }
    while (i < length_s) {
      printf("%c", s[i]);
      i++;
    }

    printf("\n");
  }

  return 0;
}