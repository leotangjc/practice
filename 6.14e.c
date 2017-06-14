/*将15先左移2位，将其左移后的结果输出。在这个结果的基础上在左移3位，并将结果输出*/
#include <stdio.h>

int main()
{
    int x=15;
    x=x<<2;
    printf("the result1 is%d\n",x);
    x=x<<3;
    printf("the result2 is:%d\n",x);

}
