/*将一个3行5列的二维数组的第二行元素输出*/
#include <stdio.h>

int main()
{
    int a[3][5],i,j;
    printf("please input:\n");
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
            scanf("%d",*(a+i)+j);
    //*p为第一个元素的地址
        printf("the second line is:\n");
        for(j=0;j<5;j++)
            printf("%5d",*(*(a+1)+j));
    printf("\n");
    
}
