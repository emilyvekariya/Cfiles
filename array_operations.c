#include<stdio.h>

int main(){

int n,m;
printf("enter number of rows: ");
scanf("%d",&n);
printf("enter number of columns: ");
scanf("%d",&m);
int a[n][m],b[n][m],c[n][m];
printf("enter element of matrix a\n");
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    scanf("%d",&a[i][j]);
  }
}
printf("enter element of matrix b\n");
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    scanf("%d",&b[i][j]);
  }
}

printf("a is: \n");
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    printf("%d ",a[i][j]);
  }
  printf("\n");
}
printf("b is: \n");
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    printf("%d ",b[i][j]);
  }
  printf("\n");
}

//sum

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    c[i][j]=a[i][j]+b[i][j];
  }
  printf("\n");
}

printf("result sum is: \n");
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    printf("%d ",c[i][j]);
  }
  printf("\n");
}

//maximum
 
int max=a[0][0];

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(a[i][j]>max){
      max=a[i][j];
    }
  }
}
printf("maximum of matrix a is: %d\n",max);


//multiplication

int temp;
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    temp=0;
    for(int k=0;k<n;k++){
       temp+=a[i][k]*b[k][j];
    }
    c[i][j]=temp;
  }
}

printf("multiplication of matrix a is: \n");
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    printf("%d ",c[i][j]);
  }
  printf("\n");
}






}
