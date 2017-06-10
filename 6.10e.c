/*形式参数与实际参数的比喻实现*/
#include <stdio.h>

void DrinkMilk(char* cBottle);

int main()
{
    char cPoke[]="";
    printf("Mother wanna give the baby:\n");
    scanf("%s",&cPoke);
    return 0;
}

void DrinkMilk(char* cBottle)
{
    printf("The Baby drink the %s\n",cBottle);
}
