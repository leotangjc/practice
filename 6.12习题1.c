/*编程实现将数组中的元素值按照相反顺序存放*/
#include<stdio.h>
void main()
{
    int i,a[10],*p;
    void invert(int *x,int n);
    printf("输入10个数字：\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    invert(a,10);
    p=a;
    for(i=0;i<10;i++)
        printf("%5d",*p++);
    printf("\n");
}
void invert(int *x,int n)
{
    int *i,*j,k,m,s;
    m=(n-1)/2;
    i=x;j=x+n-1;
    for(s=0;s<=m;s++,i++,j--)
    {
        k=*i;
        *i=*j;
        *j=k;
    }
}
