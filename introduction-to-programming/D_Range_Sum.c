#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);

  while (T--) {
    long long L, R;
    scanf("%lld %lld", &L, &R);

    long long rSum = (long long)R * (R + 1) / 2;
    long long lSum = (long long)(L - 1) * L / 2;

    long long sum = rSum - lSum;

    printf("%lld\n", sum);
  }

  return 0;
}
// ধরো, L = 5

// তাহলে ১ থেকে L - 1 = 4 পর্যন্ত যোগফল:

// 1 + 2 + 3 + 4 = 10