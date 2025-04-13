#include <stdio.h>

int main() {
     
unsigned  int N ;
scanf("%u",&N);

unsigned long long sum = N * (N + 1) / 2;


  printf("%llu\n",sum);
    return 0;
}
/*
signed:
By default, most integer types in C and C++ (like int, long, and long long) are signed. This means they can store both positive and negative values, including zero. 

signed long long: Can store both positive and negative values within a 64-bit range. 

unsigned long long: Can store non-negative values within a 64-bit range (0 to 18,446,744,073,709,551,615). 
*/