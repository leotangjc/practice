/*第四章习题1*/
/*使用复合运算符计算a+=a*=a/a=a-6*/
#include <stdio.h>

int main()
{
    int a,b;
    a=9;
    b=a+=(a*=(a/=(a-6)));
    
    printf("%d\n",b);
    return 0;
}
