#include <stdio.h>
// ASCII 
int main() {
long long int N ,M; 
 scanf("%lld %lld ",&N ,&M);
 int lastOne = (N % 10 ) + (M % 10);



printf("%d",lastOne);

 return 0;
}

