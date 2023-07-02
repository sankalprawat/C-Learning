#include<stdio.h>
#include<conio.h>

int main()
{
    int x , i ;
    printf("Enter the integer you want the table of : ");
    scanf("%d" , &x);
     
    printf("The table of given integer is :\n");

    for(i = 1 ; i <= 10 ; i++)
    {
        printf("%d X %d = %d\n" , x , i , i*x);
    } 
    
    return 0 ;
}