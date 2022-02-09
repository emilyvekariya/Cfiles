#include<stdio.h>

int main()
{
int *p,a=10,b=12;
printf("before swap a & b is: %d & %d\n",a,b);
p=&a;
a=b;
b=*p;
printf("after swap a & b is: %d & %d\n",a,b);
}
