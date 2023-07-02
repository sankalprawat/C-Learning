// Program to calculate Radius  and area of a given circle using symbolic constant 
#include<stdio.h>
#include<conio.h>
#define pi 3.14159

int main()
{
  float r , AREA , CIRCUM ;
  printf("Enter the radius of the given circle :");
  scanf("%f" , &r);
  
  AREA = pi*r*r ;
  CIRCUM = 2*pi*r ;

  printf("The area of given circle is : %.3lf\n" , AREA);
  printf("The circumfrence of given circle is : %.3lf\n" , CIRCUM);

  return 0 ;

}
