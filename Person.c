#include<stdio.h>
union Person
{
   int age;  //  int 4 byte
   double salary; // double 8 byte
};
int main(){

    union Person p;
    p.age=12;
    printf("Person age:%d",p.age);

    p.salary=50000;
    printf("\nPerson salary:%lf",p.salary);

    printf("\nUnion size: %d",sizeof(union Person));


    return 0;
}
