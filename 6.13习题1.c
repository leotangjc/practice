/*设计一个候选人的选票程序，假设有三个候选人，每一次输入要选择的候选人姓名，输出得票结果*/
#include <stdio.h>
struct Person
{
    char name[20];
    int count;
}leader[3]={"li",0,"zhang",0,"sun",0};
int main()
{
    int i,j;
    char leader_name[20];
    printf("请输入候选人名字：li,zhang,sun\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",leader_name);
        for(j=0;j<3;j++)
        {
            if(strcmp(leader_name,leader[j].name)==0)
                leader[j].count++;
        }
    }
    printf("\n最终投票结果为：\n");
    for(i=0;i<3;i++)
    {
        printf("%13s:%d\n",leader[i].name,leader[i].count);
    }
    return 0;
}
