#include <stdio.h>
#include <conio.h>


int main()
{
    float pi = 3.14;
    float r , Area ; 
    printf("\n Enter the radius: ");
    scanf("%f" , &r);
    Area = pi*(r*r);
    printf("\n The area of the circle is %f " , Area );

}