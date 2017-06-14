/*将30和-30分半想右一3位，将所得结果分别输出，在所得结果的基础上在分别右移2位，并将结果输出*/
#include <stdio.h>

int main()
{
    int x=30,y=-30;
    x=x>>3;
    y=y>>3;
    printf("the result1 is:%d,%d\n",x,y);
    x=x>>2;
    y=y>>2;
    printf("the result2 is:%d,%d\n",x,y);
    
}
