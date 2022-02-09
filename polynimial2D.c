#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
char p[20],q[20];
printf("enter p(x): ");
scanf("%s",p);
printf("enter q(x): ");
scanf("%s",q);

int a[3][3],b[3][3],c[3][3],d[3][3];

for(int i=0;i<strlen(p);i++){
  if(p[i]=='x' && p[i+1]=='y'){
    if(p[i-1]=='+' || (p[0]=='x' && p[1]=='y')){
       a[1][1]=1;
    }
    else{
       a[1][1]=p[i-1]-48;
    }
  }

  else if(p[i]=='y' && p[i+1]=='x'){
    if(p[i-1]=='+' || (p[0]=='y' && p[1]=='x')){
       a[1][1]=1;
    }
    else{
       a[1][1]=p[i-1]-48;
    }
  }

  else if(p[i]=='x' && p[i+1]=='2'){
    if(p[i-1]=='+' || (p[0]=='x' && p[1]=='2')){
       a[0][2]=1;
    }
    else{
       a[0][2]=p[i-1]-48;
    }
  }

  else if(p[i]=='y' && p[i+1]=='2'){
    if(p[i-1]=='+' || (p[0]=='x' && p[1]=='y')){
       a[2][0]=1;
    }
    else{
       a[2][0]=p[i-1]-48;
    }
  }

  else if(p[i]=='x'){
    if(p[i-1]=='+' || p[0]=='x'){
       a[0][1]=1;
    }
    else if(p[i-1]=='-'){
       a[0][1]=-1;
    }
    else{
       a[0][1]=p[i-1]-48;
    }
  }

  else if(p[i]=='y'){
    if(p[i-1]=='+' || p[0]=='x'){
       a[1][0]=1;
    }
    else if(p[i-1]=='-'){
       a[1][0]=-1;
    }
    else{
       a[1][0]=p[i-1]-48;
    }
  }

    a[0][0]=0;
    a[1][2]=0;
    a[2][1]=0;
    a[2][2]=0;

}

//for 2nd matrix


for(int i=0;i<strlen(q);i++){
  if(q[i]=='x' && q[i+1]=='y'){
    if(q[i-1]=='+' || (q[0]=='x' && q[1]=='y')){
       b[1][1]=1;
    }
    else{
       b[1][1]=q[i-1]-48;
    }
  }

  else if(q[i]=='y' && q[i+1]=='x'){
    if(q[i-1]=='+' || (q[0]=='y' && q[1]=='x')){
       b[1][1]=1;
    }
    else{
       b[1][1]=q[i-1]-48;
    }
  }

  else if(q[i]=='x' && q[i+1]=='2'){
    if(q[i-1]=='+' || (q[0]=='x' && q[1]=='2')){
       b[0][2]=1;
    }
    else{
       b[0][2]=q[i-1]-48;
    }
  }

  else if(q[i]=='y' && q[i+1]=='2'){
    if(q[i-1]=='+' || (q[0]=='x' && q[1]=='y')){
       b[2][0]=1;
    }
    else{
       b[2][0]=q[i-1]-48;
    }
  }

  else if(q[i]=='x'){
    if(q[i-1]=='+' || q[0]=='x'){
       b[0][1]=1;
    }
    else if(q[i-1]=='-'){
       b[0][1]=-1;
    }
    else{
       b[0][1]=q[i-1]-48;
    }
  }

  else if(q[i]=='y'){
    if(q[i-1]=='+' || q[0]=='x'){
       b[1][0]=1;
    }
    else if(p[i-1]=='-'){
       b[1][0]=-1;
    }
    else{
       b[1][0]=q[i-1]-48;
    }
  }

    b[0][0]=0;
    b[1][2]=0;
    b[2][1]=0;
    b[2][2]=0;

}


for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		printf("%d ",a[i][j]);
	}
	printf("\n");
}


for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		printf("%d ",b[i][j]);
	}
	printf("\n");
}


for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];
		d[i][j]=a[i][j]-b[i][j];
	}
}

printf("sum is: %dx2+%dy2+%dxy+%dx+%dy",c[0][2],c[2][0],c[1][1],c[0][1],c[1][0]);
printf("substraction is: %dx2+%dy2+%dxy+%dx+%dy",d[0][2],d[2][0],d[1][1],d[0][1],d[1][0]);

}
