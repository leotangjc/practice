/*结构体类型的初始化操作*/
#include <stdio.h>

struct Student
{
    char cName[20];
    char cSex;
    int iGrad;
}student1={"HanXue",'W',3};

int main()
{
    struct Student student2={"WangJiasheng",'M',3};
    
    printf("the student1's information:\n");
    printf("Name:%s\n",student1.cName);
    printf("Sex:%c\n",student1.cSex);
    printf("Grade:%d\n",student1.iGrad);
    printf("the student2's information:\n");
    printf("Name:%s\n",student2.cName);
    printf("Sex:%c\n",student2.cSex);
    printf("Grade:%d\n",student2.iGrad);
    return 0;
}
