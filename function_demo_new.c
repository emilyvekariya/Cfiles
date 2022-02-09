#include<stdio.h>

extern void addition(int a,int b);
void multiplication(int a,int b);

int g;

void main(){

extern int p;
g=0;
int x=1,y=3;
printf("value of p is %d\n ",p);
addition(x,y);
multiplication(x,y);
printf("g is %d\n",g);
}

void multiplication(int a,int b){
printf("multiplication is %d\n ",a*b);
g++;
}
