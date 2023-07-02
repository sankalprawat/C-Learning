#include<stdio.h>

int main()
{
    float x , a , b , c ;
    printf("Enter the value of X , A , B and C :");
    scanf("%f %f %f %f" , &x,&a,&b,&c);

    x=a-b/3+c*2-1 ;

    printf("The value of the given expression is 'x=a-b/3+c*2-1' is %.2f:" , x);
    return 0 ;
}
