/*任意输入一个3行3列的二维数组，求对角之和*/
#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j,sum=0;
    printf("please input:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<3;j++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("the result is :%d\n",sum);
    return 0;
}
