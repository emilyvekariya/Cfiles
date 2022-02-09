#include<stdio.h>

int main()
{
int a=10,*p,**q;
p=&a;
q=&p;
printf("value of a is: %d %d %d\n",a,*p,**q);
printf("address of a %p\n",p);
printf("address of p %p\n",q);
}
