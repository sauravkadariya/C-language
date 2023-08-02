#include<stdio.h>
#include<string.h>
/* Enter rollNo,Name,Enter marks of 5 subjects and find total and avg*/

struct std{
int roll;
char name[20];
int marks[5];
};
int main(){
  struct std s;
  int total=0;
  float avg=0;
  printf("Enter Roll no:");
  scanf("%d",&s.roll);

   printf("Enter Name of Student:");
    scanf("%s",s.name);

     printf("Enter marks  of Student in 5 subjects:");
     for(int i=0;i<5;i++){
       scanf("%d",&s.marks[i]);
       total+=s.marks[i];
     }
      avg=(float)total/5;

  printf("\nRoll:%d\n",s.roll);
    printf("Name:%s\n",s.name);
    printf("total:%d\n average:%f\n",total,avg);

  return 0;
}

