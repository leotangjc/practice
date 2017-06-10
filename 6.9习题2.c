/*使用字符数组和实型数组分别存储学生姓名和成绩，并通过对学生成绩的排序，按照名次输出字符数组中对应的学生姓名*/
#include <stdio.h>

int main()
{
    
    int i,j;
    int a[2];
    char b[2];
    int iTemp;
    char bTemp;
    int iPos;
    
    printf("输入学生姓名，成绩：\n");
    for(i=0;i<2;i++)
    {
        scanf("%s",&b[i]);
        scanf("%d",&a[i]);
    }
    
    
    /*从小到大排序*/
    for(i=0;i<2;i++)
    {
        iTemp=a[i];
        bTemp=b[i];
        iPos=i;
        for(j=i+1;j<2;j++)
        {
            if(a[j]<iTemp)
            {
                iTemp=a[j];
                bTemp=b[j];
                iPos=j;
            }
        }
        /*交换两个元素值*/
        a[iPos]=a[i];
        a[i]=iTemp;
        b[iPos]=b[i];
        b[i]=bTemp;
    }
    
    /*输出数组*/
    for(i=0;i<2;i++)
    {
        printf("%c\n",b[i]);
    }
    return 0;
    
}
