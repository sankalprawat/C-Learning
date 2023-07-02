// Program to illustrate TYPEDEF fnc

#include<stdio.h>
#include<conio.h>

int main()
{
   typedef int NUM ; 
   NUM x , y , z;

   printf("Enter the value of x and y :\n");
   scanf("%d%d" , &x , &y);
   z = x+y ;
   printf("The sum of X and Y is : %d" , z);
   return 0 ;

}