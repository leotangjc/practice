/*从函数返回*/
#include <stdio.h>

int Function();

int main()
{
    printf("this step is before the Funciton\n");
    Function();
    printf("this step is end of the Function\n");
    return 0;
}

int Function()
{
    printf("this step is in the function\n");

}
