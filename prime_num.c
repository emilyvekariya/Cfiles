#include<stdio.h>

int main(){
  int a,m=0,i;
  printf("enter any number: ");
  scanf("%d",&a); // accepting any num
  
  m=a/2;
  for(i=2;i<=m;i++)
  {
    if(a%i==0){
      printf("Number is not prime");
    } 
  }
  printf("number is prime");
}
