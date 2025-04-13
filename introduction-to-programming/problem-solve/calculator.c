#include <stdio.h>

int main() {
  int A, B;
  char operator;
  scanf("%d %c %d", &A, &operator, & B);

  if (operator== '+') {
    printf("%d", A + B);
  } else if (operator== '-') {
    printf("%d", A - B);

  } else if (operator== '*') {
    printf("%d", A * B);

  }

  else {
    printf("%d", A / B);
  }

  return 0;
}

// Another
#include <stdio.h>

int main() {
  int A, B;
  char operator;
  scanf("%d %c %d", &A, &operator, & B);

  switch (operator) {
  case '+':
    printf("%d", A + B);
    break;

  case '-':
    printf("%d", A - B);
    break;

  case '*':
    printf("%d", A * B);
    break;

  case '/':
    printf("%d", A / B);
    break;
  }

  return 0;
}
