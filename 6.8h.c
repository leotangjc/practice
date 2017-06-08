/*使用if嵌套语句选择日程安排*/
#include <stdio.h>

int main()
{
    int iDay=0;
    int Monday=1,Tuesday=2,wednesday=3,Thursday=4;Friday=5,Saturday=6,Sunday=7;
    
    printf("enter a day of week to get course\n");
    scanf("%d",&iDay);
    
    if(iDay>Friday)
    {
        if(iDay==Saturday)
        {
            printf("Go shopping with friends\n");
        }
        else
        {
            printf("At home with families\n");
        }
    }
    else
    {
        if(iDay=Monday)
        {
            printf("Have a meeting in the company\n");
        }
        else
        {
            printf("Working with pariner");
        }
    }
    return 0;
}
