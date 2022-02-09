#include<stdio.h>

int main(){
  int a;
  scanf("%d",&a);

  while(a!=0){
  int digit= a%10;
  a=a/10;
  printf("%d",digit-1);
  }
}
