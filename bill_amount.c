#include<stdio.h>

int main(){

float pq[3][2];  //array for storing product number and its quantity
float retailP[5]={29.5,45.0,49.0,95.5,68.5};
float mul[3];
for(int i=0;i<3;i++){
  for(int j=0;j<2;j++){
    scanf("%f",&pq[i][j]);
  }
}

printf("product number and its quantity: \n");
for(int i=0;i<3;i++){
  for(int j=0;j<2;j++){
    printf("%f ",pq[i][j]);
  }
  printf("\n");
}

for(int i=0;i<3;i++){
  for(int j=1;j<=5;j++){
    if(pq[i][0]==j){
       pq[i][0]=retailP[j-1];
    }
  }
}

for(int i=0;i<3;i++){
  mul[i]=pq[i][0]*pq[i][1];
}
float sum=0;
for(int i=0;i<3;i++){
  sum+=mul[i];
}

printf("%f",sum);


}

