#include<stdio.h>
#include<string.h>

int main()
{
FILE *fp;
int x,marks;
char n[20];
printf("enter number of student: ");
scanf("%d",&x);

fp=fopen("stud_nameMarks.txt","w");

for(int i=0;i<x;i++){
scanf("%s",n);
scanf("%d",&marks);

fprintf(fp,"name: %s & marks: %d\n",n,marks);

}
fclose(fp);
}
