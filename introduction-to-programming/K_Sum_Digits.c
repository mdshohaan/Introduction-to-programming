#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  char arr[n + 1];
  scanf("%s", arr);

  int sum = 0;

  for (int i = 0; arr[i] != '\0'; i++) {
    int digit = arr[i] - '0'; // to convert a character digit (like '2') into
                              // its integer value (like 2).
    sum = sum + digit;
  }
  printf("%d\n", sum);

  return 0;
}
