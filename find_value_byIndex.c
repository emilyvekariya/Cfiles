#include<stdio.h>

int main(){
  int num[10]={2,4,5,78,3,6,5,4,2,6};
  int a,i,flag=0;
  printf("write the value: ");
  scanf("%d",&a);
  for(i=0;i<10;i++){
    if(num[i]==a){
      printf("index is: %d",i);
      flag==1;
    }
  }
if(flag==0){
  printf("element not exist");
}
}
