#include<stdio.h>
  struct student
  {
    int roll;
    char name[20];
    float marks;

    
  } ;
  int main(){
        int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student s[n];
  
    printf("Enter Students Records:\n\n");

    for(int i=0;i<n;i++){
        printf("\nEnter Roll: ");
        scanf("%d",&s[i].roll);

         printf("Enter Name of Student: ");
        scanf("%s",&s[i].name);

         printf("Enter Marks of Student: ");
        scanf("%f",&s[i].marks);

    }

        printf("Students Records:\n\n");

    for(int i=0;i<n;i++){
        printf("\nRoll: %d\n",s[i].roll);

         printf("Name of Student: %s \n",s[i].name);

         printf("Marks of Student: %d\n",s[i].marks);

    }
    return 0;
  }