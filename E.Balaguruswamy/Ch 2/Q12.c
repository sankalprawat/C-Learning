#include<stdio.h>
#include<conio.h>
#include<math.h>

void main ()
{
    int x , y ;
    float sum , diff , mul , divi ;

    printf("Enter the value of x :");
    scanf("%d" , &x);
    printf("Enter the value of y :");
    scanf("%d" , &y);

    sum=x+y;
    diff=x-y;
    mul=x*y;
    divi=x/y;

    printf("X       = %d        Y         = %d\n" , x, y);
    printf("sum     = %f        diffrence = %f\n" ,sum , diff );
    printf("product = %f        division  = %f" , mul , divi);

    return 0;
}