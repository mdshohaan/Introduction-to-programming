#include <stdio.h>
// ASCII 
int main() {
    char ch ;
    scanf("%c",&ch); 
    if(ch >= 'a' && ch <= 'z' ){  // if (a - z)
        ch = ch - 32; // to convert UpperCase
        printf("%c",ch);
    } else {
        ch = ch + 32; // to convert LowerCase
        printf("%c",ch);
    }
     

    return 0;
}
/*
1byte = 8 bit
2^8 = 256 
*/

