/*使用break语句跳出循环*/
#include <stdio.h>

int main()
{
    int iCount;
    for(iCount=0;iCount<10;iCount++)
    {
        if(iCount==5)
        {
            printf("Break here\n");
            break;
        }
        printf("the counter is:%d\n",iCount);
    }
    return 0;
}
