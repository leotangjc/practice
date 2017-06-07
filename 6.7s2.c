/*第四章作业2*/
/*定义一个变量赋值为6，经过操作前缀自加、后缀自加、前缀自减和后缀自减，得到每一次计算的结果*/
#include <stdio.h>

int main()
{
    int a,b;
    a=6;
    b=0;
    
    b=++a;
    printf("%d\n",b);
    
    b=--a;
    printf("%d\n",b);
    
    b=a++;
    printf("%d\n",b);
    
    b=a--;
    printf("%d\n",b);
    return 0;
}
