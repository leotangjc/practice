/*使用if..else模拟信号灯*/
#include <stdio.h>

int main()
{
    int iSignal;
    printf("the Red Light is 0,\nthe Green Light is 1,\nthe Yellow Light is other number\n");
    scanf("%d",&iSignal);
    
    if(iSignal==1)
    {
        printf("the Light is Green,cars can run\n");
    }
    if(iSignal==0)
    {
        printf("the Light is Red,car can't run\n");
    }
    else
    {
        printf("the Light is yellow,cars are ready\n");
    }

    return 0;
}
