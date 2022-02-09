#include<stdio.h>

int main(){
  int m1,m2,m3,m4;
  scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
  int a=(m1+m2+m3+m4)/4;
  printf("average=%d",a);
  if(a>=90){
  printf("You scored grade A/B");
  }
  if(75<=a && a<90){
  printf("You scored grade A/B");}
  if(60<=a && a<75){
  printf("You scored grade C/D");}
  if(35<=a && a<60){
  printf("You scored grade C/D");}
  else{
  printf("You have schored F...better luck next time!!");
  }
  return 0;
}
