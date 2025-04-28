#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    char s[100001];

    scanf("%s", s);
    int len = strlen(s);
    int isGood = 0;
    for (int i = 0; i < len; i++) {
      if ((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') ||
          (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')) {
        isGood = 1;
        break;
      }
    }
    if (isGood) {
      printf("Good\n");
    } else {
      printf("Bad\n");
    }
  }

  return 0;
}
//	In C, 1 is often used as true, and 0 as false