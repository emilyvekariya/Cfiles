#include<stdio.h>

int main()
{
int n,m,i,j,b,ans1,ans2;
printf("Enter number of rows in array: ");
scanf("%d",&m);

printf("Enter number of columns in array: ");
scanf("%d",&n);

printf("Enter base address of array: ");
scanf("%d",&b);

printf("Enter an element i,j that you want to know its adress: ");
scanf("%d %d",&i,&j);

ans1=(((j-1)*n+(i-1))*4)+b;  //column major
ans2=(((i-1)*m+(j-1))*4)+b;  //row major
printf("column major: address of %d %d element is %d\n",i,j,ans1);
printf("row major: address of %d %d element is %d\n",i,j,ans2);

return 0;
}
