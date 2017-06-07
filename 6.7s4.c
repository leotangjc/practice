/*模拟工资计算器（月工资=基本工资+提成，提成=商品数*1.5*/
#include <stdio.h>

int main()
{
    double zgz;
    int gz,sp;
    
    puts("请输入基本工资：");
    scanf("%d",&gz);
    puts("请输入售出商品数：");
    scanf("%d",&sp);
    zgz=gz+sp*1.5;
    puts("月工资：");
    printf("%lf\n",zgz);
    return 0;
}
