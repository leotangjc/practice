/*函数的嵌套调用*/
#include <stdio.h>

void CEO();
void Manager();
void AssistantManager();
void Clerk();

int main()
{
    CEO();
    return 0;
}

void CEO()
{
    printf("The CEO's working is telling Manager\n");
    Manager();
}

void Manager()
{
    printf("The Manager's working's work is telling AssistantManager\n");
    AssistantManager();
}

void AssistantManager()
{
    printf("The AssistanManager's work is telling Clerk\n");
    Clerk();
}

void Clerk()
{
    printf("The Clerk's work is making it\n");
}
