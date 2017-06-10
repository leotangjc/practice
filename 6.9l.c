/*选择法排序*/
#include <stdio.h>

int main()
{

    int i,j;
    int a[10];
    int iTemp;
    int iPos;
    printf("维数组元素赋值：\n");
/*从键盘为数组元素赋值*/
    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
           
/*从小到大排序*/
           for(i=0;i<9;i++)
           {
               iTemp=a[i];
               iPos=i;
               for(j=i+1;j<10;j++)
               {
                   if(a[j]<iTemp)
                   {
                       iTemp=a[j];
                       iPos=j;
                   }
               }
               /*交换两个元素值*/
               a[iPos]=a[i];
               a[i]=iTemp;
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
