//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int hr,min,sec,ts;
    printf("Enter seconds:");
    scanf("%d",&ts);
    hr=ts/3600;
    ts=ts%3600;
    min=ts/60;
    sec=ts%60;
    printf("Time=%d:%d:%d",hr,min,sec);
    return 0;   
}
