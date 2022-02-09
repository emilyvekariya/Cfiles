#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int m,n;
printf("add numbers for M x N matrix:\n");
scanf("%d %d",&m,&n);
int a[m][n];

printf("add elements of that matrix:\n");
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}	
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		printf("%d ",a[i][j]);	
	}
        printf("\n");
}

//code for converting sparse matrix to linear matrix

int arr[30][3];
int k=0;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(a[i][j]!=0){   			 
				arr[k][0]=j;				
				arr[k][1]=i;
				arr[k][2]=a[i][j];
				k=k+1;				
		}	
	}
}

//print linear matrix
printf("linear matrix:\nrow column value\n");
for(int i=0;i<k;i++){
	for(int j=0;j<3;j++){
		printf("%d  ",arr[i][j]);	
	}
        printf("\n");
}
}
