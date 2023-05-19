#include <stdio.h>
#include <conio.h>
#include <math.h>
  int main ()
   {
    float intrest , rate , principal , time ;

    printf("\n Enter the Principal amount:");
    scanf("%f" , &principal);

    printf("\n Enter the Rate :");
    scanf("%f" , &rate);

    printf("\n Enter the time period :");
    scanf("%f" , &time);
    
    intrest = principal * rate * time/100 ;
    printf("\n The simple intrest is %f" , intrest);

   }