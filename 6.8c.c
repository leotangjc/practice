/*使用if...else语句进行判断*/
/*使用if...else语句进行选择判断*/
#include <stdio.h>

int main()
{
    int iNumber;
    
    printf("Enter a number\n");
    scanf("%d",&iNumber);
    
    if(iNumber)
    {
        printf("the value is true and the number is:%d\n",iNumber);
    }
    else
    {
        printf("the value is flase and the number is:%d\n",iNumber);
    }
    return 0;
}
