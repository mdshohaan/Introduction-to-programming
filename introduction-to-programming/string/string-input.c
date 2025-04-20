#include <stdio.h>

int main() {
  char a[50]; // Mohammad Irfan
              // scanf("%s", &a);    // Mohammad
  //  gets(a); // Mohammad Irfan
  fgets(a, 15, stdin);
  printf("%s", a);
  return 0;
}