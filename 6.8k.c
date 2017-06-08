/*修改日程安排程序*/
#include <stdio.h>

int main()
{
    int iDay=0;
    
    printf("enter a day of week to get course:\n");
    scanf("%d",&iDay);
    switch(iDay)
    {
    case 1:
            printf("Have a meeting in the company\n");
            break;
        case 6:
            printf("Go shopping with friends\n");
        case 7:
            printf("At home with families\n");
            break;
        default:
            printf("Working with partner\n");
            break;
    
    }
    return 0;
}
