/*将输入的小写字符转化成大写字符*/
#include <stdio.h>

int main()
{
    char cBig;
    char cSmall;
    
    puts("Pleass enter capital charater:");
    cSmall=getchar();
    puts("Minuscule character is:");
    cBig=cSmall-32;
    printf("%c\n",cSmall);
    return 0;
}
