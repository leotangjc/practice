/*外部函数的使用*/
/*文件1*/
#include <stdio.h>

extern char* GetString(char* pString);
extern void ShowString(char* pString);

int main()
{
    char* pMyString;
    pMyString=GetString("Hello!");
    ShowString(pMyString);
    return 0;
}
