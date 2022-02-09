#include<stdio.h>

void swap(int a,int b){
int temp=a;
a=b;
b=temp;
printf("swap numbers is %d & %d",a,b);
}

int main(){
int a,b;
printf("enter anmy two numbers");
scanf("%d %d",&a,&b);
swap(a,b);
}
