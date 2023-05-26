#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int a , b , c ;
    float Area , s ;
    a=b=c=s=0;
    a=3;
    b=4;
    c=5;

    s = (a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\nArea of the triangle is %f" ,Area);
    
    return 0;
}