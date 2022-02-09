#include<stdio.h>

void sort(int n,int* ptr){
int i,j,t;
for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    if(*(ptr+j)<*(ptr+i)){
      t=*(ptr+i);
      *(ptr+i)=*(ptr+j);
      *(ptr+j)=t;
    }
  }
}
for(i=0;i<n;i++){
  printf("%d",*(ptr+i));
}
}

int main(){
int n,a[10];
printf("enter array size:");
scanf("%d",&n);
printf("enter array elements: ");
for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
}
sort(n,a);
}
