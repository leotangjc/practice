/*定义一个标识符为Max函数，其函数功能是判断两个整数的大小，并将较大的整数显示出来*/
//#include <stdio.h>
//
//void Max(int num1,int num2)
//{
//    if(num1>num2)
//    {
//        printf("较大的数为：%d\n",num1);
//    }
//    else
//    {
//        printf("较大的数为：%d\n",num2);
//    }
//}
//
//int main()
//{
//    int num1;
//    int num2;
//    printf("请输入第一个要比较的值：\n");
//    scanf("%d%d\n",num1,num2);
//
//    Max();
//    return 0;
//}


#include <stdio.h>

int Max(int num1,int num2)
{
    if(num1>num2)
    {
        printf("较大的数为：%d\n",num1);
    }
    else
    {
        printf("较大的数为：%d\n",num2);
    }
    return 0;
}

int main()
{
    int num1;
    int num2;
    printf("请输入要比较的值：\n");
    scanf("%d %d",&num1,&num2);

    Max(num1,num2);
    return 0;
}


