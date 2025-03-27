#include <stdio.h>

int main(){

// Create variables
int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99f;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

double myDouble = 3.998;
printf("%lf\n",myDouble);

char greetings[]="Hello world";
printf("%s\n",greetings);

myNum= myFloatNum;
printf("%d\n",myNum);

float myFloatNumber = 3.5;
printf("%.2f\n",myFloatNumber);

float myFloat = 9;
printf("%f\n",myFloat);

int myInt = 9.99;
printf("%d\n",myInt);

  return 0;
}




// int	2 or 4 bytes	Stores whole numbers, without decimals	1
// float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
// double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
// char	1 byte	Stores a single character/letter/number, or ASCII values	'A'