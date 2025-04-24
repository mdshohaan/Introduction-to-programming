#include <stdio.h>
#include <string.h>

int main() {
  char a[101], b[101]; // apple apply
  scanf("%s %s", a, b);

  int i = 0;
  // iterate every character
  // manually
  while (1) {
    if (a[i] == '\0' && b[i] == '\0') {
      printf("Equal");
      break;
    } else if (a[i] == '\0') {
      printf("A is smaller");
      break;
    } else if (b[i] == '\0') {
      printf("B is smaller");
      break;
    } else if (a[i] == b[i]) {
      i++;
    } else if (a[i] < b[i]) {
      printf("A is smaller");
      break;
    } else if (a[i] > b[i]) {
      printf("B is smaller");
      break;
    }
  }
  // built in function
  int val = strcmp(a, b);
  if (val < 0) {

    printf("A is smaller"); // -1
  } else if (val == 0) {

    printf("Equal"); // 0
  } else if (val > 0) {

    printf("B is smaller"); // 1
  }
  return 0;
}