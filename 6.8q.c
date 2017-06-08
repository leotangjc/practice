#include <stdio.h>

int main()
{
    int coumter;
    for(coumter=0;coumter<10;coumter++)
    {
        srand(coumter+1);
        printf("Random number %d is:%d\n",coumter,rand());
    }

    return 0;
}
