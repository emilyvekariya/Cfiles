#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int b;
srand(time(0));
int a=1+rand()%1000;
printf("%d",a);

printf("can you guess the number?\n");
scanf("%d",&b);

if(b==a){
  printf("you guessed it right!! its %d \n",a);
}
while(b!=a){
if(b>a){
  printf("the number is large....try again.\n");
  scanf("%d",&b);
}
else if(b<a){
  printf("the number is small....try again.\n");
  scanf("%d",&b);
}
}



}
