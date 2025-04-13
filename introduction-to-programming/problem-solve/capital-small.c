#include <stdio.h>
// ASCII 
int main() {
    char ch ;
    scanf("%c",&ch); 

if(ch >= '0' && ch <= '9'){
    printf("IS DIGIT\n");
} else {
    printf("ALPHA\n");

     if(ch >= 'a' && ch <= 'z' ){  // a - z
        printf("IS SMALL\n");
    
    } else {
        
       printf("IS CAPITAL\n");
    }
}

   
     

    return 0;
}
/*
1byte = 8 bit
2^8 = 256 
*/

