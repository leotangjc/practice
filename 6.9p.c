/*折半法排序*/
#include <stdio.h>

/*声明函数*/
void CelerityRun(int left,int right,int array[]);

int main()
{
    int i;
    int a[10];
    printf("为数组元素赋值");
/*通过键盘为数组元素赋值*/
    for(i=0;i<10;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

/*从小到大排序*/
    CelerityRun(0,9,a);

/*输出数组*/
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        if(i==4)
            printf("\n");
    
    }

    return 0;
    
}


void CelerityRun(int left,int right,int array[])
{
    int i,j;
    int middle,iTemp;
    i=left;
    j=right;
    middle=array[(left+right)/2];
    do
    {
        while((array[i]<middle)&&(i<right))
            i++;
        while((array[j]>middle)&&(j>left))
            j--;
        if(i<=j)
        {
            iTemp=array[i];
            array[i]=array[i];
            array[j]=iTemp;
            i++;
            j--;
        }
    }while(i<=j);
    /*递归左半边*/
    if(left<j)
        CelerityRun(left,j,array);
    /*递归到右半边*/
    if(right>i)
        CelerityRun(i,right,array);
}
