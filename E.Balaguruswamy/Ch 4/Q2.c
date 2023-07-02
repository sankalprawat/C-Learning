#include<stdio.h>

int main()
{
    float x ;
    int y , z ;
    printf("Enter a floating number :");
    scanf("%f" ,&x);
    y = (int)x ;
    z = y%100 ;
    printf("The last two digit of given number is : %02d" , z);
    return 0 ;
}