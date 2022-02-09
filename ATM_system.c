#include<stdio.h>

static int cash=10000;

void withdraw(int amount){
 cash=cash-amount;
 printf("account balance after withdraw: %d\n",cash);
}

void deposit(int amount){
 cash=cash+amount;
 printf("account balance after withdraw: %d\n",cash);
}

int main(){

int a[]={1546,1234,1245,1345},id,d,chances=3,s,de,w;
int ans;

while(chances!=0){

printf("\nEnter your id:\n");
scanf("%d",&id);
printf("\nEnter your pin:\n");
scanf("%d",&d);

if(a[id]==d){
 con:
 printf("Welcome!..what would you do next?\n");
 printf("press 1 for balance ckeck\n");
 printf("press 2 for withdraw cash\n");
 printf("press 3 for deposit cash\n");
 scanf("%d",&s);
 
 switch(s){
 case 1:
   printf("your balance is: %d\n",cash);
   break;
 case 2:
   printf("how much amount do you want to withdraw?\n");
   scanf("%d",&w);
   withdraw(w);
   printf("your balance is: %d\n",cash);
   break;
 case 3:
   printf("how much amount do you want to deposit\n");
   scanf("%d",&de);
   deposit(de);
   printf("your balance is: %d\n",cash);
   break;
}
printf("\n");
printf("your Balance histroy:\n");
printf("your account balance is: %d\n",cash);
printf("\n");
printf("Do you want to do another transaction?press 1 for yes\n");
scanf("%d",&ans);
 if(ans==1){
  goto con;
 }
 else{
  break;
 }
}
else{
 chances--;
 printf("wrong pin!..%d chances are left\n",chances);
 if(chances==0){
   printf("CARD BLOCKED");
 }
}

}
}

