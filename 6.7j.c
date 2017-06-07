#include <stdio.h>

int main()
{
    int iTotal,iValue,iDetail;
    iTotal=100;
    iValue=50;
    iDetail=5;
    
    iValue*=iDetail;
    iTotal+=iValue;
    printf("Value is:%d\n",iValue);
    printf("Total is:%d\n",iTotal);
    return 0;
}
