//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>
int main(){
    int a,b,sum,diff,pro,quot;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quot=a/b;
    printf("Sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("pro=%d\n",pro);
    printf("quot=%d\n",quot);
    return 0;
}