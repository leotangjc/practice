/*交换法排序*/
#include <stdio.h>

int main()
{
    int i,j;
    int a[10];
    int iTemp;
    printf("为数组元素赋值：\n");
/*通过键盘为数组元素赋值*/
    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
           
/*从小到大排序*/
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                
                /*交换两个数值*/
                iTemp=a[i];
                a[i]=a[j];
                a[j]=iTemp;
            }
        }
    }
    
/*输出数组*/
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        if(i==4)
            printf("\n");
    }
    
    return 0;
}
