#include<stdio.h>

int *sum(int a,int b){
int c,*q;
c=a+b;
q=&c;
return q;
}

int main()
{
int a,b,*c;
printf("enter two numbers: ");
scanf("%d %d",&a,&b);
c=sum(a,b);
printf("sum is: %d",*c);
}
