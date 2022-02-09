#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "stack1.h"
int EvalPostfix(char postfix[], int stack[], int *top, int n)
{

	int i;
	char ch;
	int val;
	int A, B,ans,item,m;

	for (i = 0; postfix[i] != ')'; i++) 
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			item = ch - '0';
			m = pushi(stack,top,item,n);
	        }
        	else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') 
		{
			A = popi(stack,top);
			B = popi(stack,top);
			switch (ch) 
			{
			    case '*':
				val = B * A;
				break;

			    case '/':
				val = B / A;
				break;

			    case '+':
				val = B + A;
				break;

			    case '-':
				val = B - A;
				break;
			}
			m = pushi(stack,top,val,n);
		}
	}
	ans = popi(stack,top);
	return ans;
}
void main()
{
	int top, n,ans;
	n = 100;
	int stack[n];
	top = 0;
	char infix[n], postfix[n];
	printf("Enter a Postfix expression :- ");
	scanf("%s", postfix);
	strcat(postfix,")");
	ans = EvalPostfix(postfix,stack, &top, n);
	printf("Ans is:- %d \n", ans);
	
}
