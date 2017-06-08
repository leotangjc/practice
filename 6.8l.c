/*使用多路开关模式编写日程安排*/
#include <stdio.h>

int main()
{
    int iDay=0;
    
    printf("enter a day of week to get course:\n");
    scanf("%d",iDay);
    
    switch(iDay)
    {
    case 1:
            printf("Have a meeting in the company\n");
            break;
    case 2:
    case 3:
    case 4:
    case 5:
            printf("Working with partner\n");
            break;
    case 6:
            printf("Go shopping woth friends\n");
            break;
    case 7:
            printf("At home with families\n");
            break;
    default:
            printf("error!!\n");
    }

    return 0;
}
