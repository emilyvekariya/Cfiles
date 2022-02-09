#include<stdio.h>

int main(){

int a[3][3],p,n,z,c1=0,c2=0,c3=0;
printf("enter 9 elements of the array:");

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    scanf("%d",&a[i][j]);
  }
}
printf("array is:\n");
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    printf("%d ",a[i][j]);
  }
  printf("\n");
} 

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
     if(a[i][j]>0){
       c1++;
     }
  }
}
printf("positive elements: %d",c1);

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
     if(a[i][j]<0){
       c2++;
     }
  }
}
printf("negative elements: %d",c2);

for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
     if(a[i][j]==0){
       c3++;
     }
  }
}
printf("zero elements: %d",c3);

}
