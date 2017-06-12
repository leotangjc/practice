/*输出数组中的元素*/
#include <stdio.h>

int main()
{
    int *p,*q,a[5],b[5],i;
    p=&a[0];
    q=b;
    printf("please tnput array a:\n");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    printf("array a is:\n");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    printf("array a is:\n");
    for(i=0;i<5;i++)
        printf("%5d",&b[i]);
    printf("\n");
    printf("array b is:\n");
    for(i=0;i<5;i++)
        printf("%5d",*(q+i));
    
    return 0;
}
