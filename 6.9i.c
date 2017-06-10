/*使用二维字符数组输出一个钻石形状*/
#include <stdio.h>

int main()
{
    int iRow,iColumn;
    char cDiamond[][5]={{'','','*'},
                        {'','*','','*'},
                        {'*','','','','*'},
                        {'','*','','*'},
                        {'','','*'},
        for(iRow=0;iRow<5;iRow++)
        {
            for(iColumn=0;iColumn<5;iColumn++)
            {
                printf("%c",cDiamond[iRow][iColumn]);
            }
        }
    printf("\n");
    return 0;
}
