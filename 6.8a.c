/*初试if语句使用*/
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
    
    return 0;
}
