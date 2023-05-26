#include <stdio.h>
#include <conio.h>

int main()
{   int num;
    printf("Enter the number you want the multiplication table for :\n");
    scanf("%d\n" , &num);

    printf("The multiplication table of %d is\n" ,num);
    
    for(int i = 1 , i < 11 , i++) {

        printf("\n%d X %d = %d \n" , num , i , i*num);


    }
    return 0 ;

}