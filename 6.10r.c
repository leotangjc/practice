/*局部变量的作用域*/
#include <stdio.h>

int main()
{
    int iNumber1=1;
    if(iNumber1>0)
    {
        int iNumber2=2;
        if(iNumber2>0)
        {
            int iNumber3=3;
            
            printf("All three number are in scope here %d %d %d\n",iNumber1,iNumber2,iNumber3);
        }
    }
    return 0;
}
