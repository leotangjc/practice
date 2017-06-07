#include <stdio.h>

int main()
{
    int iValue1,iValue2,iValue3,iResult;
    
    iValue1=10;
    iValue2=43;
    iValue3=26;
    iResult=0;
    
    iResult=iValue1++,--iValue2,iValue3+4;
    printf("the result is:%d\n",iResult);
    
    iResult=(iValue++,--iValue2,iValue3+4);
    printf("the result is :%d\n",iResult);
    return 0;
}
