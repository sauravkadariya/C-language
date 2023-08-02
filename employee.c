#include<stdio.h>
#include<string.h>
   struct emp{
   int eid;
   char ename[20];
   double esal;
  
   };
 int main(void){
struct emp e;
   e.eid=10;
   strcpy(e.ename,"ankit");
   e.esal=20000;
   printf("Emp Id :%d\n",e.eid);
   printf("Emp Name :%s\n",e.ename);
   printf("Emp salary :%lf\n",e.esal);

   return 0;
   
 }
