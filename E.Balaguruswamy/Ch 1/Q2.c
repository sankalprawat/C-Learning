#include <conio.h>
#include <stdio.h>
#include <math.h>

  int main() {
    float a , b , c ;
    printf("\n Enter the value of coefficients : a ,  b and c");
    scanf("%f %f %f" , &a , &b , &c);
     
  float discrimanant;
  discrimanant = b*b - 4*a*c ;

  float root1 , root2 ;
  
  if (discrimanant>0){
    root1 = -b+sqrt (discrimanant) / (2*a);
    root2 = -b-sqrt (discrimanant) / (2*a);
    printf("The roots of the equations are  = %f , %f" , &root1 , &root2);
    
    }
   else if (discrimanant==0){
    root1 = -b/(2*a);
    root2 = -b/(2*a);

    printf("\n The roots of the equation are equal having the value = %d , %d " , &root1 , &root2 );

   } 
   else{

    printf("\n The roots of the equation are imaginary and hence we can not compute them ");
    
   }
   return 0;

  }
       
