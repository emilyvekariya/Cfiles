#include<stdio.h>

int simpleInterest(int p,int r,int n){
return (p*r*n)/100;
}

int main(){
int p,r,n;
printf("Enter price,rate and time in years\n");
scanf("%d %d %d",&p,&r,&n);
int c=simpleInterest(p,r,n);
printf("simple interest is %d",c);
}
