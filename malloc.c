#include<stdio.h>
#include<stdlib.h>

int main(){
int *fp;
fp=(int *)malloc(sizeof(int));
printf("memory allocated %p\n",fp);
printf("initial value of *fp %d\n",*fp);
*fp=25;
printf("after assigning value of *fp %d\n",*fp);
free(fp);
}
