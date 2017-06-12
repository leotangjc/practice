/*利用指针变量实现数据输入、输出*/
#include <stdio.h>

int main()
{
    int *p,q;
    printf("please input:\n");
    scanf("%d",&q);
    p=&q;
    printf("the number is:\n");
    printf("%d\n",*p);
    return 0;
}
