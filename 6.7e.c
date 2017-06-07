#include <stdio.h>

int main()
{
    int iNumber1,iNumber2,iNumber3,iResult=0;
    iNumber1=20;
    iNumber2=5;
    iNumber3=2;
    
    iResult=iNumber1+iNumber2-iNumber3;
    printf("the result is:%d\n",iResult);
    
    iResult=iNumber1-iNumber2+iNumber3;
    printf("the result is:%d\n",iResult);
    
    iResult=iNumber1+iNumber2*iNumber3;
    printf("the result is:%d\n",iResult);
    
    iResult=iNumber1/iNumber2*iNumber3;
    printf("the result is:%d\n",iResult);
    
    iResult=(iNumber1+iNumber2)*iNumber3;
    printf("the result is:%d\n",iResult);
    
    return 0;
}
