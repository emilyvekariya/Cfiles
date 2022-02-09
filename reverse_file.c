#include<stdio.h>
#include<string.h>

int main()
{
FILE *fp;
char n[20];
scanf("%s",n);

fp=fopen("name.txt","w");

int l=strlen(n);
for(int i=l-1;i>=0;i--)
{
putc(n[i],fp);
}
fclose(fp);
}

