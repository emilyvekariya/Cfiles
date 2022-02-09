#include<stdio.h>

int main(){
 int SP,PE,CP;
 printf("enter selling price of 15 items and its profit: ");
 scanf("%d",&SP); //accepting selling price
 scanf("%d",&PE); //accepting profit earn

 CP=(SP-PE)/15;   //calculating cost price
 printf("cost price=%d",CP);
}
