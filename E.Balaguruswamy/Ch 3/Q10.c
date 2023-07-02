//Program to input the value of days and convert it into Years , weeks and days 
/*Not taking leap year into account*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int days , weeks , years ;
    printf("Input the number of days :");
    scanf("%d", &days);
    
    years = days / 365 ;
    weeks = (days % 365) / 7 ;
    days  = days - ((years*365) + (7*weeks));
    
    printf("\nYears = %d" , years);
    printf("\nWeeks = %d" , weeks);
    printf("\nDays  = %d" , days);
    return 0 ;
}