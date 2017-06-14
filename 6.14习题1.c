/*任意输入两个数，求这两个数进行“与”和“或”之后的结果*/
#include <stdio.h>

int main()
{
    unsigned result;
    int a,b;
    printf("请输入数a：\n");
    scanf("%d",&a);
    printf("请输入数b：\n");
    scanf("%d",&b);
    result=a&b;
    printf("“与”结果为：%u\n",result);
    result=a|b;
    printf("“或”结果为：%u\n",result);

}
