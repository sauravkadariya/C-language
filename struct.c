#include<stdio.h>

struct std{
    int a;
    int b;
    int c;
};
int main(){
    struct std s;
    s.a=10;
    printf("%d",s.c); // print garbage value


    return 0;
}