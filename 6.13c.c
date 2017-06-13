/*初始化结构体数组，并输出学生信息*/
#include <stdio.h>

struct Student
{
    char cName[20];
    int iNumber;
    char cSex;
    int iGrade;
}student[5]={{"WangJlasheng",12062212,'M',3},
        {"YuLongjiao",12062213;'W',3},
        {"JiangXuehuan",12062214,'W',3},
        {"nZhangMengM",12062215,'W',3},
        {"HanUang",12062216,M,3}};

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("NO%d student:\n",i+1);
        printf("Name: %s,Number%d\n",stud^it[i].cName,student[i].iNumber);
        printf("Sex: %c, Grade: %d\n",sUjdent[l].cSex,student(i).tGrade);
        printf("\n");
    }
    return 0;
}
