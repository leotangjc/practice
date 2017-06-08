/*输出0~100之间不能被3整除的数*/
#include <stdio.h>

int main()
{
    int a;
    for(a=0;a<101;a++)
    {
        if((a%3)==0)
        {
            continue;
        }
        printf("%d\n",a);
        
    }
    
    return 0;
}
