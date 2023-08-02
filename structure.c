#include<stdio.h>


struct std
{
    int a;       //2 byte;
    char b;      //1byte;
    float c;     //4 byte;
};

int main(){
    struct std s;
    printf("Maximum size of structure is :%d",sizeof(s));
    return 0;
}
