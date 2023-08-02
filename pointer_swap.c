#include<stdio.h>
 int main(){

int a=10,b=20,*p,*q,temp;
p=&a;
q=&b;

printf("The value of a is %d and b is %d\n",*p,*q);
temp= *p;
*p = *q;
*q = temp;

printf("The value of a is %d and b is %d",*p,*q);





    return 0;
 }