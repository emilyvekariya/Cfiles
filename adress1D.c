#include<stdio.h>

int main()
{
int n,i,b,ans;
printf("Enter number of elements in array: ");
scanf("%d",&n);

printf("Enter base address of array: ");
scanf("%d",&b);

printf("Enter an element that you want to know its adress: ");
scanf("%d",&i);

ans=(4*(i-1))+b;
printf("address of %d element is %d",i,ans);

return 0;
}
