#include<stdio.h>
#include<conio.h>

#define BaseSalary 1500.00
#define BonusRate 200.00
#define Commission 0.02

int main()
{
    int quantity ;
    float GSalary , price , commission , bonus ;
    printf("Input number sold and price : \n");
    scanf("%d %f" , &quantity , &price);
    bonus = BonusRate * quantity ;
    commission = Commission * quantity * price ;
    GSalary = BaseSalary + bonus + commission ;
    printf("\n");
    printf("Bonus         = %6.2f\n" ,bonus); 
    printf("Commission    = %6.2f\n" ,commission); 
    printf("Gross Salary  = %6.2f" ,GSalary);
    return 0 ;
     
}  