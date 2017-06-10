/*可变长度数组作为函数参数*/
#include <stdio.h>

void Evaluate(int iArrayName[]);
void Display(int iArrayName[]);

int main()
{
    int iArray[10];
    
    Evaluate(iArray[10]);
    Display(iArray[10]);
    return 0;
}

void Display(int iArrayName[])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("the member number in %d\n",iArrayName[i]);
    }
}

void Evaluate(int iArrayName[])
{
    int i;
    for(i=0;i<10;i++)
    {
        iArrayName[i]=i;
    }
}
