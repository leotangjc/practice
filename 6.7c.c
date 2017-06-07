#include <stdio.h>

int main()
{
    char cChar;
    short int iShort;
    int ilnt;
    float fFloat=70000;
    
    cChar=(char)fFloat;
    iShort=(short)fFloat;
    ilnt=(int)fFloat;
    
    printf("the char is:%c\n",cChar);
    printf("the long is:%ld\n",iShort);
    printf("the int is:%d\n",ilnt);
    printf("the float is:%f\n",fFloat);
    
    return 0;
}
