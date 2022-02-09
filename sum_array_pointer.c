#include<stdio.h>

int main()
{
int a[5],sum=0,i;
int *p=a;

for(int i=0;i<5;i++)
{
  scanf("%d",&a[i]);
}

for(int i=0;i<5;i++)
{
  sum=sum+*p;
  p++;
}
printf("sum is: %d",sum);

return 0;

}
