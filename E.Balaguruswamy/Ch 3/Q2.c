#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float s , r ;
    printf("Enter the price of rice :\n");
    scanf("%f" ,&r);

    printf("Enter the price of sugar:\n");
    scanf("%f" ,&s);

    printf("***LIST OF ITEMS***\n");
    printf("Item     Price\n");
    printf("Rice     Rs %.2lf\n" , r);
    printf("Sugar    Rs %.2lf\n" , s);

    return 0;
}