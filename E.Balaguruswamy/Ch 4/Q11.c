#include<stdio.h>

int main()
{
    int n , m ;
    printf("Type any two numbers 'M' and 'N' : ");
    scanf("%d %d" , &m ,&n);

    if(m%n==0){
        printf("M is multiple of N");
    }
    else{
        printf("M is not a multiple of N");
    }
    return 0 ;
}