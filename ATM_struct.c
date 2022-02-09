#include<stdio.h>

static int cash=10000;


void withdraw(int amount)  //function for withdraw money
{
 cash=cash-amount;
 printf("account balance after withdraw: %d\n",cash);
}


void deposit(int amount)   //function for deposit money
{
 cash=cash+amount;
 printf("account balance after withdraw: %d\n",cash);
}

struct user{               //structure for storing user data
int id;
int pin;
int balance;
}u1,u2,u3,u4;

int main()
{
u1.id=101;     //storing data
u1.pin=11;
u1.balance=1900;

u2.id=102;
u2.pin=12;
u2.balance=19000;

u3.id=103;
u3.pin=13;
u3.balance=11000;
/*
int y;         // new user registration
printf("Do you want to register? press 1/0: ");
scanf("%d",y);
if(y==1){
  printf("\nEnter your id:\n");
  scanf("%d",&u4.id);
  printf("\nEnter your pin:\n");
  scanf("%d",&u4.pin);
  printf("\nEnter your account balance:\n");
  scanf("%d",&u4.balance);
}
*/
int id1,d,chances=3,s,de,w;
int ans;

while(chances!=0){        

printf("\nEnter your id:\n");
scanf("%d",&id1);
printf("\nEnter your pin:\n");
scanf("%d",&d);    //d=pin

if(u1.pin==d || u2.pin==d || u3.pin==d && u1.id==id1 || u2.id==id1 || u3.id==id1){             //if id matches with data set
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
   return -1;
 }
}

}
}
