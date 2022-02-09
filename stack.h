char stack[100];
int top=-1;

void push(char x)
{
	stack[++top]=x;
}

char pop()
{
	if(top==-1)
		return -1;
	else
		return stack[top--];
}


/*
int push(char s[],int *t,char e,int n)
{
	if(*t<n)
	{
		*t=*t+1;
		s[*t]=e;
		//printf("Top is %d\n",*t);
		//printf("%c",s[*t]);
		return s[*t];
	}
	else
	{
		printf("stack overflow\n");
		return 0;
	}

}

int pop(char s[],int *t)
{
	//printf("%c",s[1]);
	if(*t==0)
	{
		printf("stack underflow\n");
		return 0;
	}
	else
	{
		*t=*t-1;
		return s[*t+1];
	}

}

int peep(char s[],int *t,int i)
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

int change(char s[],int *t,char e,int i)
{
        if((*t-i+1)<=0)
	{
	  printf("Underflow\n");
	  return 0;
	}
	else
	{
	  s[*t-i+1]=e;
	  return 1;
	}
}
*/
