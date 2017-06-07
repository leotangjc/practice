#include <stdio.h>

int main()
{
    int iNumber1,iNumber2,iNumber3;
    iNumber1=3;
    iNumber2=7;
    
    printf("the first number is:%d\n",iNumber1);
    printf("the second number is:%d\n",iNumber2);
    
    iNumber3=iNumber1+10;
    printf("the first number add 10 is:%d\n",iNumber3);
    
    iNumber3=iNumber2+10;
    printf("the second number add 10 is:%d\n",iNumber3);
    
    iNumber3=iNumber1+iNumber2;
    printf("the result number of first add second is :%d\n",iNumber3);
    
    return 0;
}
