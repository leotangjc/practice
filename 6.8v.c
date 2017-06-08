/*打印乘法口诀表*/
#include <stdio.h>

int main()
{
    int iRow,iColumn;
    for (iRow=1;iRow<=9;iRow++)
    {
        for (iColumn=1;iColumn<=iRow;iColumn++)
        {
            printf("%d*%d=%d",iRow,iColumn,iRow*iColumn);
        }
        printf("\n");
    }
    return 0;
}
