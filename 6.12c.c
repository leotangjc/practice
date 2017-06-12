/*“&”应用*/
#include <stdio.h>

int main()
{
    long i;
    long *p;
    printf("please input the number:\n");
    scanf("%ld,&i");
    p=&i;
    printf("the result1 is: %ld\n",&*p);
    printf("the result2 is: %ld\n",&i);
    return 0;
}
