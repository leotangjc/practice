/*有一个一维数组Score,存放10个元素代表10个学生的成绩，要求设计函数，其中将数组名作为函数的参数*/
#include <stdio.h>

int Score[10];
int i;
float zh;
float pjz;

int pj();



int main()
{
    printf("请输入学生成绩：\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&Score[i]);
    }
    pj();
    return 0;
}

int pj()
{
    for(i=0;i<10;i++)
    {
        zh=zh+Score[i];
    }
    
    pjz=(zh/10);
    
    printf("%f\n",pjz);
    printf("%f\n",zh);
    return 0;
}

