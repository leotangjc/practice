#include <stdio.h>

void Move();
void Build();
void Paint();

int main()
{
    Move();
    Build();
    Paint();
    
    return 0;
}


void Move()
{
    printf("This Function can move material\n");
}

void Build()
{
    printf("This Function can build a building\n");
}

void Paint()
{
    printf("This Function can paint cloth\n");
}
