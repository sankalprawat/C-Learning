//Printing the previous vode with border lines

#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 20 ,  b= 10 ;
    int c , d;

    c = a+b ;
    d = a-b ;
    
    printf("______________________________________________\n");
    printf("The Diffrence and sum of these two number is :\n");
    printf("%d + %d = %d\n" , a , b , c);
    printf("%d - %d = %d\n" , a , b , d);
    printf("______________________________________________\n");
    return 0;

    
}