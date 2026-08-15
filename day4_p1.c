//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after getting swapped:%d %d",a,b);
    return 0;
}



