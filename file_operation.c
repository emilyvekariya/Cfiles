#include<stdio.h>
#include<string.h>

int main()
{
FILE *fp;
char str[50];
char c;
/*
create and write file
fp=fopen("hello.txt","w");
fprintf(fp,"hello! how are you?");
*/

/*
read file
fp=fopen("hello.txt","r");
do{
c=getc(fp);
printf("%c",c);
}while(c!=EOF);
*/

/*
append file
fp=fopen("hello.txt","a");
fprintf(fp,"\nare you there?");
*/

/*
read & write both
fp=fopen("hello.txt","r+");

do{
c=getc(fp);
printf("%c",c);
}while(c!=EOF);

fprintf(fp,"yes");
*/

//fclose(fp);

FILE *fp1, *fp2;

fp1=fopen("hello.txt","r");
fp2=fopen("hello1.txt","w");

do{
c=getc(fp1);
putc(c,fp2);
}while(c!=EOF);

fclose(fp1);
fclose(fp2);
}
