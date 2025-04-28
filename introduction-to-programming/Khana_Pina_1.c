#include <stdio.h>

int main() {
  long long int m;
  scanf("%lld", &m);

  if (m >= 1000) {
    printf("Three Kacchi\n");
  } else if (m >= 500) {
    printf("One Large Pizza\n");
  } else if (m < 500 && m >= 250) {
    printf("Three Small Burger\n");
  } else if (m >= 100) {
    printf("Three Fuchka\n");
  } else {
    printf("Nothing\n");
  }
  return 0;
}