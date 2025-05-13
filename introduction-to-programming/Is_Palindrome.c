#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
  int isP = 1;
  int i = 0, j = strlen(s) - 1;
  while (i < j) {
    if (s[i] != s[j]) {
      isP = 0;
      break;
    }
    i++;
    j--;
  }

  return isP;
}

int main() {
  char s[1000];
  scanf("%s", s);
  is_palindrome(s);
  if (is_palindrome(s)) {
    printf("Palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }
  return 0;
}