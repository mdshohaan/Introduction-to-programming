#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {

    char s[10001];
    scanf("%s", s);

    int len = strlen(s);
    int cntD = 0;
    int cntAlpa = 0;
    int cntSm = 0;

    for (int j = 0; j < len; j++) {
      if (s[j] >= '0' && s[j] <= '9') {
        cntD++;
      } else if (s[j] >= 'A' && s[j] <= 'Z') {
        cntAlpa++;
      } else if (s[j] >= 'a' && s[j] <= 'z') {
        cntSm++;
      }
    }

    printf("%d %d %d\n", cntAlpa, cntSm, cntD);
  }

  return 0;
}