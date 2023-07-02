#include<stdio.h>
#include<conio.h>
#include<math.h>

 int main()
{
     float d , f , m ;
     printf("Enter the distance travelled by car :");
     scanf("%f" , &d);
     printf("\nEnter the fuel consumed by car :");
     scanf("%f" , &f);
     m = d / f ;
     printf("\nThe mileage of car is : %.3lf" , m);
     return 0 ;
}