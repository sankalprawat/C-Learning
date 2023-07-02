#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   float a ,  b  , c , discriminant, 
         root1 , root2 ;
   printf("Enter the value of a , b and c : ");
   scanf("%f %f %f" ,&a,&b,&c);
   discriminant = (b*b)-2*a*c ;
   if(discriminant < 0)
         printf("The roots are Imaginary");
    else{
        root1 = (-b + sqrt(discriminant))/(2.0*a);
        root2 = (-b - sqrt(discriminant))/(2.0*a);
        printf("\nroot1 = %5.2lf  \nroot2 = %5.2lf\n" ,root1 , root2);
    }           
    return 0 ;
}