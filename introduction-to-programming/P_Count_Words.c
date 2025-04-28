#include <stdio.h>
#include <string.h>

int main() {
  char s[10001];
  fgets(s, 10001, stdin);
  int len = strlen(s);
  int freq[26] = {0};

  for (int i = 0; s[i] != '\n'; i++) {
    if (s[i] >= 'a' || s[i] <= 'z') {
      freq[s[i]]++;
    }
    if (s[i] >= 'A' || s[i] <= 'Z') {
      freq[s[i]]++;
    }
  }
  for (int i = 0; i < len; i++) {
    printf("%d\n", freq[i]);
  }

  return 0;
}