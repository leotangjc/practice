/*使用switch语句输出分数段*/
#include <stdio.h>

int main()
{
    char cGrade;
    printf("please enter your grade\n");
    scanf("%c",&cGrade);
    printf("Grade is about");
    switch(cGrade)
    {
    case'A':
            printf("90~100\n");
            break;
    case'B':
            printf("80~89");
            break;
    case'C':
            printf("70~79");
            break;
    case'D':
            printf("60~69");
            break;
    case'E':
            printf("<60\n");
            break;
    default:
            printf("You enter the char is wrong!\n");
            break;
            
    }
    return 0;
}
