#include<stdio.h>

int main(){
  int id,newmarks;
  int marks[5]={21,45,36,78,39};
  printf("enter id of the student : ");
  scanf("%d",&id);
  printf("\n current marks is %d",marks[id]);
  printf("\n updated marks: ");
  scanf("%d",&newmarks);
  marks[id]=newmarks;
  printf("updated marks of %d id student is %d",id,marks[id]);
}
