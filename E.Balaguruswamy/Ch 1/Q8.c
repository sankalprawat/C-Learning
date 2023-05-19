#include <stdio.h>
#include <conio.h>

int main (){
     float x1 , y1 , x2 , y2 , x3 , y3 , m , n ;

    printf("\n Enter the points (x1 and y1) :");
    scanf("%f%f" , &x1 , &y1);

    printf("\n Enter the points (x2 and y2) :");
    scanf("%f%f" , &x2 , &y2);

    printf("\n Enter the points (x3 and y3) :");
    scanf("%f%f" , &x3 , &y3);

    m = (y2-y1) / (x2-x1);
    n = (y3-y2) / (x3-x2);

    if (m==n){
        printf("\n All three points lie on the same straight line");
    }

    else {
        printf("\n Point donot lie on the same straight line ");
    }
    return 0;

}