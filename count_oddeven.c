#include<stdio.h>
#include<string.h>

int main(){

char a[10];
printf("enter string a: ");
scanf("%s",a);

int count=0;
for(int i=0;i<10;i++){
 if(a[i]!=0){
   count++;
 }
}
printf("string contains %d elements ",count);
if(count%2==0){
  printf("this string contains even elements");
}
else{
  printf("this string contains odd elements");
}
}
