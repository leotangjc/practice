#include <stdio.h>

int main()
{
    char cBig;
    char cSmall;
    
    puts("Pleass enter capital charater:");
    cBig=getchar();
    puts("Minuscule character is:");
    cSmall=cBig+32;
    printf("%c\n",cSmall);
    return 0;
}
