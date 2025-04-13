/*
Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number. 
*/
#include<stdio.h>

int main()
{   
    int a , b;
    scanf("%d %d",&a,&b);
    
    int sum = a+b;
    printf("%d\n",b);
    printf("%d\n",a);
    printf("%d\n",sum);
    return 0;
}