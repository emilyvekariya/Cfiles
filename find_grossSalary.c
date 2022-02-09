#include<stdio.h>

int main(){
   float salary;
   printf("please enter your basic salary: ");
   scanf("%f",&salary);
   
   float a=0.4*salary;
   float b=0.2*salary;
   float grossSalary= salary+a+b;
   printf("%f",grossSalary);
   return 0;
}
