#include <stdio.h>

int main() {

  int a[5] = {20, 30};
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]); // 20 30 0 0 0
  }

  return 0;
}
/*
If someone says “Give me the 4th element,” you have to look at:
array[3]  // because 4 - 1 = 3
5. How do you access the nth element of an array in the C programming language?
a. arrayName[n]
b. arrayName[n-1]
c. arrayName[n+1]
d. arrayName[n*2]

Explanation: Array এর ইন্ডেক্সিং 0 (zero) থেকে শুরু হয়ে থাকে। তাই Array এর প্রথম
ইলিমেন্ট টি এর 0 নাম্বার ইন্ডেক্সে থাকে এবং শেষের ইন্ডেক্স থাকে size-1   নাম্বার
ইন্ডেক্সে. সুতারাং , n সাইজের একটি array এর n তম ইলিমেন্ট এক্সেস করতে হবে
arrayName[n-1] এইভাবে।
*/