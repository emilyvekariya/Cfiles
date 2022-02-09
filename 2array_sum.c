#include<stdio.h>

int main(){
  int a[2][2]={1,2,3,4};
  int b[2][2]={4,3,2,1};
  int c[2][2];
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      
        c[i][j]=a[i][j]+b[i][j];
      
    }
  }
  printf("sum of 2 array: ");
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("%d",c[i][j]);
    }
    printf("\n"); 
  }

int max=b[0][0];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
       if(b[i][j]>max){
         max=b[i][j];
       }
    }
}
printf("maximum of array b is: %d",max);



printf("\nmultiplication: \n");
int d[3][3]={1,2,3,4,5,6,7,8,9};
int e[3][3]={2,1,3,4,5,6,8,9,0};
int temp,i,j,k;
int mul[3][3];
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    temp=0;
    for(k=0;k<3;k++){
      temp+=d[i][k]*e[k][j];
    }
    mul[i][j]=temp;
  }
}
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d ",mul[i][j]);
    }
    printf("\n"); 
  }

}
