//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num % 2==0){
        printf("It's an even number.");
    }
    else{
        printf("It's an odd number.");
    }
     return 0;
}
