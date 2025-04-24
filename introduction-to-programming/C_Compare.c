#include <stdio.h>
#include <string.h>

int main() {
  char x[21], y[21];
  scanf("%s %s", x, y);

  // manually
  int i = 0;
  while (1) {
    if (x[i] == '\0' && y[i] == '\0') {
      printf("%s\n", x);
      break;
    } else if (x[i] == '\0') {
      printf("%s", x);
      break;

    } else if (y[i] == '\0') {
      printf("%s", y);
      break;

    } else if (x[i] < y[i]) {
      printf("%s", x);
      break;

    } else if (x[i] > y[i]) {
      printf("%s", y);
      break;

    } else if (x[i] == y[i]) {
      i++;
    }
  }

  // built in function

  // int smallest = strcmp(x, y);
  // if (smallest < 0) {
  //   printf("%s\n", x);
  // } else if (smallest == 0) {
  //   printf("%s\n", x);
  // } else if (smallest > 0) {
  //   printf("%s\n", y);
  // }
  return 0;
}