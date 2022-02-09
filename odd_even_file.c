#include<stdio.h>

int main()
{
FILE *fp1, *fp2, *fp3;
int c,d;

fp1=fopen("data.txt","r");
//fprintf(fp1,"1 2 3 4 5 6 7 8 9");

fp2=fopen("odd.txt","w");
fp3=fopen("even.txt","w");

do{
c=getc(fp1);
if(c%2==0)
{
putc(c,fp3);
}
else
{
putc(c,fp2);
}
}while(c!=EOF);

fclose(fp1);
fclose(fp2);
fclose(fp3);
}
