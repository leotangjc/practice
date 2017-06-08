/*if语句和switch语句的综合应用*/
#include <stdio.h>

int main()
{
    int iMonth=0,iDay=0;
    printf("enter the mouth you want tu know the days\n");
    scanf("%d",&iMonth);
    {
        
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        iDay=31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        iDay=30;
        break;
    cese 2:
        iDay=28;
        break;
    default:
        iDay=-1;
        break;
        
    }

    if(iDay==-1)
    {
        printf("there is a error with you enter\n");
    }
    else
    {
        printf("2010.%d has %d day\n",iMonth,iDay);
    }
    return 0;
}
