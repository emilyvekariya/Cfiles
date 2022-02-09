#include<stdio.h>

int addN_numbers(int num,int N){
int sum=0,b,c,rev=0;
for(int i=0;i<N;i++){
 c=num%10;
 num=num/10;
 rev=rev+c;
}
for(int i=0;i<N;i++){
 b=num%10;
 num=num/10;
 sum=sum+b;
}
return sum;
}

int main(){
int num,N;
printf("Enter a number: ");
scanf("%d",&num);
printf("enter number for addition of first number: ");
scanf("%d",&N);
int c=addN_numbers(num,N);
printf("sum of first %d numbers is: %d",N,c);
}
