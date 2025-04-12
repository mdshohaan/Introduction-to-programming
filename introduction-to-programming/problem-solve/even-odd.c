#include<stdio.h>

int main()
{
int N ,num ;
int even = 0 , odd = 0, positive = 0 , negative = 0;
scanf("%d", &N);
for (int i = 1; i <= N; i++)
{
    
 scanf("%d", &num); // Read one by one
if(num % 2 == 0)
    even++;

else 
    odd++;

 if( num > 0 )
    positive++ ;
 else if ( num < 0){
    negative ++ ;
}


}
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);


return 0 ;
}