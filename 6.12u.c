/*使用返回指针的函数查找最大值*/
//#include <stdio.h>
//int per(int a,int b);
//void main()
//{
//    int iWidth,iLengh,iResult;
//    printf("请输入长方形的长：\n");
//    scanf("%d",&iLengh);
//    printf("请输入长方形的宽：\n");
//    scanf("%d",&iWidth);
//    iResult=per(iWidth,iLengh);
//    printf("长方形的周长是：");
//    printf("%d\n",iResult);
//    
//}
//
//int per(int a,int b)
//{
//    return(a+b)*2;
//}



#include <stdio.h>
int *per(int a,int b);
int perimeter;
void main()
{
    int iWidth,iLengh,iResult;
    printf("请输入长方形的长：\n");
    scanf("%d",&iLengh);
    printf("请输入长方形的宽：\n");
    scanf("%d",&iWidth);
    iResult=per(iWidth,iLengh);
    printf("长方形的周长是：");
    printf("%d\n",iResult);
    
}

int *per(int a,int b)
{
    int *p;
    p=&perimeter;
    perimeter=(a+b)*2;
    return p;
}
