#include <stdio.h>
/*getchar用法*/
int main()
{
    char cChar1;
    cChar1=getchar();
    putchar(cChar1);
    putchar('\n');
    
    putchar(getchar());
    putchar('\n');

    return 0;
}
