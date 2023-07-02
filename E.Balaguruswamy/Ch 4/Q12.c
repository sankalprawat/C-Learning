#include<stdio.h>

int main()
{
    int num1 , num2, num3 , sum , large , small , avg;
    printf("Enter any two values of your choice :");
    scanf("%d %d %d" ,&num1,&num2,&num3 );

    sum = num1 + num2 + num3 ;
    avg = (num1 + num2 + num3) / 3 ;

    printf("The sum of three values are : %d" , sum);
    printf("\nThe average of three values is : %d" , avg );

    int largest = num1;
    int smallest = num1;

    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    printf("\nLargest value: %d\n", largest);
    printf("\nSmallest value: %d\n", smallest);

    return 0 ;

}