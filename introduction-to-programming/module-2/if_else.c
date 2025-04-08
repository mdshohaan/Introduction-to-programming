#include<stdio.h>
int main()
{
    int tk ;
    scanf("%d", & tk);

    tk >= 100 ? printf("Eat") : printf("did not eat");
    tk >= 50 ? printf("Eat") : printf("did not eat");

    return 0;
}
