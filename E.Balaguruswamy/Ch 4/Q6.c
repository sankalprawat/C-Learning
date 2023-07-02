#include<stdio.h>
#include<math.h>

int main()
{
    float t , a , u , distance ; 
    printf("Enter the initial velocity :");
    scanf("%f" , &u);
    printf("\nEnter the acceleration of vehicle :");
    scanf("%f" , &a);
    printf("\nEnter the time intervals :");
    scanf("%f" ,&t);
    
    distance = ((u*t) + pow(a*t , 2))/2 ;

    printf("The distance travlled by car is : %.2f" , distance);
}
