#include<stdio.h>

int main(){
  int num[10]={2,4,6,-2,3,5,6,45,8,0};
  int min=num[0];
  for (int i=1;i<10;i++){
    if(num[i]<min){
      min=num[i];
    }
  }
  printf("min element: %d",min);
}
