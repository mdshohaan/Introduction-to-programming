#include <stdio.h>
#include <string.h>

int main() {
  char s[100001];
  scanf("%s", &s);

  int len = strlen(s);
  int count = 0;

  for (int i = 0; i < len; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'i') {

    } else {
      count++;
    }
  }
  // int cons = len - count;
  printf("%d", count);

  return 0;
}