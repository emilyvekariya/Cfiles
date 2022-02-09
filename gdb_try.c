#include<stdio.h>

int d=10;

void fun3(){
d=10;
}

void fun2(){
d=30;
fun3();
}

void fun1(){
d=20;
fun2();
}

int main(){
printf("welcome");
int a=0;
fun1();
return 0;
}
