#include<stdio.h>
#include<stdlib.h>

int main(){
int *fp,n,m;
printf("Enter number of employess: ");
scanf("%d",&n);
fp=(int *)calloc(n,sizeof(int));
printf("Enter numbers: \n");
for(int i=0;i<n;i++)
	{
		scanf("%d",&fp[i]);
	}
printf("how many employees do you want more? : ");
scanf("%d",&m);
if(m>0)
	{
		fp=(int *)realloc(fp,sizeof(int)*(n+m));
		printf("Enter numbers: \n");
		for(int i=n;i<n+m;i++)
			{
				scanf("%d",&fp[i]);
			}
	}
for(int i=0;i<n+m;i++)
	{
	printf("%d",fp[i]);
	};
free(fp);
}

