//#include<stdio.h>
//#include<ctype.h>
//#include "stack.h"

#include<stdio.h>
#include<ctype.h>

char stack[50];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char expression[100];
    char *e, x;
    printf("expression : ");
    scanf("%s",expression);
    printf("\n");
    e = expression;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}
/*

int priority(char x)
{
	if(x=='+' || x=='-')
		return 1;
	if(x=='*' || x=='/')
		return 2;
}

int main()
{
char expression[25];
char *e, x;

printf("expression: ");
scanf("%s",expression);
printf("\n");
e = &expression;

while(*e != '\0')
{
	if(isalnum(*e))
		printf("%c",*e);
	else if(*e =='(')
		push(*e);
	else if(*e ==')')
	{
		while((x=pop()) != '(')
		{
			printf("%c",x);
		}
	}
	else
	{
		while(priority(stack[top]) >= priority(*e))
		{
			printf("%c",pop());
		}
		push(*e);
	}
	e++;
}
printf("%c",pop());
printf("%c",pop());

}*/
