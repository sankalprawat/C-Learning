#include<stdio.h>
#include<conio.h>
#include<math.h>

#define pie 3.14

int main()
{
    int x1 , y1 , x2 , y2 ;
    float radius , diameter , area ;

    x1 = 2;
    y1 = 2;
    x2 = 5;
    y2 = 6;

    diameter = sqrt(pow((x2-x1) ,2)+pow((y2-y1) ,2));
    radius = diameter / 2 ;
    area = pie*pow(radius,2);
    printf("The area of the circle is %.2lfsq/cm" , area);
    return 0 ;
}