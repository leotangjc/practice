/*使用指针实现字符串的复制*/
#include <stdio.h>
#include <string.h>
char *copystring(char *str2,char *str1);
int main(){
    char str1[30]="hello,string copied!\n";
    char str2[30];
    printf("str2[30]=%s\n",copystring(str2,str1));
    
    return 0;
}
char *copystring(char *str2,char *str1){
    char *temp=str2;
    while(*str2++=*str1++);
    return temp;
}
