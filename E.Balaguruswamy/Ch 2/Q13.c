#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  int x1 , y1 , x2 , y2 ;
  float D ;

  D = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  
  printf("Enter the coordinates :\n");
  printf("Enter the value of x1 :");
  scanf("%d" , &x1);
  printf("Enter the value of x2 :");
  scanf("%d" , &x2);
  printf("Enter the value of y1 :");
  scanf("%d" , &y1);
  printf("Enter the value of y2 :");
  scanf("%d" , &y2);

  printf("\nDistance between the two coordinates are : %f" , D);

  return 0;
}