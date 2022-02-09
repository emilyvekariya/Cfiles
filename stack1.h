#include<stdio.h>

int isfull(int *top, int n)
{	
	if(*top>=n)
		return 1;
	else
		return 0;
}
int isEt(int *top)
{	
	if(*top==0)
		return 1;
	else
		return 0;
}
int pushi(int a[30], int *top, int x, int n)
{
	if(isfull(top,n) == 0)
	{
		*top = *top +1;
		a[*top] = x;
		return 1;
	}
	else
	{
		printf("Stack Overflow\n");
		return 0;
	}
}
int popi(int a[30], int *top)
{
	int x;
	if(isEt(top) == 0)
	{
		x = a[*top];
		a[*top] = 0;
		*top = *top -1;
	} 
	else 
	{	
		printf("Stack is empty. Can not pop element");
		x = 0;
	}
	return x;
}
int peepi(int a[30], int *top, int i)
{
	if(*top-i+1 <0)
	{
		printf("%d index is not aveleble \n", i);
		return 0;
	}
	else
	{
		return a[*top-i+1];
	}
}
void changei(int a[30], int *top, int i, int x)
{
	if(*top-i+1 <0)
	{
		printf("%d index is not aveleble \n", i);
	}
	else
	{
		a[*top-i+1] = x;
		printf("Element is change\n");
	}
}
int pushc(char a[30], int *top, char x, int n)
{
	if(isfull(top,n) == 0)
	{
		*top = *top +1;
		a[*top] = x;
		return 1;
	}
	else
	{
		printf("Stack Overflow\n");
		return 0;
	}
}
char popc(char a[30], int *top)
{
	char x;
	if(isEt(top) == 0)
	{
		x = a[*top];
		a[*top] = 0;
		*top = *top -1;
	} 
	else 
	{	
		printf("Stack is empty. Can not pop element \n");
		x = '0';
	}
	return x;
}
char peepc(char a[30], int *top, int i)
{
	if(*top-i+1 <0)
	{
		printf("%d index is not aveleble \n", i);
		return '0';
	}
	else
	{
		return a[*top-i+1];
	}
}
void changec(char a[30], int *top, int i, char x)
{
	if(*top-i+1 <0)
	{
		printf("%d index is not aveleble \n", i);
	}
	else
	{
		a[*top-i+1] = x;
		printf("Element is change\n");
	}
}
