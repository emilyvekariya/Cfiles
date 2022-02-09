#include<stdio.h>

int main(){
FILE *fp1, *fp2;
int c,d,flag=0;

fp1=fopen("hello.txt","r");
fp2=fopen("hello1.txt","r");

do{
c=getc(fp1);
d=getc(fp2);
if(c!=d)
{
flag=1;
}
}while(c!=EOF && d!=EOF);

if(flag==0){
printf("files are same");
}
else if(flag==1){
printf("files are not same");
}
fclose(fp1);
fclose(fp2);
}
