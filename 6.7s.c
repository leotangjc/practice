#include <stdio.h>

int main()
{
    long iLong;
    short iShort;
    int iNumber1=1;
    int iNumber2=2;
    char cChar[10];
    
    printf("Enter the long integer\n");
    scanf("%ld",&iLong);
    
    printf("Enter the short integer\n");
    scanf("%hd",&iShort);
    
    printf("Enter the number integer\n");
    scanf("%d%d",&iNumber1,&iNumber2);
    
    printf("Enter the sdafsdfas\n");
    scanf("%3s",&cChar);
    
    printf("The long interger is:%ld",iLong);
    printf("The short interger is:%hd",iShort);
    printf("the Number1 is:%d\n",iNumber1);
    printf("the Number2 is:%d\n",iNumber2);
    
    
    return 0;
}
