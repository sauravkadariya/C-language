#include<stdio.h>

union std{
    int a;
    int b;
    float c;
};
int main(){
    union std s;
    s.a=10;
    printf("%f\n",s.c); // print value of c
    printf("The size of union is %d",sizeof(s));


    return 0;
}