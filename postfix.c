#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include "stack.h"

int prec(char a)
{
    switch(a)
    {
	case '+':
	return 1;

	case '\0':
	return 0;

	case '-':
	return 1;

	case '*':
	return 2;

	case '/':
	return 2;

	case '^':
	return 2;
    }
}

int main()
{
char a[20],b[20],s[6];
printf("enter operation p(x): ");
scanf("%c",a);
int j=0,top=0;

for(int i=0;i<strlen(a);i++){
if(isalpha(a[i]))
	{
	//push(b,&j,a[i],20);
	b[j]=a[i];
	j++;
	}
else if(a[i] == '^' || a[i] == '/' || a[i] == '*' || a[i] == '+' || a[i] == '-')
{
	if(top==0){
		//char x=push(s,&top,a[i],6);
		//printf("%c",x);
		s[top]=a[i];
		top++;
	}
	if(prec(s[top])>=prec(a[i])){
		//push(b,&j,pop(s,&top),20);
		//pop(s,&top);
		//push(s,&top,a[i],6);
		b[j]=s[top];
		s[top]=a[i];
		j++;
	}
	if(prec(s[top])<prec(a[i])){
		//push(s,&top,a[i],6);
		s[top]=a[i];
		top++;
	}
}
}

for(int i=0;i<strlen(b);i++){
printf("%c ",b[i]);
}
}
