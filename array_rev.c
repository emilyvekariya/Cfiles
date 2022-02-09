#include<stdio.h>
#include<string.h>

int main(){

int a[10],m,i;
printf("enter number of elements: ");
scanf("%d",&m);

for(i=0;i<m;i++){
  scanf("%d",&a[i]);
}
printf("reverse order\n");
for(i=m-1;i>=0;i--){
  printf("%d\t",a[i]);
}


}
