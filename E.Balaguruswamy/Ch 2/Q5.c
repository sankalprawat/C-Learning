#include<stdio.h>
#include<conio.h>
int main()
{
    int speed , dist , time ;
    printf("Enter the distance travelled by the car in kilometers :\n");
    scanf("%d" , &dist);

    printf("Enter the time taken by the car to travel that distance in hours :\n");
    scanf("%d" , &time);

    speed = dist/time;

    printf("The distance travel by the car is %d and time taken is %d \n" , dist , time);
    printf("The speed of the car is %dkm/h" , speed);

    return 0;

}
