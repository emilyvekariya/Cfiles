#include<stdio.h>
#include<string.h>

int main(){

char a[10],b[10];
printf("enter string a: ");
scanf("%s",a);
printf("enter string b: ");
scanf("%s",b);
strcpy(a,b);
printf("copied string is %s and b is %s",a,b);

}
