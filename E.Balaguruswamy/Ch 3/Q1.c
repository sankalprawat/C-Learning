#include<conio.h>
#include<math.h>
#include <stdio.h>
int main()
{
  int i , n ;
  float s = 0 ; 
  printf("Enter the number of terms :");
  scanf("%d" &n);
  printf("\n\n");

  for(i=1 ; i<=n ; i++){
    if(i<n){
        printf("1/%d + " , i);
        s+=1/(float)i; 
    }
    if(i==n){
        printf("1/%d " , i);
        s+=1/(float)i;
    }
  }
  printf("The sum of given harmonic series of %d is : %f" , n , i);
}  