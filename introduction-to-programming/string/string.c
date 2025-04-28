#include <stdio.h>

int main() {
  char a[4];
  for (int i = 0; i < 4; i++) {
    scanf("%c", &a[i]);
    // printf("%c", a[i]);
  }
  for (int i = 0; i < 4; i++) {
    // printf("%c\n", a[i]);
  }
  char s[] = 'abcs';
  char s1 = {'a', 'b'};

  return 0;
}