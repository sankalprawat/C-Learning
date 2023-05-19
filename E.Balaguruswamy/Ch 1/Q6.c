#include <conio.h>
#include <stdio.h>
#include <math.h>
 int main ()
 {
    int year ;

    printf("\n Enter the year :");
    scanf("%d" , &year);

    if (year %400 == 0) {

        printf("\n %d is a leap year ");
    }
    else if (year %100==0){
        printf("\n %d is not a leap year ");

    }
    else if (year %4==0){
        printf("\n %d is a leap year");


    }
    else {
        printf("\n %d is not a leap year");

    }
    return 0;
 }
