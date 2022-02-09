#include<stdio.h>

int push(int [],int *,int,int);
int pop(int [],int *);
int peep(int [],int *,int);
int change(int [],int *,int,int);

int main()
{
// for push the element
  int n=3;
  int s[4],top=0;
  int x;
	while(1)
	{
		printf("Enter element to push: ");
		scanf("%d",&x);
		if(push(s,&top,x,n)==0)
			break;
		else
			printf("Element pushed\n");
	}


	for(int i=n;i>=1;i--)
	{
		printf("%d ",s[i]);
	}
printf("\n");
/*
while(1)
{
	int p=pop(s,&top);
	if(p!=0)
		printf("%d ",p);
	else
		break;
}
*/
int i;
printf("enter the stack num you want to know its value: ");
scanf("%d",&i);
printf("the value of %d index is %d: ",i,peep(s,&top,i));

int d,c;
printf("enter the stack num you want to know change its value: ");
scanf("%d %d",&c,&d);
printf("the value of %d index is %d: ",c,change(s,&top,c,d));

}
int push(int s[],int *t,int e,int n)
{
	if(*t<n)
	{
		*t=*t+1;
		s[*t]=e;
		printf("Top is %d\n",*t);
		return 1;
	}
	else
	{
		printf("stack overflow\n");
		return 0;
	}

}

int pop(int s[],int *t)
{
	if(*t==0)
	{
		printf("stack underflow\n");
		return 0;
	}
	else
	{
		*t=*t-1;
		return s[*t+1];
		printf("Top is %d\n",*t);
	}

}

int peep(int s[],int *t,int i)
{
	if((*t-i+1)<=0)
	{
	  printf("Underflow\n");
	  return 0;
	}
	else
	{
	  return s[*t-i+1];
	}
}

int change(int s[],int *t,int i,int new)
{
        if((*t-i+1)<=0)
	{
	  printf("Underflow\n");
	  return 0;
	}
	else
	{
	  s[*t-i+1]=new;
	  return s[*t-i+1];
	}
}

