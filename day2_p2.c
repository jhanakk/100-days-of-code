//Q4: Write a program to calculate the area and circumference of a circle given its radius
#include<stdio.h>
int main(){
    int radius;
    float area,circum;
    printf("Enter raduis:");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    printf("Area is:%f\n",area);
    printf("circumference:%f",circum);
    return 0;
}