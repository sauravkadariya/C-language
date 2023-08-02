#include<stdio.h>

int main(){

int a=10;
int *ptr,**q;
ptr=&a;
q=&ptr;
printf("%d\n",*ptr); // print value of a
printf("%d\n",a); // print value of a



printf("\n%d",ptr); // print address of a
printf("\n%d\n",&a); // print address of a

printf("\n%d\n",&ptr); // print address of p



printf("\n%d\n",q); // print address of p

printf("%d\n",*q); // address of a

printf("%d\n",**q); // 10

printf("%d\n",&q); // print address of q








    return 0;
}