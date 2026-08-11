//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
    int len,br,area,peri;
    printf("Enter length and bredth:");
    scanf("%d %d",&len,&br);
    area=len*br;
    peri=2*(len+br);
    printf("Area is:%d\n",area);
    printf("perimeter is:%d",peri);
    return 0;
}