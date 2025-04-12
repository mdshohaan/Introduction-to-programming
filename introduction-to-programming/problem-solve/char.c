#include <stdio.h>
// ASCII 
int main() {
    char ch ;
    scanf("%c",&ch); 
    if(ch >= 'a' && ch <= 'z' ){  // a - z
        ch = ch - 32;
        printf("%c",ch);
    } else {
        ch = ch + 32;
        printf("%c",ch);
    }
     

    return 0;
}
/*
1byte = 8 bit
2^8 = 256 
*/

