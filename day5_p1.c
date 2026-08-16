//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,c,s;
    printf("Enter principal:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    s=p*r*t/100;
    printf("Simple Interest is:%f\n",s);
    c=p*pow((1+r/100),t)-p;
    printf("Compound Interest is:%f",c);
    return 0;
}
