#include<stdio.h>

int main(){
  int num[10]={3,5,6,8,9,6,7,8,9,2};
  int sum=0;
  for(int i=0;i<10;i++){
     sum=sum+num[i];
  }
  printf("sum of all the elements of array is: %d",sum);

}
