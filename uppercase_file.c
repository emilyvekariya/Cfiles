#include<stdio.h>
#include<string.h>

int main(){
FILE *fp;
char c;
fp=fopen("hello.txt","r");

do{
c=getc(fp);
if(c>='a' && c<='z'){
int a=c;
a=a-32;
c=a;
printf("%c",c);
}
else{
printf("%c",c);
}
}while(c!=EOF);

fclose(fp);
}
