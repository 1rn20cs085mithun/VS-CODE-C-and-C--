//READ THE character IN UPPERCASE AND PRINT THEM IN lowercase
#include<stdio.h>
int main ()
{
    char U,L;
    int ascii;
    printf("enter the character\n");
    scanf("%c",&U);
    ascii = U;// assigning the value of char U to  integer ascii
    L = ascii + 32;// to convert uppercase to lowercase
    printf("the lower case of %c is %c ",U,L);
    return 0;
}