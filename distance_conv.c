#include<stdio.h>

int main(){
 float distance;
 printf("Enter distance in km");
 scanf("%f",&distance);

 float feet,meter,inches,cm;
 feet=distance*3280.84;
 meter=distance*1000;
 inches=distance*39370.1;
 cm=distance*100000;
 printf("Feet= %f,\nMeter= %f,\nInches= %f,\nCentimeter= %f\n",feet,meter,inches,cm);
 return 0;
}
