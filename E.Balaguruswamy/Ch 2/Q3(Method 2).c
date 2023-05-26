#include <stdio.h>
#include <conio.h>

int main()
{
    int num , i ;

    printf("Enter the number for multiplication table :\n");
    scanf("%d" ,&num);
    printf("The multiplication table of %d is : \n" , num);

    for(i=1 ; i<11 ; i++)
    {
      printf("%d X %d = %d\n" , num , i , i*num);

    }
    return 0 ;

}