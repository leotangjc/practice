#include <stdio.h>

int main() {
    int x=3000;
    double y;
    if(0<=x){
        printf("0\n");
    }
    if(x<=100){
        printf("y=1\n");
        return 0;
    }
    if(x<5000){
        y=x*0.001;
        printf("%f",y);
        return 0;
    }
    if(x<=1000000){
        printf("y=50");
        return 0;
    }
}
