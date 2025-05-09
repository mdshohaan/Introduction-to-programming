#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int width = 2 * N - 1;

  // Top half
  for (int i = 0; i < N; i++) {
    int spaces = N - i - 1;
    int symbols = 2 * i + 1;
    for (int j = 0; j < spaces; j++)
      printf(" ");

    if (i % 2 == 0) {
      for (int j = 0; j < symbols; j++)
        printf("#");
    } else {
      for (int j = 0; j < symbols; j++)
        printf("-");
    }
    printf("\n");
  }

  // Bottom half
  for (int i = N - 2; i >= 0; i--) {
    int spaces = N - i - 1;
    int symbols = 2 * i + 1;
    for (int j = 0; j < spaces; j++)
      printf(" ");

    if (i % 2 == 0) {
      for (int j = 0; j < symbols; j++)
        printf("#");
    } else {
      for (int j = 0; j < symbols; j++)
        printf("-");
    }
    printf("\n");
  }

  return 0;
}