#include<stdio.h>
#include<conio.h>

int main ()
{
     int a , b , c , x ;
     printf("Input the value of a , b and c to compute the value for x :\n");
     printf("a =");
     scanf("%d" , &a);
     printf("b =");
     scanf("%d" , &b);
     printf("c =");
     scanf("%d" , &c);

     x = a/(b-c);

     printf("The value of x is %d" ,x);

     return 0;
}