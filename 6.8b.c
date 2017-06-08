/*完善if语句的使用*/
#include <stdio.h>

int main()
{
    int iSignal;
    printf("the Red Light is 0,the Green Light is 1\n");
    scanf("%d",&iSignal);
    
    if(iSignal==1)
    {
        printf("the Light is green,cars can run\n");
    }
    if(iSignal==0)
    {
        printf("the Light is red,car can't run\n");
    }
    
    return 0;
}
