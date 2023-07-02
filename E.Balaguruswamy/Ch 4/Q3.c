#include<stdio.h>

int main()
{
     int num , digit ;
     printf("Enter a positive number of you choice :");
     scanf("%d" , &num);

     if(num<0)
     {
        printf("Enter a positive number !\n");
     }
     else
     {
        while(num>0)
        {
            digit = num % 10 ;
            num = num / 10 ;
            printf("%d\n" , digit
            );
        }
     }
     return 0 ;
}