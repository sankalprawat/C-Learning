#include <conio.h>
#include <stdio.h>
#include <math.h>

 int main ()
  {
    
    float C_I , R , T , P ;

    printf("\n Enter the amount :");
    scanf("%f" , &P);

    printf("\n Enter the time period :");
    scanf("%f" , &T);

    printf("\n Enter the rate : ");
    scanf("%f" , &R);

    C_I = P * pow((1 + R / 100), T ) - P ;

    printf("\n The compound principal is %f" , C_I);

    return 0;      

  }