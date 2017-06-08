/*使用条件运算符计算欠款金额*/
#include <stdio.h>

int main()
{
    float fDues;
    float fAmount;
    int iOntime;
    char cChar;
    
    printf("Enter dues amount:\n");
    scanf("%f",&fDues);
    printf("On Time? (y/n)\n");
    getchar();
    cChar=getchar();
    iOntime=(cChar=='y')?1:0;
    fAmount=iOntime?fDues:(fDues*1.1);
    printf("the Amount is:%.2f\n",fAmount);
    return 0;
}
