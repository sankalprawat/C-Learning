#include <conio.h>
#include <stdio.h>

int main  ()
{
  int a , b  , c , d;

  printf("\n Enter the 1st digit :");
  scanf("%d" , &a);

  printf("\n Enter the second digit :");
  scanf("%d" , &b);

  printf("\n Enter the third digit :");
  scanf("%d" , &c);

  printf("\n The three digit number is %d%d%d" ,a,b,c);

  d = a+b+c;

  printf("\n The sum of the given three digit number is %d" , d );

  return 0;


}