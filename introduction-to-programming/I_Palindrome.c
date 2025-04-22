#include <stdio.h>
#include <string.h>

int main() {
  char s[1001];
  scanf("%s", s);
  int isPalindrome = 1;

  int i = 0, j = strlen(s) - 1;
  int isP = 1;
  while (i < j) {
    if (s[i] != s[j]) {
      isP = 0;
      break;
    }
    i++;
    j--;
  }
  if (isP) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}