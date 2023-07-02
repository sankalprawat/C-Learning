#include<stdio.h>

int main ()
{
    int num , sum=0 , r ;
    printf("Enter any 4 digit integer :");
    scanf("%d" ,&num);

    while(num>0){
        
        r = num%10 ;
        sum += r ;
        num /= 10 ;    
    }
    printf("The sum is : %d" , sum);
}
    