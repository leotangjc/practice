#include <stdio.h>

int main()
{
    int iNumber1,iNumber2;
    iNumber1=10;
    iNumber2=0;
    
    printf("the is Ture , 0 is False\n");
    printf("5< iNumber1&&iNumber2 is %d\n",5<iNumber1&&iNumber2);
    printf("5< iNumber1 || iNumber2 %d\n",5<iNumber1||iNumber2);
    iNumber2=!!iNumber1;
    printf("iNumber2 is %d\n",iNumber2);
    return 0;
}
