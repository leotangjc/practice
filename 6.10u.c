/*数学库函数使用*/
#include <stdio.h>
#include <math.h>

int main()
{
    int iAbsoluteNumber;
    int iNumber=-12;
    long lResult;
    long lNumber=-1234567890l;
    double fFloatResult;
    double fNumber=-123.1;
    
    iAbsoluteNumber=abs(iNumber);
    lResult=labs(lNumber);
    fFloatResult=fabs(fNumber);
    
    /*输出原来的数字，然后将得到的绝对值进行输出*/
    printf("the original number is:%d,the absolute is:%d\n",iNumber,iAbsoluteNumber);
    printf("the original number is:%ld,the absolute is:%ld\n",lNumber,lResult);
    printf("the original number is:%lf,the absolute is:%lf\n",fNumber,fFloatResult);

    return 0;
}
