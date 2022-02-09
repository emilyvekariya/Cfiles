#include<stdio.h>
#include<string.h>

struct student{
int id;
char name[20];
float cpi;
int backlog;
}s1;

union book{
char title[20];
char author[50];
int pages;
float price;
}u1;

int main()
{
s1.id=1;
strcpy(s1.name,"Emily");
s1.cpi=8.37;
s1.backlog=0;

printf("Information of student 1 is:\n%d \n%s \n%f \n%d \n",s1.id,s1.name,s1.cpi,s1.backlog);

u1.pages=300;
printf("pages are %d\n",u1.pages);

u1.price=350.00;
printf("pages are %d\n",u1.pages);
printf("price is %f\n",u1.price);

}
