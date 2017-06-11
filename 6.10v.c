/*使用三角函数*/
#include <stdio.h>
#include <math.h>

int main()
{
    double fResultSin;
    double fResultCos;
    double fResultTan;
    
    double fXsin=0.5;
    double fXcos=0.5;
    double fXtan=0.5;
    
    fResultSin=sin(fXsin);
    fResultCos=cos(fXcos);
    fResultTan=tan(fXtan);
    
    /*输出运算结果*/
    printf("The sin of %lf is %lf\n",fXsin,fResultSin);
    printf("The cos of %lf is %lf\n",fXcos,fResultCos);
    printf("The tan of %lf is %lf\n",fXtan,fResultTan);
    return 0;
}
