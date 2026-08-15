//Q5: Write a program to convert temperature from Celsius to Fahrenheit
#include<stdio.h>
int main(){
float c,f;
printf("Enter temperature in celsius:");
scanf("%f",&c);
f=(9.0/5.0*c)+32;
printf("temperature in fahrenheit is: %f",f);
return 0;
}
