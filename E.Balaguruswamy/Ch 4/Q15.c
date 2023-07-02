#include<stdio.h>
#include<math.h>

int main()
{
    printf("Number\tSquare-Root\tSquare\n");
    printf("------\t----------\t------\n");

    for(int num = 0 ; num <= 100 ; num += 10)
    {
       float root = sqrt(num) ;
       int sqr  = num * num ;
       printf("%d\t%.2f\t%d\n" ,num,root,sqr);
    }
    return 0 ;
}