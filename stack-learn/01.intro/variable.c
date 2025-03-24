#include <stdio.h>

int main(){
   int a = 10;
   int b = 10;
   int c;
   c=100;
   c=200;
   printf("%d\n",c); // 200
   printf("%d + %d =%d\n",a,b,a+b);


   float myFloatNum = 5.99;   // Floating point number
   char myLetter = 'D';       // Character
    printf("%f\n",myFloatNum); 
    printf("%c\n",myLetter); 
    printf("My Number is: %f\n",myFloatNum);

   
    int x, y, z;
    x = y = z = 50;
    printf("%d", x + y + z);
 
     // Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Print variables
printf("Student id: %d\n", studentID);
printf("Student age: %d\n", studentAge);
printf("Student fee: %f\n", studentFee);
printf("Student grade: %c", studentGrade);
   return 0;  
};