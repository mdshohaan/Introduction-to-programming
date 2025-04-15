#include <stdio.h>

int main() {
  int a, b, c;
  char op, eq;

  scanf("%d %c %d %c %d", &a, &op, &b, &eq, &c);

  int result;
  if (op == '+') {
    result = a + b;
  } else if (op == '-') {
    result = a - b;
  } else if (op == '*') {
    result = a * b;
  }

  if (result == c) {
    printf("Yes");
  } else {
    printf("%d", result);
  }

  return 0;
}