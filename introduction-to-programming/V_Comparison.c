#include <stdio.h>

int main() {
  int a, b;
  char s;

  scanf("%d %c %d", &a, &s, &b);

  if (s == '<' && a < b)
    printf("Right\n");
  else if (s == '>' && a > b)
    printf("Right\n");
  else if (s == '=' && a == b)
    printf("Right\n");
  else
    printf("Wrong\n");

  return 0;
}