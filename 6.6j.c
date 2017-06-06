#include <stdio.h>

void AddOne()
{
    static int ilnt=1;
    ilnt=ilnt+1;
    printf("%d\n",ilnt);
    return 0;
}
int main()
{
    printf("第一次调用：");
    AddOne();
    printf("第二次调用：");
    AddOne();
    return 0;
}
