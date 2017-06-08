/*计算1~·00间所有偶数的累加结果*/
#include <stdio.h>

int main()
{
    int iCount,iSum;
    for(iSum=0,iCount=0;iCount<=100;iCount++,iCount++)
    {
        iSum=iSum+iCount;
    }
    printf("the result is:%d\n",iSum);
    return 0;
}
