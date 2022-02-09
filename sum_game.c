#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int upper=9,lower=1;
int a,b,c,d,chances=5;

while(chances!=0){

srand(time(0));
a=(rand()%(upper-lower+1))+lower;
b=(rand()%(upper-lower+1))+lower;
printf("%d\t",a);
printf("%d",b);

printf("\nperform the addition of these two numbers:\n");

scanf("%d",&d);
c=a+b;
if(c==d){
 upper*=10;
 lower*=10;
 printf("you are correct!!...let's go for next level\n");
 chances=5;
}
else{
 chances--;
 printf("%d chances are left\n",chances);
}
}

}
