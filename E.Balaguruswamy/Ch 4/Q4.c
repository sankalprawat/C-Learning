#include<stdio.h>
#include<conio.h>

int main ()
{
    float dep , Svalue , Price , Years ;
    printf("\nEnter the Purchase Price of the product : ");
    scanf("%f" , &Price);
    printf("\nEnter the salvage value of product :");
    scanf("%f" ,&Svalue);
    printf("\nEnter the Years of service of product : ");
    scanf("%f" , &Years);

    dep = (int)(Price - Svalue)/Years ;
    printf("\nThe depriciation on the given product is : %.2f" , dep);

    return 0 ;
}